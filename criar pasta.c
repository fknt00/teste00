#include <stdio.h>
#include <stdlib.h>
//#include <iostream.h>

int main()
{
    char str[91];

    sprintf(str, "mkdir REGISTROS\n", 0700, 1);
    system(str);

    return(0);
}

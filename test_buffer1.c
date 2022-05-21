#include <stdio.h>
#include <unistd.h>

int main()
{
     printf("Voce nao vai conseguir ler este texto\n"); 
     execl("/bin/ls","ls", NULL);
     return(0);
}

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stdio.h>

int main(int argc, char *argv[])
{	
	struct stat st = {0};
	
	if (stat("REGISTROS 2", &st) == -1) {
		if(mkdir("REGISTROS 2", 0700) == 0){
			printf("Pasta criada");
		}
	}		
	
	return 0;
}
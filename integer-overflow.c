#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

        unsigned short x = 65535;
	x++;
	printf("%d\n", x);
	char *p = malloc(x);
	p[1] = 'a';
	printf("%c", p[1]);	

        return 0;
}

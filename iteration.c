#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[] )

{
	int initial,final;

	printf("C iteration statements\n");

	printf("argc = %d \n", argc);
	printf("argv[0] = %s \n", argv[0] );
	printf("argv[1] = %s \n", argv[1] );
	printf("argv[2] = %s \n", argv[2] );

	printf("while statement: initial/final = %s %s \n",argv[1],argv[2]);
	initial= atoi( argv[1] );
	final  = atoi( argv[2] );

	while ( initial < final) {
	printf("iterator = %d\n", initial);
	initial++;
	}

}

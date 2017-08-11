#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[] )

{
	int initial,final,iterator;

	printf("C iteration statements: for loop\n");

	printf("argc = %d \n", argc);
	printf("argv[0] = %s \n", argv[0] );
	printf("argv[1] = %s \n", argv[1] );
	printf("argv[2] = %s \n", argv[2] );

	printf("for loop: initial/final = %s %s \n",argv[1],argv[2]);
	initial= atoi( argv[1] );
	final  = atoi( argv[2] );

	for (iterator=initial; iterator < final; iterator++) {
	printf("iterator = %d\n", iterator);
	}

}

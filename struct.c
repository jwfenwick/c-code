#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])

{
	int initial,final,iterator;

	printf("C struct and pointers\n");

	printf("argc = %d \n", argc);
	printf("argv[0] = %s \n", argv[0] );
	printf("argv[1] = %s \n", argv[1] );
	printf("argv[2] = %s \n", argv[2] );
	printf("argv[3] = %s \n", argv[3] );
	printf("argv[4] = %s \n", argv[4] );

	struct id_struct 
	{
		char name[20];
		char login[10];
		int age;
		int active; 
	} ;

	struct id_struct id;

	strcpy(id.name,argv[1]);
	strcpy(id.login,argv[2]);
	id.age = atoi(argv[3]);
	id.active = atoi(argv[4]);
	
	printf("struct and fields:\n");
	printf("  Name     = %s\n",id.name);
	printf("  Login ID = %s\n",id.login);
	printf("  Age      = %d\n",id.age);
	printf("  Active   = %d\n",id.active);
}

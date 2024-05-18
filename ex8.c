#include <stdio.h>
	char first_name[]={'G','o','k','u','l'};
int main(int argc,char *argv[]){
	int areas[] = {10,20,30,40,50};
	char name[]="Gokul";
	printf("size of an int is %ld\n",sizeof(int));
	printf("size of areas array is %ld\n",sizeof(areas));
	printf("size of char is %ld\n",sizeof(char));
	printf("size of names array is %ld\n",sizeof(name));
	printf("size of first_name is %ld\n",sizeof(first_name));
	printf("no of elem in areas array is %ld\n" ,sizeof(areas)/sizeof(int));
	printf("no of elem in names array is %ld\n",sizeof(name)/sizeof(char));
	printf("name is %s and first_name is %s\n",name,first_name);
	printf("first elem in areas is %d\n",areas[10]);
}

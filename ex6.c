#include <stdio.h>
int main(int argc,char *argv[]){
	int distance =100;
	float power= 2.345f;
	double super_power= 56789.234;
	char initial = 'P';
	char first_name[]="Gokul";
	char last_name[]="Nath";
	printf("You are %d miles away\n",distance);
	printf("You have %f levels of power\n",power);
	printf("You have %f awesome powers\n",super_power);
	printf("My initial is %c\n",initial);
	printf("My full name is %c.%s %s\n",initial,first_name,last_name);
}

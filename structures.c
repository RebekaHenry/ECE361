#include <stdio.h>

//because there is no string in c, you have to make your own using typedef and chars
#define MAX_CHAR 100

typedef char string[MAX_CHAR+1];

struct{
	string name, occupation;
	int age, IdNumber;
} employee1 = {"Hector", "Electrical Engineer I", 25, 459823}, 
  employee2 = {"Annabelle", "Software Engineer III", 30, 290123};

int main(){

	printf("Employee # 1: %s\n", employee1.name);
	printf("Employee # 2: %s\n", employee2.name);

	return 0;
}
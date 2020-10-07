#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char name1[15] = "Geena";
	char name2[15] = "Dorothy";
	char name3[15] = "Shania";
	char name4[15] = "Geena";
	int i;
	system("cls");
	i = strcmp(name1,name2);
	printf("%s compared with %s returned %d\n",name1,name2,i);
	i = strcmp(name1,name3);
	printf("%s compared with %s returned %d\n",name1,name3,i);
	i = strcmp(name1,name4);
	printf("%s compared with %s returned %d\n",name1,name4,i);
	getch();
}

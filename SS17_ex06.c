#include<stdio.h>
#include<stdlib.h>
void main()
{
	char hotelname1[25] = "Sea View";
	char hotelname2[25] = "Sea Breeze";
	printf("The old name %s\n",hotelname1);
	strcpy(hotelname1,hotelname2);
	printf("The new name %s",hotelname1);
	getch();
}

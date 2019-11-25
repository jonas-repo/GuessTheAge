#include<stdio.h>
#include<conio.h>
main()
{
	int currentYear,birthYear,currentAge;
	printf("ingresa el año actual : ");
	scanf("%d",&currentYear);
	printf("ingresa año de nacimiento: ");
	scanf("%d",&birthYear);
	currentAge = currentYear - birthYear;
	printf("la edad aproximada es: %d",currentAge);
	getch();
}
 


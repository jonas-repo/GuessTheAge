#include<stdio.h>
#include<conio.h>
main()
{
	int a,n,e;
	printf("ingresa el a�o actual : ");
	scanf("%d",&a);
	printf("ingresa la fecha de nacimiento: ");
	scanf("%d",&n);
	e=a-n;
	printf("la edad aproximada es: %d",e);
	getch();
}


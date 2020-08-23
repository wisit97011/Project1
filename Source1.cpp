#include<stdio.h>
#include<conio.h>
int main()
{
	float width, length;
	printf("Enter width : ");
	scanf_s("%f", &width);

	printf("Enter length : ");
	scanf_s("%f", &length);

	printf("Area = %.2f\n\n", width * length);
	_getch();
}
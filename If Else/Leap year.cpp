#include<stdio.h>
#include<conio.h>
main()
{
	int year;
	printf("Enter the year");
	scanf("%d" ,&year);
	if (year%4==0)
	{
		if (year%100==0)
		{
			if (year%400==0)
			printf("leap year");
			else
			printf("Not a leap year");
		}
		else
		printf("leap year");
	}
	else
	printf("Not a leap year");	
}

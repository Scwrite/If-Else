#include<stdio.h>
#include<conio.h>
main()
{
		int a,b,c;
		printf("Enter value of a,b,c");
		scanf("%d%d%d" ,&a,&b,&c);
		if (a>b & a>c) 
		printf("A=%d is greaterr" ,a);
		else if(b>a & b>c)
		printf("b=%d is greater" ,b);
		else
		printf("c=%d is greater" ,c);
	
}


#include<stdio.h>
#include<conio.h>
main()
{
	float bsal,da,hra,gsal;
	printf("Enter the basic salary=");
	scanf("%f" ,bsal);
	if (bsal>0 && bsal<=2000)
	{
		da=bsal*0.4;
		hra=bsal*0.2;		
	}
	else if(bsal>2000)
	{
		da=bsal*0.6;
		hra=bsal*0.4;		
	}
	else
	{
		da=0;
		hra=0;
		gsal=0;
	}
	if (bsal>0) 
	gsal=bsal+da+hra;
	printf("Gross salary is = %.2f ,gsal");

}


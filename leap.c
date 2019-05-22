#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	printf("enter the year");
	scanf("%d",&i);
	if(i%4==0)
	{
		if(i%100==0)
		{
			if(i%400==0)
			printf("leap year");
			else
			printf("not a leap year");
		}
		else
				printf("leap year");
	}
	else
	printf("it is not a leap year");
	getch();
}

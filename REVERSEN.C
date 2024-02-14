// Reverse a number

#include <stdio.h>
#include <conio.h>

void main()
{
	int num,rem,rev=0,temp;
	clrscr();
	printf("Enter a number to be reversed : ");
	scanf("%d",&num);
	temp=num;

	while(num>0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	printf("%d Reverse is %d",temp,rev);
	getch();

}
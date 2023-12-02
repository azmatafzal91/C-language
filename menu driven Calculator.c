#include<stdio.h>
void main ()
{
	char choice;
	float div,prod,sum,subt,num1,num2,Divisor,Divident;
	
//	choice for asking the operations
	printf("a.Addition\nb.Subtraction\nc.Multiplication\nd.Division");
	
	printf("\n\nEnter Your choice from above: ");
	scanf("%c",&choice);
	if(choice=='a' || choice=='A')
	{
		printf("\nEnter First Value:");
		scanf("%f",&num1);
		printf("\nEnter second value: ");
		scanf("%f",&num2);
		sum=num1+num2;
		printf("\nSum of the numbers you privided is %f",sum);
	}
	else if(choice=='b' || choice=='B')
	{
		printf("\nEnter First Value:");
		scanf("%f",&num1);
		printf("\nEnter second value: ");
		scanf("%f",&num2);
		subt=num1-num2;
		printf("\nSubtraction between the numbers you privided is %f",subt);
	}
	else if (choice=='c' || choice=='C')
	{
		printf("\nEnter First Value:");
		scanf("%f",&num1);
		printf("\nEnter second value: ");
		scanf("%f",&num2);
		prod=num1*num2;
		printf("\nmultiplication between the numbers you privided is %f",prod);
	}
	else if(choice=='d'||choice=='D')
	{
		printf("\nEnter The Divident:");
		scanf("%f",&Divident);
		printf("\nEnter The Divisor: ");
		scanf("%f",&Divisor);
		div=Divident/Divisor;
		printf("\nDivision between the numbers you privided is %f",div);
	}
}

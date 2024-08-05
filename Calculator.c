#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



int k=0,result=0;//global declare because it use in all menthods
int menu()
{
	int ch;
	printf("\n1.Add");
	printf("\n2.Sub");
	printf("\n3.Mul");
	printf("\n4.Div");
	printf("\n5.Modulo");
	printf("\n6.Clear");
	printf("\n7.Exit");//get a remainder
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	return(ch);
}

void Add()
{
	int a,b;
	if(k)
	{
		printf("\nEnter a number: ");
		scanf("%d",&a);
		result+=a;
		printf("\nAnswer=%d",result);
	}
	else
	{
	    printf("\nEnter two number: ");
		scanf("%d%d",&a,&b);
		result=a+b;
		printf("\nAnswer=%d",result);	
	}
}
void Sub()
{
	int a,b;
	if(k)
	{
		printf("\nEnter a number: ");
		scanf("%d",&a);
		result-=a;
		printf("\nAnswer=%d",result);
	}
	else
	{
	    printf("\nEnter two number: ");
		scanf("%d%d",&a,&b);
		result=a-b;
		printf("\nAnswer=%d",result);	
	}
}
void Mul()
{
	int a,b;
	if(k)
	{
		printf("\nEnter a number: ");
		scanf("%d",&a);
		result*=a;
		printf("\nAnswer=%d",result);
	}
	else
	{
	    printf("\nEnter two number: ");
		scanf("%d%d",&a,&b);
		result=a*b;
		printf("\nAnswer=%d",result);	
	}
}
void Div()
{
	int a,b;
	if(k)
	{
		printf("\nEnter a number: ");
		scanf("%d",&a);
		result/=a;
		printf("\nAnswer=%d",result);
	}
	else
	{
	    printf("\nEnter two number: ");
		scanf("%d%d",&a,&b);
		result=a/b;
		printf("\nAnswer=%d",result);	
	}
}
void Modulo()
{
	int a,b;
	if(k)
	{
		printf("\nEnter a number: ");
		scanf("%d",&a);
		result%=a;
		printf("\nAnswer=%d",result);
	}
	else
	{
	    printf("\nEnter two number: ");
		scanf("%d%d",&a,&b);
		result=a%b;
		printf("\nAnswer=%d",result);	
	}
}
void Clear()
{
	//to perform operation on new two operand 
	printf("\nOld data cleared");
	result=0;
	k=0;
}
void main()
{
	while(1)
	{
		system("cls");
		printf("\n \n Old Result=%d",result);
	switch(menu())//Reson being k=1 is you add two no then answer is 1 means one digiit
	{
		case 1:
			Add();
			k=1;
			break;
		case 2:
			Sub();
			k=1;
			break;
		case 3:
			Mul();
			k=1;
			break;
		case 4:
			Div();
			k=1;
			break;
		case 5:
			Modulo();
			k=1;
			break;
		case 6:
			Clear();
			break;
		case 7:
			exit(0);
		Default:
			printf("\n Invalid Input");
	}
	getch();
}
}

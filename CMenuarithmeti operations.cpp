/*Program Challenge one
Write a program that lets the user perform arithmetic operations on two numbers. Your program must be menu driven, allowing the user to select the operation (+, -, *, or /) and input the numbers. Furthermore, your program must consist of following functions:

1. Function showChoice: This function shows the options to the user and explains how to enter data.

2. Function add: This function accepts two number as arguments and returns sum.

3. Function subtract: This function accepts two number as arguments and returns their difference.

4. Function multiply: This function accepts two number as arguments and returns product.

5. Function divide: This function accepts two number as arguments and returns quotient.*/



#include<stdio.h>

void showChoice();
float add(float, float);
float mul(float, float);
float sub(float, float);
float div(float, float);

int main(){
	
	float total, num1, num2;
	int choice;
	
	
	do{
		showChoice();
		scanf("%d",&choice);
		switch(choice){
			
			case 1:
				printf("enter a number:");
				scanf("%f",&num1);
				printf("enter second number:");
				scanf("%f",&num2);
				total = add(num1,num2);
				printf("the sum of number is %0.2f", total);
				break;
				
				case 2:
				printf("enter a number:");
				scanf("%f",&num1);
				printf("enter second number:");
				scanf("%f",&num2);
				total = sub(num1,num2);
				printf("the difference of number is %0.2f", total);
				break;
				
				case 3:
				printf("enter a number:");
				scanf("%f",&num1);
				printf("enter second number:");
				scanf("%f",&num2);
				total = mul(num1,num2);
				printf("the product of number is %0.2f", total);
				break;
				
				case 4:
				printf("enter a number:");
				scanf("%f",&num1);
				printf("enter second number:");
				scanf("%f",&num2);
				total = div(num1,num2);
				printf("the quotient of number is %0.2f", total);
				break;
				
		}
	
	
		
	}while(choice!=5);
	return 0;
}



void showChoice(){
	
	
	
	
	printf("\n\t\tMenu\n");
	printf("\t1:add\n");
	printf("\t2;Subtract\n");
	printf("\t3:Multiply\n");
	printf("\t4:Divide\n");
	printf("\t5:Exit\n");
	printf("\tplease enter choice");
}



float add(float num1 , float num2){
	
	float total;
	total = num1+num2;
	return total;
	
}


float mul(float num1 , float num2){
	float total;
	total = num1*num2;
	return total;
	
	
	
}
float sub(float num1 , float num2 ){
	
	float total;
	total = num1-num2;
	return total;
	
	
	
}
float div(float num1 , float num2){
	
	float total;
	total = num1/num2;
	return total;
	
	
}












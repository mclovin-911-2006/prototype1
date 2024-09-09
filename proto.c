#include <stdio.h>


int main() {

	//const data_type var_name = value;
	int num1;
	int num2 ;
	int num3 ;
	printf("write first and second  number :  ");
	scanf("%d %d",&num1,&num2) ; 	

	num3=num1; 

	num1=num2;

	num2=num3;
	printf("   %d  %d   ",num1,num2 );
}
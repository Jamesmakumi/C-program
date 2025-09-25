/*
Name:James Chege Makumi
Reg:CT101/G/26431/25
Description:program to compute qualification to aquire a bank loan
*/

#include<stdio.h>

int main(){
	//variable declaration
	int age;
	int income;
	
	//prompt to enter age
	printf("Enter age:");
	scanf("%d",&age);
	
	//prompt to enter income
	printf("Enter income:\n");
	scanf("%d",&income);
	
	//loan eligibility
	if(age >= 21 && income >= 21000){
		printf("conratulations you qualify for a loan.\n");
	  }else{
		printf("unfortunately,we are unable to offer you a loan at this time");
	  }
	
	return 0;
	
	
}
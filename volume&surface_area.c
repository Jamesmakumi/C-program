/*
Name:James Chege Makumi
Reg:CT101/G/26431/25
Description:program to compute volume&surface area of cylinder
*/

#include<stdio.h>

//main function

int main(){
	float pi,radius,height,volume,surface_area;
	
	//prompt to enter pi
	printf("Enter pi:");
	scanf("%f",&pi);
	
	//prompt to enter radius
	printf("\n Enter radius:");
	scanf("%f",&radius);
	
	//prompt to enter height
	printf("\n Enter height:");
	scanf("%f",&height);
	
	//volume&surface_area
	volume=pi*radius*radius*height;
	surface_area=2*pi*radius*radius+2*pi*radius*height;
	
	//display volume&surface_area
	printf("\n volume is %.2f",volume);
	printf("\n surface_area is %.2f",surface_area);
	
	return 0;
	
}
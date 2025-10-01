/*
NAME: james chege makumi
reg : CT/101/G/26431/25
description: programme to check elligibility  of final exam
*/

#include <stdio.h>

int main(){
	//variable declaration
	float attedance,average_marks;
	
	//prompt to entr attedance
	
	printf("enter attedance :\n");
	scanf("%f",&attedance);
	
	//prompt to enter average-marks
	
	printf("average_marks :\n");
	scanf("%f",&average_marks);
	
	//elligibility check
	
	if(attedance>=0.75 && average_marks>= 40){
		
		printf("you are elligible");
		
	}else{
		printf("you are not elligible");
	} 
	
	return 0;
}
	

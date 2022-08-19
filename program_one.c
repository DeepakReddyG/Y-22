/* 
Write a C program that reads a floating point number x
and print the value of polynomial 3x^2+5x+9 
and store it in a variable named as y. 
*/ 
#include<stdio.h>
#include<math.h> 
int main() {
	float x, y;
	printf("Enter x value: "); 
	scanf("%f", &x); 
	
	y = (3*pow(x,2))+(5*x)+9; 
	
	printf("y = %f\n", y); 

	return 0;
}

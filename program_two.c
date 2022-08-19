/*
Write a c program to perform sum of two floating point numbers 
and display the sum in scientific float format 
Sample Example:
Enter two numbers=
13.3478
32.1234
result=4.547120e+01
[Hint: Use %e format specifier]
*/ 

#include<stdio.h>
int main() {
	float a, b, result; 
	printf("Enter a value: "); 
	scanf("%f", &a); 
	
	printf("Enter b value: "); 
	scanf("%f", &b); 
	
	result = a+b; 
	
	printf("result = %e", result); 

	return 0;
	
}

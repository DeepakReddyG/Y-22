/*
Write a C program by inputting two integers, 
Set the value of âaâ to their sum, and âbâ to their absolute difference. print a,b values.
[Hint: Use abs() from math.h]
*/ 

#include<stdio.h>
#include<math.h> 
#include<stdlib.h>
int main() {

	int x,y,a,b;
	printf("Enter first value: "); 
	scanf("%d", &x); 
	printf("Enter second value: "); 
	scanf("%d", &y);  
	a = x+y;
	b = abs(x-y); 
	printf("sum a = %d\n", a); 
	printf("absolute difference b = %d\n", b); 

	return 0; 
}

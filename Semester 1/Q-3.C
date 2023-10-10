/Write a program to calculate area and perimeter of a Rectangle/


#include<stdio.h>
void main()

{ 
int l,b,Ar,Pe;
printf("Enter the values of Length and Breadth");
scanf("%d %d",&l,&b);
Ar = l*b; 
Pe = 2*(l+b);
printf("Area of the rectangle = %d and Parameter of the rectangle = %d",Ar,Pe);
}

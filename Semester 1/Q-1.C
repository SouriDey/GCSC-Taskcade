//Write a program to check whether the given no. is prime or not

#include<stdio.h>
int main()

{
  int i,n=2,a,prime=0;
  printf("Enter the number:");
  scanf("%d",&i);
  while(n<i)
  {
    if(i%n==0)
    {
      prime++;
    }
    n++;
  }
  if(prime==0)
  {
    printf("the given number is Prime");
  }
  else
  {
    printf("the given number is Not Prime");
  }
  return 0;
}

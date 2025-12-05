#include<stdio.h>
  int main()
{
  int num1,num2,sum,difference,product,quotient;
  printf("enter two numbers");
  scanf("%d%d",&num1,&num2);
  sum=num1+num2;
  difference=num1-num2;
  product=num1*num2;
  quotient=num1/num2;
  printf(" sum =%d, difference =%d, product = %d ,quotient = %d" ,sum,difference,product,quotient");
  return 0;
}         

//Calling function with arguments


#include <stdio.h>
#include <stdlib.h>
void sum(int,int);//function declaration
void main()
{
   sum(8,9);// calling the sum function with arguments
}
void sum(int a,int b)// function definition.
{   int sum =0;
    sum = a+b;
    printf("Sum of %d and %d = %d",a,b,sum);
}

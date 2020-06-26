#include<stdio.h>
#include<stdio.h>

int ft_iterative_factorial(int nb)
{	int a;
	int fact;
    int i = nb;

   fact	= 1;

   if( nb <=0)
   fact = 1;

   else {
	   a =1;

	   while(a <= nb)
	   {
		   fact = fact * a;
			   putchar(a++);
	   }
   
  } 
   return fact;
}
/*
int main()
{
  ft_iterative_factorial(1);
}
*/
	

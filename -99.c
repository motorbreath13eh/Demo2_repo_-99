// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

/* Write a program in C language that asks the user to enter various integer values with evaluation.
Once the user provides an integer value of -99 the program should terminate and display the following to the client:
a) the number of integers he typed other than -99,
b) the largest of all the integers he entered except for -99
c) the smallest of all but -99
d) the average of all the integers he entered except for -99.
Provision should also be made for the case that the user immediately gives -99.*/

int main()
{
	system("CHCP 1253>nul");
	
	// Declaring variables
	float x, mo;
	int i, a, max, min, plithos_akeraiwn, sum
  bool flag;
  
	// Necessary initialization of variables
	plithos_akeraiwn = 0;
	i = 0;
	flag = true;
	sum = 0;
	
	do
	{
		printf("Please enter an integer: \n");
		scanf("%f", &x);
		a = (int)x;
		
		// When the user gives -99, the program exits do-while
		if(x==-99)
				flag = false;
    
		// Evaluation if the given number is an integer
		else if (x!=-99 && x!=a)
		{
			printf("\n\aThe number you entered was not an integer!!!\n");
		}
    
		// When the user enters an integer that is not -99
		else if (x!=-99 && x==a)
		{
			// Initialization of max and min after the user gives the 1st integer
			for(;i<=0;i++)
			{
				max = a;
				min = a;
			}
			plithos_akeraiwn++;
			// Evaluation of max and min with the given number by the user
			max = (a >= max)? a : max;
			min	= (a <= min)? a : min;
			sum += a;
			mo = (sum)/(float)plithos_akeraiwn;
		}
			
	}while(flag==true);
	
	// The case the user gives immediately the integer "-99"
	if(plithos_akeraiwn==0)
	{
		printf("\n\aYou entered -99!!!\n");
		printf("The program will end!!!\n");
		sleep(4);
	}
  
	// The rest cases. When the user gives an integer or more and then -99
	else if (plithos_akeraiwn==1)
	{
		printf("You entered one integer, so the number of integers you entered is %d.\n", plithos_akeraiwn);
		printf("Because you gave one integer the greatest number you entered is %d.\n", max);
		printf("Because you gave one integer the minor number you entered is %d.\n", min);
		printf("The average is mo = %.3f.\n\n", mo);
		sleep(4);
	}
  
	// Output of the number of integers, their max, their min and their average
	else
	{
		printf("The number of integers you entered is %d.\n", plithos_akeraiwn);
		printf("The greatest number from all the numbers you entered is %d.\n", max);
		printf("The minor number from all the numbers you entered is %d.\n", min);
		printf("The average of %d integers you entered is mo = %.3f.\n\n", plithos_akeraiwn, mo);
		sleep(4);
	}

	system("pause");
	return 0;
}

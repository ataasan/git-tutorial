#include <stdio.h>
#include "espl_lib.h"
int main(){
	int n=0;                           /* int to keep track of the times the loop #2 was called */
	char contchar='n';                 /* user input for continuing */
	unsigned int num=0;                /* main user input int, to be converted to string */
	printf ("Hello ESPL\n");           
	do                                 /* Loop #1, main loop that asks for a number and converts it */
		{
			printf ("Input a number to be turned into a character: ");
			scanf ("%u", &num);        /* get number */
			printf ("Your number in string is: %s\n", num_to_words(num));
			do                         /* Loop #2, checks if user wants to continue */
				{
					if (n==0)  /* different output depending on how many times this loop was entered */
						{
							printf ("Would you like to enter a new number(Y/y) or exit the program(N/n)? ");
						}
					else
					if (n==1)
						{
							printf ("Wrong input! Please input yes(Y/y) or no(N/n)! ");
						}
					scanf ("%s", &contchar);
					n=1;
				}
			while (contchar!='Y'&&contchar!='y'&&contchar!='N'&&contchar!='n');
			n=0;
		}
	while (contchar=='Y'||contchar=='y');
	
	printf ("Bye!\n");	
	
	return 0;
}

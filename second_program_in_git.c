#include <stdio.h>

// multiplication table of two numbers program in C


int main (){
	int number1, number2;
	printf("Enter your number1:");
	scanf("%d",&number1);
	printf("Enter your number2:");
	scanf("%d",&number2);
	for(int counter = 0 ; counter <=10 ; counter++)
	{
	    printf("%d * %d = %d\n",number1, counter,number1*counter,"\t%d * %d = %d",number2,counter,number2*counter);
	}

return 0;


}

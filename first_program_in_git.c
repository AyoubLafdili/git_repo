#include <stdio.h>

// multiplication table program in C


int main (){
	int number;
	printf("Enter your number:");
	scanf("%d",&number);
	for(int counter = 0 ; counter <=10 ; counter++)
	{
	    printf("%d * %d = %d\n",number, counter,number*counter);
	}

return 0;


}

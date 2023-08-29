#include <stdio.h>

// multiplication table of two numbers program in C


int main (){

	printf("Enter your number1:");
	scanf("%d",&number1);
	printf("Enter your number2:");
	scanf("%d",&number2);
	for(int counter = 1 ; counter <=1 ; counter++)
	{
	    for(int i = 0 ;i <= 10; i++ ){
	        printf("%d * %d = %d\n",number1, i,number1*i);
	    }
    printf("________\n\n");

	    for(int j = 0 ; j <= 10 ; j++){
	        
	        printf("%d * %d = %d\n",number2, j,number2*j);
	    }
	}
return 0;
}

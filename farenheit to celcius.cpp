#include<stdio.h>
int main()
{
	float farenheit,celcius;
	printf("\n temperature in farenheit:");
	scanf("%f",&farenheit);
	celcius=(farenheit-32)/1.8;
	printf("\n temperature in celcius:%f",celcius);
	return 0;
	
}

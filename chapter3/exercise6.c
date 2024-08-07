#include<stdio.h>

int main(){
	int lenguaje;
	int publisher;
	int book_number;
	int check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d", &lenguaje, &publisher, &book_number, &check_digit);

	printf("Lenguaje: %d\n", lenguaje);
	printf("Publisher: %.3d\n", publisher );
	printf("Book number: %.5d\n", book_number);
	printf("check_digit: %d\n", check_digit);


}
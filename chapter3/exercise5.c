#include<stdio.h>

int main(){
	int number;
	float price;
	char date[20];

	printf("Enter item number: ");
	scanf("%d", &number);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yy) : ");
	scanf("%s", date);



	printf("Item\tUnit\tPurchase\n");
	printf("\tprice\tdate\n");
	printf("%d\t%.2f\t%s\n", number, price, date);
}
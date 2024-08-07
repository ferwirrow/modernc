#include<stdio.h>

int main(){
	int days;
	int month;
	int year;

	printf("Enter a date\n" );
	scanf("%d/%d/%d", &month, &days, &year);

	printf("you entered the date %d%.2d%.2d\n", year,month,days);
}
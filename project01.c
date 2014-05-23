#include <stdio.h>
#include "project01.h"

void scanf_function()
{
	int ID;
	char place[20];
	
	printf("Please give me your ID : ");
	scanf("%d" , &ID);
	
	printf("You have enter your ID as %d\n", ID);
	
	printf("Please give me your city you live in : ");
	scanf("%s" , &place);
	
	printf("You live in %s\n", place);
}

void main(void)
{
	char name;
	int age;
	float weight;
	
	
	printf("%-15s","Name");	printf("%-5s","Age"); printf("%-10s","Weight    \n");
	printf("\n");
	
	printf("%-15.15s", "Jayson");
	printf("%-5d", 23);
	printf("%.2f\n", 78.9);
	
	printf("%-15.15s", "Eric");
	printf("%-5d", 13);
	printf("%.2f\n", 58.9);
	
	printf("%-15.15s", "Peter Johnson");
	printf("%-5d", 27);
	printf("%.2f\n", 778.9);
	
	printf("%-15.15s", "Johnson");
	printf("%-5d", 37);
	printf("%.2f\n", 278.9);
	
	printf("%-15.15s", "Alexandra");
	printf("%-5d", 41);
	printf("%.2f\n", 132.9);
	
	printf("\n");
	scanf_function();
}

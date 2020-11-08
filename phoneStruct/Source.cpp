#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct phonebook getData();
void printData(struct phonebook);

struct phonebook
{
	char name[10];
	char telnum[10];
};

int main()
{
	int i = 0, num = 2;
	char tmp[10];

	struct phonebook phb[5];
	
	do {
		printf("How many number to add tel.no(Max=5) = ");
		gets_s(tmp);
	} 
	while (atoi(tmp) < 0 || atoi(tmp) > 5);
	
	num = atoi(tmp);
	printf_s("Please add data\n");
	for (i = 0; i < num; i++)
	{
		phb[i] = getData();
	}
	printf_s("\nData list\n");
	for (i = 0; i < num; i++)
	{
		printData(phb[i]);
	}
	printf_s("Already Add");
	_getch();
}

struct phonebook getData()
{
	struct phonebook phone;

	printf_s("Enter name = ");
	gets_s(phone.name);
	printf_s("Enter tel number = 0");
	gets_s(phone.telnum);
	return phone;
};

void printData(struct phonebook pb) {
	printf_s("%s\t0%s\n", pb.name, pb.telnum);
}
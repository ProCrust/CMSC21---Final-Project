#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char surname[50], name[50], birthday[20]="", month[10], day[2], year[4], address[100], answer;

	printf("-----------ENTER NAME-----------\n");
	printf("Surname: ");
	gets(surname);
	strcat(surname, ", ");

	printf("Name: ");
	gets(name);

	strcat(surname, name);
	

	printf("\n-----------ENTER BIRTHDAY-----------\n");
	printf("Month: ");
	gets(month);
	strcat(birthday, month);
	strcat(birthday, " ");

	printf("Day: ");
	gets(day);
	strcat(birthday, day);
	strcat(birthday, ", ");

	printf("Year: ");
	gets(year);
	strcat(birthday, year);

	

	printf("\nEnter address: ");
	gets(address);

	system("cls");
	printf("Name: ");
	puts(surname);
	printf("\nBirthday: ");	
	puts(birthday);
	printf("\nAddress: ");
	puts(address);

	printf("Is the displayed information correct? (y|n): ");
	scanf("%c",&answer);

	if(answer == 'n'){
		main();
	}
	

	FILE *name_file;
	FILE *birthday_file;
	FILE *address_file;

	name_file = fopen("names.txt", "a");
	birthday_file = fopen("birthdays.txt", "a");
	address_file = fopen("addresses.txt", "a");

	fprintf(name_file, "\n%s", surname);
	fclose(name_file);
	fprintf(birthday_file, "\n%s", birthday);
	fclose(birthday_file);
	fprintf(address_file, "\n%s", address);
	fclose(address_file);
	
}
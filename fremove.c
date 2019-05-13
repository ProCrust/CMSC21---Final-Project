
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int removeNameFunc(char ToRemoveName[]);
int removeBirthdateFunc(char ToRemoveBirthdate[]);
int removeAddressFunc(char ToRemoveAddress[]);

int main(){

	char ToRemoveName[50];
	char ToRemoveBirthdate[50];
	char ToRemoveAddress[50];

	printf("Enter Name to Remove: ");
	gets(ToRemoveName);
	removeNameFunc(ToRemoveName);

	// printf("Enter Birthdate to Remove: ");
	// gets(ToRemoveBirthdate);
	// removeBirthdateFunc(ToRemoveBirthdate);

	// printf("Enter Address to Remove: ");
	// gets(ToRemoveAddress);
	// removeAddressFunc(ToRemoveAddress);
}

//--------------------------------------------------------------------------------------------

int removeNameFunc(char ToRemoveName[]){
	
	FILE *nameFile;
	char lineName[21];
	char *buffer;
	char *ptr; 
	
	buffer =  malloc(1000*sizeof(char));
	memset(buffer, 0, 1000*sizeof(char));
	ptr = buffer;

	nameFile = fopen("name.txt", "r");

	strcat(ToRemoveName, "\n");

	if (nameFile != NULL){

		while(!feof(nameFile)){

			fgets(lineName, 21, nameFile);

			if ((strcmp(lineName, ToRemoveName)) != 0){
				strcpy(ptr, lineName);
				ptr += strlen(lineName);
			}
		} 	

		fclose(nameFile);

		nameFile = fopen("name.txt", "w");
		fprintf(nameFile, "%s", buffer);

		fclose(nameFile);
	}

	else {
		printf("Could not open file"); }
}

//---------------------------------------------------------------------------------------------

int removeBirthdateFunc(char ToRemoveBirthdate[]){

	FILE *bdayFile;
	char lineBday[21];
	char *buffer;
	char *ptr; 
	
	buffer =  malloc(1000*sizeof(char));
	memset(buffer, 0, 1000*sizeof(char));
	ptr = buffer;

	bdayFile = fopen("bday.txt", "r");

	strcat(ToRemoveBirthdate, "\n");

	if (bdayFile != NULL){

		while(!feof(bdayFile)){

			fgets(lineBday, 21, bdayFile);

			if ((strcmp(lineBday, ToRemoveBirthdate)) != 0){
				strcpy(ptr, lineBday);
				ptr += strlen(lineBday);
			}
		} 	

		fclose(bdayFile);

		bdayFile = fopen("bday.txt", "w");
		fprintf(bdayFile, "%s", buffer);

		fclose(bdayFile);
	}

	else {
		printf("Could not open file!"); }

}


//--------------------------------------------------------------------------------------

int removeAddressFunc(char ToRemoveAddress[]){

	FILE *addressFile;
	char lineAddress[21];
	char *buffer;
	char *ptr; 
	
	buffer =  malloc(1000*sizeof(char));
	memset(buffer, 0, 1000*sizeof(char));
	ptr = buffer;

	addressFile = fopen("address.txt", "r");

	strcat(ToRemoveAddress, "\n");

	if (addressFile != NULL){

		while(!feof(addressFile)){

			fgets(lineAddress, 21, addressFile);

			if ((strcmp(lineAddress, ToRemoveAddress)) != 0){
				strcpy(ptr, lineAddress);
				ptr += strlen(lineAddress);
			}
		} 	

		fclose(addressFile);

		addressFile = fopen("address.txt", "w");
		fprintf(addressFile, "%s", buffer);

		fclose(addressFile);
	}

	else {
		printf("Could not open file!"); }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

//HEADERS+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void mainHeader () {
//	system("clear");
	char title[]="S T A T I S T I C S   R E C O R D";
	printf("\n\n===========================================================================================================================================================================\n%*s\n===========================================================================================================================================================================\n\n", 85+strlen(title)/2, title, 85+strlen(title)/2);
}
void viewHeader () {
//	system("clear");
	char title[]="S T A T I S T I C S   R E C O R D   ||   L I S T    O F   R E C O R D S";
	printf("\n\n===========================================================================================================================================================================\n%*s\n===========================================================================================================================================================================\n\n", 85+strlen(title)/2, title, 85+strlen(title)/2);
}
void searchHeader () {
//	system("clear");
	char title[]="S T A T I S T I C S   R E C O R D   ||   S E A R C H   F R O M   R E C O R D S";
	printf("\n\n===========================================================================================================================================================================\n%*s\n===========================================================================================================================================================================\n\n", 85+strlen(title)/2, title, 85+strlen(title)/2);
}
void addHeader () {
//	system("clear");
	char title[]="S T A T I S T I C S   R E C O R D   ||   A D D   A   R E C O R D";
	printf("\n\n===========================================================================================================================================================================\n%*s\n===========================================================================================================================================================================\n\n", 85+strlen(title)/2, title, 85+strlen(title)/2);
}
void removeHeader () {
//	system("clear");
	char title[]="S T A T I S T I C S   R E C O R D   ||   R E M O V E   A   R E C O R D";
	printf("\n\n===========================================================================================================================================================================\n%*s\n===========================================================================================================================================================================\n\n", 85+strlen(title)/2, title, 85+strlen(title)/2);
}
//HEADERS-----------------------------------------------------------------------------------

int main(void) {
	mainHeader();
	viewHeader();
	searchHeader();
	addHeader();
	removeHeader();
}

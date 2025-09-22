#include <stdio.h>
#include <string.h>

typedef struct data{
	char location[101];
	char city[101];
	char price[101];
	char rooms[101];
	char bathroom[101];
	char carpark[101];
	char type[101];
	char furnish[101];
}dat;

FILE *file;
int total = 0;
dat dats[99999];

void readFile(){
	file = fopen("file.csv","r");
    if(file==NULL){
        printf("FILE NOT FOUND");
        return;
    }
    while(!feof(file)){
        fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", dats[total].location, dats[total].city, dats[total].price, dats[total].rooms, 
		dats[total].bathroom, dats[total].carpark, dats[total].type, dats[total].furnish);
        total++;
    }
    fclose(file);
}

void displayData(int x){
	printf ("Location City Price Rooms Bathroom Carpark Type Furnish\n");
	for (int i=1; i<=x; i++){
		printf ("%s %s %s %s %s %s %s %s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms, dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
	}
}

void searchData(char* column, char* value){
	int dataFound=0;
	if (strcmp(column, "Location")==0){
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].location, value)==0){
				dataFound=1;
			}
		}
		if (dataFound==1){
			printf("Data found. Detail of data:\n");
			printf ("Location City Price Rooms Bathroom Carpark Type Furnish\n");
		}
		else if (dataFound!=1){
			printf("Data not found!\n");
		}
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].location, value)==0){
				printf ("%s %s %s %s %s %s %s %s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms, dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
			}
		}
	}
	else if (strcmp(column, "City")==0){
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].city, value)==0){
				dataFound=1;
			}
		}
		if (dataFound==1){
			printf("Data found. Detail of data:\n");
			printf ("Location City Price Rooms Bathroom Carpark Type Furnish\n");
		}
		else if (dataFound!=1){
			printf("Data not found!\n");
		}
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].city, value)==0){
				printf ("%s %s %s %s %s %s %s %s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms, dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
			}
		}
	}
	else if (strcmp(column, "Price")==0){
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].price, value)==0){
				dataFound=1;
			}
		}
		if (dataFound==1){
			printf("Data found. Detail of data:\n");
			printf ("Location City Price Rooms Bathroom Carpark Type Furnish\n");
		}
		else if (dataFound!=1){
			printf("Data not found!\n");
		}
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].price, value)==0){
				printf ("%s %s %s %s %s %s %s %s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms, dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
			}
		}
	}
	else if (strcmp(column, "Rooms")==0){
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].rooms, value)==0){
				dataFound=1;
			}
		}
		if (dataFound==1){
			printf("Data found. Detail of data:\n");
			printf ("Location City Price Rooms Bathroom Carpark Type Furnish\n");
		}
		else if (dataFound!=1){
			printf("Data not found!\n");
		}
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].rooms, value)==0){
				printf ("%s %s %s %s %s %s %s %s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms, dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
			}
		}
	}
	else if (strcmp(column, "Bathroom")==0){
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].bathroom, value)==0){
				dataFound=1;
			}
		}
		if (dataFound==1){
			printf("Data found. Detail of data:\n");
			printf ("Location City Price Rooms Bathroom Carpark Type Furnish\n");
		}
		else if (dataFound!=1){
			printf("Data not found!\n");
		}
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].bathroom, value)==0){
				printf ("%s %s %s %s %s %s %s %s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms, dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
			}
		}
	}
	else if (strcmp(column, "Carpark")==0){
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].carpark, value)==0){
				dataFound=1;
			}
		}
		if (dataFound==1){
			printf("Data found. Detail of data:\n");
			printf ("Location City Price Rooms Bathroom Carpark Type Furnish\n");
		}
		else if (dataFound!=1){
			printf("Data not found!\n");
		}
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].carpark, value)==0){
				printf ("%s %s %s %s %s %s %s %s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms, dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
			}
		}
	}
	else if (strcmp(column, "Type")==0){
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].type, value)==0){
				dataFound=1;
			}
		}
		if (dataFound==1){
			printf("Data found. Detail of data:\n");
			printf ("Location City Price Rooms Bathroom Carpark Type Furnish\n");
		}
		else if (dataFound!=1){
			printf("Data not Found!\n");
		}
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].type, value)==0){
				printf ("%s %s %s %s %s %s %s %s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms, dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
			}
		}
	}
	else if (strcmp(column, "Furnish")==0){
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].furnish, value)==0){
				dataFound=1;
			}
		}
		if (dataFound==1){
			printf("Data found. Detail of data:\n");
			printf ("Location City Price Rooms Bathroom Carpark Type Furnish\n");
		}
		else if (dataFound!=1){
			printf("Data not found!\n");
		}
		for (int i=1; i<=total; i++){
			if(strcmp(dats[i].furnish, value)==0){
				printf ("%s %s %s %s %s %s %s %s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms, dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
			}
		}
	}
	else{
		printf("Column not found\n");
	}
}

void swap(dat* a, dat* b) {
    dat temp = *a;
    *a = *b;
    *b = temp;
}

void sortData (char* column, char* sort){
	int sorting = (strcmp(sort, "Ascending") == 0);
	for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            int compareResult = 0;
            if (strcmp(column, "Location") == 0) {
                compareResult = strcmp(dats[j].location, dats[j + 1].location);
            } else if (strcmp(column, "City") == 0) {
                compareResult = strcmp(dats[j].city, dats[j + 1].city);
            } else if (strcmp(column, "Price") == 0) {
                compareResult = strcmp(dats[j].price, dats[j + 1].price);
            } else if (strcmp(column, "Rooms") == 0) {
                compareResult = strcmp(dats[j].rooms, dats[j + 1].rooms);
            } else if (strcmp(column, "Bathroom") == 0) {
                compareResult = strcmp(dats[j].bathroom, dats[j + 1].bathroom);
            } else if (strcmp(column, "Carpark") == 0) {
                compareResult = strcmp(dats[j].carpark, dats[j + 1].carpark);
            } else if (strcmp(column, "Type") == 0) {
                compareResult = strcmp(dats[j].type, dats[j + 1].type);
            } else if (strcmp(column, "Furnish") == 0) {
                compareResult = strcmp(dats[j].furnish, dats[j + 1].furnish);
            } else {
                return;
            }
            if ((compareResult > 0 && sorting) || (compareResult < 0 && !sorting)) {
                swap(&dats[j], &dats[j + 1]);
            }
        }
    }
}

void exportData(const char* newFileName) {
    char outputFilename[110];
    if (strstr(newFileName, ".csv") == NULL) {
        snprintf(outputFilename, sizeof(outputFilename), "%s.csv", newFileName);
    } else {
        snprintf(outputFilename, sizeof(outputFilename), "%s", newFileName);
    }
    FILE* outputFile = fopen(outputFilename, "w");
    if (outputFile == NULL) {
        printf("Data successfully written to file!\n");
        return;
    }
    fprintf(outputFile, "Location,City,Price,Rooms,Bathroom,Carpark,Type,Furnish\n");
    for (int i=1; i<=total; i++) {
        fprintf(outputFile, "%s,%s,%s,%s,%s,%s,%s,%s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms,
                dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
    }
    fclose(outputFile);
    printf("Data successfully written to file %s!\n", outputFilename);
}
int main(){
	readFile();
	printf ("What do you want to do?\n");
	printf ("1. Display data\n");
	printf ("2. Search Data\n");
	printf ("3. Sort Data\n");
	printf ("4. Export Data\n");
	printf ("5. Exit\n");
	printf ("Your choice: ");
	int choice;
	scanf ("%d", &choice); 
	if (choice==1){
		printf("Number of rows: ");
		int rows;
		scanf("%d", &rows); getchar();
		displayData(rows);
	}
	else if (choice==2){
		char column[101];
		char value[101];
		printf ("Choose column: ");
		scanf (" %[^\n]", column);
		printf ("What data do you want to find? ");
		scanf (" %[^\n]", value);
		searchData(column, value);
	}
	else if (choice==3){
		char column[101];
		char sort[101];
		printf	("Choose column: ");
		scanf (" %[^\n]", column);
		printf	("Sort ascending or descending? ");
		scanf (" %[^\n]", sort);
		if (strcmp(sort, "Ascending") != 0 && strcmp(sort, "Descending") != 0){
			printf ("Sort no valid!\n");
			return 0;
		}
		sortData(column, sort);
        if (strcmp(column, "Location")==0 || strcmp(column, "City")==0 || strcmp(column, "Price")==0 || strcmp(column, "Rooms")==0 || strcmp(column, "Bathroom")==0 || 
		strcmp(column, "Carpark")==0 || strcmp(column, "Type")==0 || strcmp(column, "Furnish")==0){
			printf("Data found. Detail of data: \n");
			printf("Location City Price Rooms Bathroom Carpark Type Furnish\n");
			for (int i = 1; i <= total; i++) {
            	printf("%s %s %s %s %s %s %s %s\n", dats[i].location, dats[i].city, dats[i].price, dats[i].rooms,
				dats[i].bathroom, dats[i].carpark, dats[i].type, dats[i].furnish);
        	}
    	}
    	else {
    		printf ("Column not found!\n");
		}
    }
    else if (choice==4){
    	char newFileName[101];
    	printf ("File name: ");
    	scanf(" %[^\n]", newFileName);
    	exportData(newFileName);
	}
	else if (choice==5){
		printf ("Thanks for using the program!\n");
	}
	else {
		printf ("Invalid Choice!\n");
	}
    return 0;
}

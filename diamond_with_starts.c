#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 setlocale(LC_ALL,"Turkish");
 
 int i,j;

for(i=1;i<=5;i++){
	for(j=5;j>i;j--){
		printf(" ");
	}for(j=1;j<=2*i-1;j++){
		printf("*");
	}
	printf("\n");
}
for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
		printf(" ");
	}for(j=1;j<=10-2*i-1;j++){
		printf("*");
	}
	printf("\n");
}

	getch();
	return 0;
}

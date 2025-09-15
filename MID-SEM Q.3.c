#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float tempt;
	printf("Enter body temperature(°C):");
	scanf("%f" ,&tempt);
	
	if(tempt <35){
		printf("Temperature:%.2f °C-Category:Low\n",tempt);
	}else if(tempt <=37.5){
		printf("Temperature:%.2f °C-Category:Normal\n ",tempt);
	}else{
		printf("Temperature:%.2f °C -Category:High\n",tempt);
	}
	return 0;
}

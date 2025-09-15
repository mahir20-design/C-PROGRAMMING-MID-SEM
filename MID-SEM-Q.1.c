#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float tempt;
	int heartRate;
	int bloodPressure;
	printf("Enter body temperature(°C):");
	scanf("%f" ,&tempt);
	printf("Enter heart rate(bpm):");
	scanf("%d" ,&heartRate);
	printf("Enter blood pressure(mmHg):");
	scanf("%d" ,&bloodPressure);
	
	printf("Temperature:%.2f °C\n",tempt);
	printf("Heart Rate:%d bpm\n",heartRate);
	printf("Blood Pressure:%d mmHg\n",bloodPressure);
	return 0;
}

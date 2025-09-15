#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int reading;
	int total=0;
	float average;
	for(i=1;i<=4;i++){
		printf("Enter systolic BP reading %d (in mmHg):",i);
		scanf("%d" ,&reading);
		total+=reading;
	}
	average=(float)total/4;
	printf("Total:%d mmHg\n",total);
	printf("Average:%.2f mmHg\n",average);
	return 0;
}

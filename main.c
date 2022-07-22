#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* JFQ Lending Systemu */

int main(int argc, char *argv[]) {
	float compute; //For computing
	int use; //user will use again or no
	int month, months;	//For months
	int mon, quar, semi, annual;  // TOP
	int i;   //Use for loops
	float bor, bor2; // The same as declaration but it only reserves
	int a = 1, b = 1, c = 1;
	
	do{
		printf("\t\t\t***** Amount Matrix *****\n");
		printf("Amount to borrow\tMonthly \tQuarterly\tSemi-Annual\tAnnual\n");
		printf("\t\t\tInterest \tInterest \tInterest \tInterest\n");
		printf("P1,000 below\t\t5%% \t\t - \t\t- \t\t- \n");
		printf("P10,001 - P50,000\t5%% \t\t16%% \t\t- \t\t-\n");
		printf("P50,001 - P100,000\t5%% \t\t16%% \t\t19%% \t\t-\n");
		printf("P100,001 - P500,000\t6%% \t\t17%% \t\t20% \t\t29%%\n");
		printf("P500,001 - P1,000,000\t7%% \t\t18%% \t\t21%% \t\t30%%\n");
		
		do{
			printf("Enter Amount of Money you want to borrow (Must not exceed P1,000,000,00+): ");
			scanf("%f",&bor);
		
			if(bor <= 1000){ //1000 below
				compute = bor * 0.05;
				bor = bor + compute;
				printf("Total Payment on Next Month: %.2f \n",bor);
			}else if(bor <= 10001 && bor >= 1001){  //1000 - 10000
				do{
					printf("Select how many months you want to pay: ");
					scanf("%d",&month);
					if(month == 1){
						compute = bor * 0.05;
						bor = bor + compute;
						printf("Total Payment on Next Month: %.2f \n",bor);
						a = 1;
					}else if(month <= 3 && month >= 2){
						compute = bor * 0.16;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.2f \n",month ,bor);
						a = 1;
					}else{
						printf("Error! Invalid Month only 1-3 months \n");
						a = 0;
					}
				}while(a == 0);
			
			}else if(bor <= 50001 && bor >= 10002){ //10000 - 50000
				do{
					printf("Select how many months you want to pay: ");
					scanf("%d",&month);
					if(month == 1){
						compute = bor * 0.05;
						bor = bor + compute;
						printf("Total Payment on Next Month: %.2f \n",month ,bor);
						a = 1;
					}else if(month <= 3 && month >= 2){
						compute = bor * 0.16;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.2f \n",month ,bor);
						a = 1;
					}else if(month <= 6 && month >= 4){
						compute = bor * 0.19;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.f \n",month ,bor);
					}else{
						printf("Error! Invalid Month only 1-6 months \n");
						a = 0;
					}
				}while(a == 0);
			
			
			
			}else if(bor <= 100001 && bor >= 50002){ //50000 - 100000
				do{
					printf("Select how many months you want to pay: ");
					scanf("%d",&month);
					if(month == 1){
						compute = bor * 0.06;
						bor = bor + compute;
						printf("Total Payment on Next Month: %.2f \n",month ,bor);
						a = 1;
					}else if(month <= 3 && month >= 2){
						compute = bor * 0.17;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.2f \n",month ,bor);
						a = 1;
					}else if(month <= 6 && month >= 4){
						compute = bor * 0.19;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.f \n",month ,bor);
					}else if(month <= 24 && month >= 7){
						compute = bor * 0.27;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.f \n",month ,bor);
					}else{
						printf("Error! Invalid Month only 1-24 months \n");
						a = 0;
					}
				}while(a == 0);
		
			
			}else if(bor <= 500001 && bor >= 100002){ //100000 - 500000
				do{
					printf("Select how many months you want to pay: ");
					scanf("%d",&month);
					if(month == 1){
						compute = bor * 0.06;
						bor = bor + compute;
						printf("Total Payment on Next Month: %.2f \n",month ,bor);
						a = 1;
					}else if(month <= 3 && month >= 2){
						compute = bor * 0.17;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.2f \n",month ,bor);
						a = 1;
					}else if(month <= 6 && month >= 4){
						compute = bor * 0.20;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.f \n",month ,bor);
					}else if(month <= 24 && month >= 7){
						compute = bor * 0.29;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.f \n",month ,bor);
					}else{
						printf("Error! Invalid Month only 1-24 months \n");
						a = 0;
					}
				}while(a == 0);
				
			}else if(bor <= 1000000 && bor >= 500002){ //100000 - 500000
				do{
					printf("Select how many months you want to pay: ");
					scanf("%d",&month);
					if(month == 1){
						compute = bor * 0.07;
						bor = bor + compute;
						printf("Total Payment on Next Month: %.2f \n",month ,bor);
						a = 1;
					}else if(month <= 3 && month >= 2){
						compute = bor * 0.18;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.2f \n",month ,bor);
						a = 1;
					}else if(month <= 6 && month >= 4){
						compute = bor * 0.21;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.f \n",month ,bor);
					}else if(month <= 24 && month >= 7){
						compute = bor * 0.30;
						bor = bor + compute;
						printf("Total Payment for %d Months: %.f \n",month ,bor);
					}else{
						printf("Error! Invalid Month only 1-24 months \n");
						a = 0;
					}
				}while(a == 0);
				
			}else{
				printf("Error! Cannot Exceed 1,000,000,00+\n");	
				a = 0;
			}
		}while(a == 0);
	

		printf("Do you want to use the Machine Again? 1 for Yes, 2 for No\n");
		scanf("&d",&use);
		
			do{
				if(use == 1){
					c = 0;
				}else if(use == 2){
					printf("System will shut down in\n");
					printf("3....\n");
					printf("2....\n");
					printf("1....\n");
					printf("Shutting Down");
				}
//				else{
//					printf("Error! Input 1 or 2 only\n");
//					b = 0;
//				}
			}while(b == 0);
	}while(c == 0);
	
	
}

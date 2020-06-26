#include<stdio.h>

//Write a program to store an input list of ten integers in an array; 
//then display a table similar to the following, showing each data value and what percentage each value is of the total of all ten values. 

// n      % of total
// -----------------
// 5        50.0
// 3        30.0
// 2        20.0
// .         .
// .         .

int main(){
	
	int i,j,sum=0;
	int array[10];
	printf("Enter  10 values of array:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&array[i]);
		sum+=array[i];
	}
	
	float percentageoftotal;
	
	printf("n        %% of total\n");
	printf("--------------------\n");
	
	for(j=0;j<10;j++){
		percentageoftotal=(100.0*array[j])/(sum*1.0);
		printf("%d      %.2f\n",array[i],percentageoftotal);
	}
	

	return 0;
}

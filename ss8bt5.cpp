#include<stdio.h>
int main(){
	int hang=3,cot=4;
	int array[3][4]={
	{2,2,3,5},
	{4,5,6,7},
	{7,8,9,3}
	};
	int sum;
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("%d",array[i][j]);
			if(i==0||j==0||i==hang-1||j==cot-1){
				sum+=array[i][j];
			}
		}
		printf("\n");
	}
	printf("tong cac phan tu tren duong bien la: %d",sum);
	return 0;
}

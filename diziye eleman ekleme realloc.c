#include <stdio.h>
#include <stdlib.h>
int main(){
	int *dizi,boyut,Yboyut,i;
	printf("boyut:");
	scanf("%d",&boyut);
	dizi=(int*)malloc(boyut*sizeof(int));
	for(i=0;i<boyut;i++){
		printf("dizinin %d. elemani:",i+1);
		scanf("%d",dizi+i);
	}
	
	printf("yeni boyut:");
	scanf("%d",&Yboyut);
	for(i=boyut;i<Yboyut;i++){
		printf("%d. eleman:",i+1);
		scanf("%d",dizi+i);
	}
	printf("\n");
	printf("dizinin yeni hali:");
	for(i=0;i<Yboyut;i++)
		printf("%d",*(dizi+i));
	
	return 0;
}

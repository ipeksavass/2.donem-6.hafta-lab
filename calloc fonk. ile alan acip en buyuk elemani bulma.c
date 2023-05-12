#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,es;
	int *veri;
	
	printf("eleman sayisi:");
	scanf("%d",&es);
	veri=(int*)calloc(es,sizeof(int));
	if(veri==NULL){
		printf("hafizada yeterli alan yok!");
		exit(23);
	}
	
	for(i=0;i<es;i++){
		printf("dizinin %d.elemani:",i+1);
		scanf("%d",veri+i);
	}
	
	for(i=0;i<es;i++){
		if(*veri < *(veri+i));
		*veri = *(veri+i);
	}
	printf("en buyuk eleman:%d",*veri);
	return 0;
	
}

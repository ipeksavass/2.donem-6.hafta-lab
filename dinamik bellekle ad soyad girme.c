#include <stdio.h>
#include <stdlib.h>
int main(){
	char *str;
	str=(char*)malloc(7*sizeof(char));
	if(str==NULL)
		printf("yer ayrilmadi");
	else
		strcpy(str,"Adiniz Soyadiniz");
	printf("Dinamik olarak ayrilan icerik:%s",str);
	free(str);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		//IKI SAYI VE BAS HARF ALMA PROGRAMI
	
	int ilksayi;
	float ikincisayi;
	char ilkharf;
	
	printf("IlkSayiyi Giriniz : \n");
	scanf("%d",&ilksayi);
	
	printf("IkinciSayiyi Giriniz : \n");
	scanf("%f",&ikincisayi);
	
	printf("IlkHarfi Giriniz : \n");
	scanf(" %c",&ilkharf);
	
	printf("Ilksayi %d\n",ilksayi);
	printf("Ikincisayi %.2f\n",ikincisayi);
	printf("Ilkharf %c\n",ilkharf);
	
	
	return 0;
}

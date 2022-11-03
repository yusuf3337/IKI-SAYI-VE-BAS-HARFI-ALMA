#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		//IKI SAYI VE BAS HARF ALMA PROGRAMI
	
    int ilksayi;
    float ikincisayi;
    char karakter;
    
    printf("İlk sayiyi giriniz :");
    scanf("%d",&ilksayi);
    
    printf("İkinci sayiyi giriniz :");
    scanf("%f",&ikincisayi);
    
    printf("Karakter giriniz :");
    scanf(" %c",&karakter);
    
    //EFFECT
    printf("\n");
    printf("---------------------------------------------------->DONE!\n");
    
    
    
    printf("İlk sayi %d\n",ilksayi);
    printf("İkinci sayi %f\n",ikincisayi);
    printf("Karakter %c\n",karakter);
    
    
    
    
    
    
    	
	
	return 0;
}

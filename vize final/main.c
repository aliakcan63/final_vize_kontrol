
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float s1,s2,s3,s4,s5,ort;
	
	printf("Vize sinav puani giriniz:");
	scanf("%f",&s1);
	
	printf("Kisa sinav 1 notunuzu giriniz:");
	scanf("%f",&s3);
	
	printf("Kisa sinav 2 notunuzu giriniz: ");
	scanf("%f",&s4);
	
	printf("odev puaninizi giriniz:");
	scanf("%f",&s5);
	
	printf("Final sinav puanini giriniz: ");
	scanf("%f",&s2);
	
	
	
	ort=(s1*0.2+s2*0.5+s3*0.1+s4*0.1+s5*0.1); 
	
	if(ort>=40)
	{
    printf("Tebrikler gectiniz: %f",ort);
	}
	else
	{
	printf("Maalesef Kaldýnýz %f",ort);	
	}
	
	return 0; 
}

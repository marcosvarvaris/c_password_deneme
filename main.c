#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"turkish");
	system("color c1");
	
    
    int i,j,k;
    char pass[8];
	char isim,soyisim;
	
	int sayi[j];
	char harf[k];
	char sifre;
	
	printf("�siminizi giriniz     : ");scanf("%s",&isim);
	printf("Soy �siminizi giriniz : ");scanf("%s",&soyisim);

	
	
		
	srand((unsigned int)(time(NULL)));


	
    FILE *fp;


  fp = fopen ("dosya.txt", "w");
  

///// �ifre olu�turma 
    for (i = 0; i <= 3; i++) {
        pass[i] = rand() % 9;// sayi random
        char capLetter = 'A' + (rand() % 26);
        pass[i + 2] = capLetter;//harf random

		sayi[j]=pass[i];//sayi ve harfleri ikiye boldum
		harf[k]=pass[i+2];
		
		printf("%d",sayi[j]); printf("%c",harf[k]);  // ayr� ayr� ekrana yazd�r�rsam isim ve soy isim bilgilerini de eklerim diye dusundum
//		printf("%d", pass[i]); eski de�i�kenlerim
//		printf("%c",pass[i+2]); 
		fprintf(fp,"%d%c", sayi[j],harf[k]);
				
		
        }
        

		

//    	fprintf(fp,"%s %s",isim,soyisim);
        

fclose(fp);

	


  


}


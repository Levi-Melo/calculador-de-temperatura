#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void temperatura_media(float *temp);
void maior(float *temp);
void menor(float *temp);

int main(int argc, char *argv[]) {
	
	
setlocale(LC_ALL,"Portuguese");
	float temp[10];
    float media_temp;

	int i;

	 for (i = 0; i <10; i++)
	 {
	printf("Temperatura %d:\n",i);
	    scanf("%f", &temp[i]);
	}
	
temperatura_media(temp);
maior(temp);
menor(temp);

	return 0;
}

//-----------------------------------------------------
//FUNÇÕES

void temperatura_media(float *temp)
{
  int i;
  float media = 0;
  float soma = 0;
  for (i = 0; i < 10; i++){
    soma = soma + temp[i];
  }
  media= soma / 10;
  printf("Temperatura média: %.2f\n" ,media);
  return;
}

void maior(float *temp)
{
int i;
float maior = temp[0];
	 for (i = 1; i < 10; i++){
	  if (temp[i] > maior){
	  maior = temp[i];	
	  }
}
	printf("Maior temperatura: %.2f\n",maior);
	return;
}

void menor(float *temp)
{
int i;
float menor = temp[0];
	 for (i = 1; i < 10; i++){
	  if (temp[i] < menor){
	  menor = temp[i];	
	  }
}
	printf("menor temperatura: %.2f\n",menor);
	return;
}

#include <stdio.h>

int tempIdeal(int temperaturas[10], int tempMaxima, int tempMinima){
  int quantTemp = 0;

  for(int i = 0; i < 10; i++){
      if(temperaturas[i] <= tempMaxima && temperaturas[i] >= tempMinima){
        printf("%d° temperatura: %d\n", i+1, temperaturas[i]);
        quantTemp++;
      }
  }

  return quantTemp;
}

int main(void) {

  int temperaturas[10];
  int tempMaxima;
  int tempMinima;

  printf("------ Controle de Temperatura ------\n");
  printf("\n");
  
  printf("Insira a temperatura máxima permitida: ");
  scanf("%d", &tempMaxima);
  printf("Insira a temperatura mínima permitida: ");
  scanf("%d", &tempMinima);

  while(tempMinima > tempMaxima){
      printf("Temperaturas inválidas!\n");
      printf("Insira novamente a temperatura máxima permitida: ");
      scanf("%d", &tempMaxima);
      printf("Insira novamente a temperatura mínima permitida: ");
      scanf("%d", &tempMinima);
  }
  
  printf("\n");

  for(int i = 0; i < 10; i++){
      printf("Insira a %d° temperatura do dia: ", i+1);
      scanf("%d", &temperaturas[i]); 
  }

  printf("\n");
  printf("------ Temperaturas Dentro do Padrão ------\n");
  printf("\n");
  
  int quantTemp = tempIdeal(temperaturas, tempMaxima, tempMinima);

  printf("\n");
  
  printf("Quantidade de temperaturas dentro do padrão: %d\n", quantTemp);
  
}
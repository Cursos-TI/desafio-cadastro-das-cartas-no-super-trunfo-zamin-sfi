#include <stdio.h>

int main() {
  //primeira carta 
  char estado1[5];
  char codigo1[15];
  char nome1[20];
  float populacao1;
  float area1;
  float PIB1;
  int numeropontoturisticos1; 

  printf("primeria carta\n");

  printf("insira o estado:\n");
  scanf("%s", &estado1);
  printf("estado:%s\n", estado1);

  printf("insira o codigo da carta:\n");
  scanf("%s",&codigo1);
  printf("código:%s\n", codigo1);

  printf("insira o nome da cidade:\n ");
  scanf("%s",&nome1);
  printf("nome:%s\n",nome1);

  printf("insira numero da poulação:\n");
  scanf("%f", &populacao1);
  printf("populaçao:%f habitante\n",populacao1);

  printf("insira a área total:\n");
  scanf("%f", &area1);
  printf("área total:% 3fKm²\n", area1);

  printf("insira o PIB da cidade:\n");
  scanf("%f", &PIB1);
  printf("PIB:%.3fbilhões de reais\n",PIB1);
 
  printf("numero de ponto turisticos:\n");
  scanf("%d",&numeropontoturisticos1);
  printf("são %d pontos turisticos:\n",numeropontoturisticos1);

  //segunda carta 

  char estado2[5];
  char codigo2[15];
  char nome2[20];
  float populacao2;
  float area2;
  float PIB2;
  int numerodepontoturistico2;

  printf("segunda carta\n");

  printf("insira o estado:\n");
  scanf("%s",&estado2);
  printf("estado:%s\n",estado2);

  printf("insira o código da cidade:\n");
  scanf("%s",&codigo2);
  printf("código:%s\n", codigo2);

  printf("insira o nome da cidade:\n");
  scanf("%s",&nome2);
  printf("nome:%s\n", nome2);

  printf("insira o numero da populão:\n");
  scanf("%f", &populacao2);
  printf("população:%f habitante\n", populacao2);

  printf("insira a área total:\n");
  scanf("%f", &area2);
  printf("área total %.3fKm²\n",area2);

  printf("insira o PIB da cidade:\n");
  scanf("%f", &PIB2);
  printf("PIB:%.3f bilhões de reais:\n", PIB2);

  printf("numero de ponto turisticos:\n");
  scanf("%d",&numerodepontoturistico2);
  printf("são %d ponto turisticos:\n", numerodepontoturistico2);
   
  return 0;




}
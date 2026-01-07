#include <stdio.h>

int main() {

//variáveis carta 1
char estado1;
char codigo1[3];
char nome1[51];
int populacao1;
float area1;
float pib1;
int p_turistico1;

//variáveis carta 2
char estado2;
char codigo2[3];
char nome2[51];
int populacao2;
float area2;
float pib2;
int p_turistico2;

//coleta de inputs
printf("Fique atento às instruções e preencha corretamente.\n");
printf("---------------------------------------------------\n");


//carta 1
printf("Vamos cadastrar a primeira carta.\n\n");

printf("Digite uma letra que irá representar um Estado (Deve estar entre A e H):");
scanf(" %c", &estado1);

printf("Digite um número de 2 dígitos para ser o código (Deve estar entre 01 e 04):");
scanf("%s", codigo1);

printf("Digite o nome da cidade (Sem espaços entre palavras):");
scanf("%s", nome1);

printf("Digite a população da cidade:");
scanf("%d", &populacao1);

printf("Digite a área total (separe as casas decimais com ponto em vez de vírgula):");
scanf("%f", &area1);

printf("Digite o PIB (separe as casas decimais com ponto em vez de vírgula):");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turísticos da cidade:");
scanf("%d", &p_turistico1);


//carta 2
printf("\nAgora vamos cadastrar a segunda carta.\n\n");

printf("Digite uma letra que irá representar um Estado (Deve estar entre A e H):");
scanf(" %c", &estado2);

printf("Digite um número de 2 dígitos para ser o código (Deve estar entre 01 e 04):");
scanf("%s", codigo2);

printf("Digite o nome da cidade (Sem espaços entre palavras):");
scanf("%s", nome2);

printf("Digite a população da cidade:");
scanf("%d", &populacao2);

printf("Digite a área total (separe as casas decimais com ponto em vez de vírgula):");
scanf("%f", &area2);

printf("Digite o PIB (separe as casas decimais com ponto em vez de vírgula):");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turísticos da cidade:");
scanf("%d", &p_turistico2);


//Imprimindo as cartas
printf("\n\nEstas são as cartas cadastradas:\n\n");


//carta1
printf("Estado: %c\n", estado1);
printf("Código: %c%s\n", estado1,codigo1);
printf("Cidade: %s\n", nome1);
printf("População: %d\n", populacao1);
printf("Área: %.3f km2\n", area1);
printf("PIB: %.3f\n", pib1);
printf("Pontos turísticos: %d\n\n", p_turistico1);

//carta2
printf("Estado: %c\n", estado2);
printf("Código: %c%s\n", estado2,codigo2);
printf("Cidade: %s\n", nome2);
printf("População: %d\n", populacao2);
printf("Área: %.3f km2\n", area2);
printf("PIB: %.3f\n", pib2);
printf("Pontos turísticos: %d\n", p_turistico2);


return 0;
} 

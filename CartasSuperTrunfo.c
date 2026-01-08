#include <stdio.h>

int main() {

// variáveis carta 1
char estado1;
char codigo1[3];
char nome1[51];
int populacao1;
float area1;
long int pib1;
int p_turistico1;
float densidade1;
float pibPC1;
long double superPoder1;

//variáveis carta 2
char estado2;
char codigo2[3];
char nome2[51];
int populacao2;
float area2;
long int pib2;
int p_turistico2;
float densidade2;
float pibPC2;
long double superPoder2;


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

printf("Digite o PIB:");
scanf("%d", &pib1);

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

printf("Digite o PIB:");
scanf("%d", &pib2);

printf("Digite a quantidade de pontos turísticos da cidade:");
scanf("%d", &p_turistico2);


//Imprimindo as cartas
printf("\n\nEstas são as cartas cadastradas:\n\n");


//carta1
printf("Estado: %c\n", estado1);
printf("Código: %c%s\n", estado1,codigo1);
printf("Cidade: %s\n", nome1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km2\n", area1);
printf("PIB: %ld\n", pib1);
printf("Pontos turísticos: %d\n", p_turistico1);
densidade1 = populacao1/area1;
printf("Densidade populacional: %.3f hab/km2\n", densidade1);
pibPC1 = pib1/populacao1;
printf("PIB per Capta: %.0f Reais\n", pibPC1);
superPoder1 = ((float)populacao1+area1+(long double)pib1+p_turistico1-(populacao1/area1)+(pib1/populacao1));
printf("O Super Poder é: %ld\n\n", (long int)superPoder1);

//carta2

printf("Estado: %c\n", estado2);
printf("Código: %c%s\n", estado2,codigo2);
printf("Cidade: %s\n", nome2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km2\n", area2);
printf("PIB: %ld\n", pib2);
printf("Pontos turísticos: %d\n", p_turistico2);
densidade2 = populacao2/area2;
printf("Densidade populacional: %.3f hab/km2\n", densidade2);
pibPC2 = pib2/populacao2;
printf("PIB per Capta: %.0f Reais\n", pibPC2);
superPoder2 = ((float)populacao2+area2+(long double)pib2+p_turistico2-(populacao2/area2)+(pib2/populacao2));
printf("O Super Poder é: %ld\n\n", (long int)superPoder2);


//Compara as variáveis

printf("Comparação de cartas\n");
printf("--------------------\n");
printf("A carta 1 venceu a carta 2?\n\n");
printf("População ( %d )\n", populacao1>populacao2);
printf("Área ( %d )\n", area1>area2);
printf("PIB ( %d )\n", pib1>pib2);
printf("Pontos turísticos ( %d )\n", p_turistico1>p_turistico2);
printf("Densidade populacional ( %d )\n", densidade1<densidade2);
printf("PIB Per Capta ( %d )\n", pibPC1>pibPC2);
printf("Super Poder ( %d )\n\n\n", superPoder1>superPoder2);

return 0;
} 

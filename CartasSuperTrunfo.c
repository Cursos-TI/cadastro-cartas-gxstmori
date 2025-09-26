#include <stdio.h>
//Adicionado Código desenvolvido para Desafio Trunfo
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estad1[30], estad2[30];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int popul1, popul2;
    int turismo1, turismo2;
    float area1, area2;
    float pib1,pib2; 
  // Área para entrada de dados
    printf("Cadastro Carta 1:\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", &estad1);
    printf("Digite o Codigo desta Carta: ");
    scanf(" %s", codigo1);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População: ");
    scanf(" %d", &popul1);
    printf("Digite a Area: ");
    scanf(" %f", &area1);  
    printf("Digite o PIB: ");
    scanf(" %f", &pib1);
    printf("Digite nº de Ptos Turísticos: ");
    scanf(" %d", &turismo1);
//calculo densidade pibpercapita Carta01
    float densidade1 = popul1/area1;
    float pibpCapita1 = (pib1*1000000000/popul1);


  // Área para exibição dos dados da cidade
    printf("Carta 01: \n");
    printf("Estado: %s\n", estad1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", popul1);
    printf("Area: %.2f\n", area1);
    printf("PIB(Bilhões): %.2f \n", pib1);    
    printf("Nº de Ptos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB Per Capita: %.2f\n", pibpCapita1);

  // Área para entrada de dados Carta 2
    printf("Cadastro Carta 2:\n");
    printf("Digite o Estado: ");
    scanf("  %[^\n]", &estad2);
    printf("Digite o Codigo desta Carta: ");
    scanf(" %s", codigo2);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: ");
    scanf(" %d", &popul2);
    printf("Digite a Area: ");
    scanf(" %f", &area2);  
    printf("Digite o PIB: ");
    scanf(" %f", &pib2);
    printf("Digite nº de Ptos Turísticos: ");
    scanf(" %d", &turismo2);

    //calculo densidade pibpercapita Carta01
    float densidade2 = popul2/area2;
    float pibpCapita2 = (pib2*1000000000/popul2);


  // Área para exibição dos dados da cidade 2
    printf("Carta 02: \n");
    printf("Estado: %c\n", estad2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %c\n", popul2);
    printf("Area: %.2f\n", area2);
    printf("PIB(Bilhões): %.2f \n", pib2);    
    printf("Nº de Ptos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB Per Capita: %.2f\n", pibpCapita2);




return 0;
} 

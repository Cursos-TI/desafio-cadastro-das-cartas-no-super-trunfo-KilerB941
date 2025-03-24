#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;                  // Estado (A-H)
    char codigo1[4], codigo2[4];            // Código da carta (ex: A01, B03)
    char nome_cidade1[50], nome_cidade2[50]; // Nome da cidade
    int populacao1, populacao2;             // População da cidade
    float area1, area2;                     // Área em km²
    float pib1, pib2;                       // PIB em bilhões de reais
    int pontos_turisticos1, pontos_turisticos2; // Número de pontos turísticos

    // Variáveis para armazenar os cálculos
    float densidade_populacional1, densidade_populacional2; // Densidade populacional (hab/km²)
    float pib_per_capita1, pib_per_capita2; // PIB per capita (reais)

    // Instruções para o usuário
    printf("=== Cadastro de Cartas do Super Trunfo ===\n");
    printf("Vamos cadastrar duas cartas com informações sobre cidades.\n\n");

    // Entrada de dados para a primeira carta
    printf("Carta 1:\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado1); // Lê o estado como um caractere

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1); // Lê o código como uma string

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1); // Lê o nome da cidade (até o final da linha)

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Converte bilhões para reais

    // Entrada de dados para a segunda carta
    printf("\nCarta 2:\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Converte bilhões para reais

    // Exibição dos dados cadastrados
    printf("\n=== Resumo das Cartas Cadastradas ===\n");

    // Exibição da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    return 0;
}

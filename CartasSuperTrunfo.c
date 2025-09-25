#include <stdio.h>

int main(){

    //Variáveis para a Carta 1:
    char estado;
    char codigo_carta[4];
    char nome_cidade[50];
    float populacao;
    float area;
    float pib;
    char texto[10];
    char texto1[10];
    int pontos_turisticos;

    //Variáveis para a Carta 2:
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    float populacao2;
    float area2;
    float pib2;
    char texto2[10];
    char texto1_2[10];
    int pontos_turisticos2;

    printf("Olá, Jogador. Bem-vindo ao SUPER TRUNFO CIDADES: BRASIL!\n");
    printf("Nós iremos instruí-lo sobre às regras do jogo.\n\n");
    
    printf("Você fornecerá informações para duas cartas: Carta 1 e Carta 2.\n\n");
    printf("Começaremos pela Carta 1!\n\n");

    printf("1º Passo - Escolha uma letra de 'A' a 'H'; ela representará um dos oito Estados: ");
    scanf("%c", &estado);

    printf("2º Passo - Código da Carta: A letra do Estado sucedida por um número de 01 a 04(Ex: A01, B04): ");
    scanf("%s", codigo_carta);

    printf("3º Passo - Nome da Cidade e a sua UF(Unidade Federativa): ");
    scanf(" %[^\n]", nome_cidade);

    printf("4º Passo - Número de habitantes de %s(Ex: 25.1 mil/milhão/milhões): ", nome_cidade);
    scanf("%f" "%s", &populacao, texto);

    printf("5º Passo - Qual é a área em km² de %s(Ex: 250.01)? ", nome_cidade);
    scanf("%f", &area);

    printf("6º Passo - Qual é o Produto Interno Bruto(PIB) de %s(Ex: 33.01 milhão/milhões/bilhões): ", nome_cidade);
    scanf("%f" "%s", &pib, texto1);

    printf("7º Passo - Quantos pontos turísticos existem em %s? ", nome_cidade);
    scanf("%d", &pontos_turisticos);

    printf("----------------------- CARTA 1 -----------------------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %.1f %s\n", populacao, texto);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f %s de reais\n", pib, texto1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("-------------------------------------------------------\n\n");

    printf("Agora, faremos o mesmo processo para a Carta 2!\n\n");

    printf("1º Passo - Escolha uma letra de 'A' a 'H'; ela representará um dos oito Estados: ");
    scanf(" %c", &estado2);

    printf("2º Passo - Código da Carta: A letra do Estado sucedida por um número de 01 a 04(Ex: A01, B04); utilize um código diferente da Carta 1: ");
    scanf("%s", codigo_carta2);

    printf("3º Passo - Nome da Cidade e a sua UF, exceto o nome da Cidade usado para a Carta 1: ");
    scanf(" %[^\n]s", nome_cidade2);

    printf("4º Passo - Número de habitantes de %s(Ex: 25.1 mil/milhão/milhões): ", nome_cidade2);
    scanf("%f" "%s", &populacao2, texto2);

    printf("5º Passo - Qual é a área em km² de %s(Ex: 250.01)? ", nome_cidade2);
    scanf("%f", &area2);

    printf("6º Passo - Qual é o Produto Interno Bruto(PIB) de %s(Ex: 33.01 milhão/milhões/bilhões): ", nome_cidade2);
    scanf("%f" "%s", &pib2, texto1_2);

    printf("7º Passo - Quantos pontos turísticos existem em %s? ", nome_cidade2);
    scanf("%d", &pontos_turisticos2);

    printf("----------------------- CARTA 2 -----------------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %.1f %s\n", populacao2, texto2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f %s de reais\n", pib2, texto1_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("-------------------------------------------------------\n");
    printf("Final de jogo! Até mais...\n");

    return 0;

}
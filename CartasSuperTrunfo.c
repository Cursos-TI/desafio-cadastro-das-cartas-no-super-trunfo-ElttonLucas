#include <stdio.h>

int main() {
    
    char estado01;
    char codigo01[2];
    char nomeCidade01[50];
    int populacao01, pontosTuristicos01;
    float area01, pib01;

    char estado02;
    char codigo02[2];
    char nomeCidade02[50];
    int populacao02, pontosTuristicos02;
    float area02, pib02;

    printf("Insira os dados da carta 01. \n");
    printf("Digite o Estado: ");
    scanf ("%s", &estado01);

    printf("Digite o código do Estado: ");
    scanf("%s", &codigo01);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade01);

    printf("Digite a quantidade de população do Estado: ");
    scanf("%d", &populacao01);

    printf("Diga a área do Estado em Km²:");
    scanf("%f", &area01);

    printf("Diga o PIB do Estado:");
    scanf("%f", pib01);

    printf("Diga a quantidade de pontos turísticos do Estado:");
    scanf("%d", pontosTuristicos01);

    printf("Agora, iremos iserir os dados da carta 02: \n");

    printf("Insira os dados da carta 02. \n");
    printf("Digite o Estado: ");
    scanf ("%s", &estado02);

    printf("Digite o código do Estado: ");
    scanf("%s", &codigo02);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade02);

    printf("Digite a quantidade de população do Estado: ");
    scanf("%d", &populacao02);

    printf("Diga a área do Estado em Km²:");
    scanf("%f", &area02);

    printf("Diga o PIB do Estado:");
    scanf("%f", pib02);

    printf("Diga a quantidade de pontos turísticos do Estado:");
    scanf("%d", pontosTuristicos02);

    printf("Agora iremos mostrar os dados das cartas! \n");

    printf("OS DADOS DA CARTA 01 SÃO: \n");
    printf("Estado: %s \n", estado01);
    printf("Código do Estado: %s \n", codigo01);
    printf("Cidade: %s \n", nomeCidade01);
    printf("Poculação: %d \n", populacao01);
    printf("Área em km²: %f \n", area01);
    printf("PIB: %f \n", pib01);
    printf("Pontos turísticos: %d \n", pontosTuristicos01);

    printf("OS DADOS DA CARTA 02 SÃO: \n");
    printf("Estado: %s \n", estado02);
    printf("Código do Estado: %s \n", codigo02);
    printf("Cidade: %s \n", nomeCidade02);
    printf("Poculação: %d \n", populacao02);
    printf("Área em km²: %f \n", area02);
    printf("PIB: %f \n", pib02);
    printf("Pontos turísticos: %d \n", pontosTuristicos02);

    return 0;
}

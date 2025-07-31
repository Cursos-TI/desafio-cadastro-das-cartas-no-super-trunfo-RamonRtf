#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese_Brazil");
    //dados carta 1
    char estado [2];
    char codigo [3];
    char nome_cidade[20];
    float habitantes;
    float area;
    float pib;
    int pontos_turisticos;
    //dado carta 2
    char estado2 [5];
    char codigo2 [3];
    char nome_cidade2[20];
    float habitantes2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //receber dados carta 1
    printf("Dados da carta 1:\n");
    sleep(2);
    printf("Use apenas vírgulas como separador decimal.\n");
    sleep(2);
    system("cls");
    printf("Digite a letra que representa o estado: A-B\n");
    scanf("%s", estado);

    printf("Digite o código do Estado. ex: A01\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade;\n");
    scanf("%s", nome_cidade);

    printf("Digite quantos habitantes tem:\n");
    scanf("%f", &habitantes);

    printf("Digite a área da cidade em km²\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);

    //receber dados carta 2
    printf("Dados da carta 2:\n");
    sleep(2);
    printf("Use apenas vírgulas como separador decimal.\n");
    sleep(2);
    system("cls");

    printf("Digite a letra que representa o estado: A-B\n");
    scanf("%s", estado2);

    printf("Digite o código do Estado. ex: A01\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade;\n");
    scanf("%s", nome_cidade2);

    printf("Digite quantos habitantes tem:\n");
    scanf("%f", &habitantes2);

    printf("Digite a área da cidade em km²\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    //mostrar as cartas

    printf("Atributos carta 1:\n");

    printf("\n");

    printf(" Letra: %s\n codigo: %s\n Nome: %s\n habitantes: %2.f\n Área:%.2f\n PIB: %.2f\n Pontos turísticos: %d\n ", estado, codigo, nome_cidade, habitantes, area, pib, pontos_turisticos);

    printf("\n");

    printf("Atributos carta 2:\n");
    printf("\n");
    printf(" Letra: %s\n codigo: %s\n Nome: %s\n habitantes: %2.f\n Área:%.2f\n PIB: %.2f\n Pontos turísticos: %d\n ", estado2, codigo2, nome_cidade2, habitantes2, area2, pib2, pontos_turisticos2);

    system("pause");

    return 0;
}

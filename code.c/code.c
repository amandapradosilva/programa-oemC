#include <stdio.h>

int main() {
    char Estado1, Estado2;
    char Codigo1[30], Codigo2[30];
    char nomedacidade1[50], nomedacidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2, PIB1, PIB2;
    int Numerodepontosturisticos1, Numerodepontosturisticos2;

    printf("Carta 1: \n");

    printf("Estado : \n");
    fflush(stdin); // Limpa o buffer de entrada (uso recomendado para Windows)
    scanf(" %c", &Estado1); 

    printf("Código: \n");
    scanf("%s", Codigo1);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nomedacidade1);

    printf("População: \n");
    scanf("%d", &Populacao1);

    printf("Área: \n");
    scanf("%f", &Area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &Numerodepontosturisticos1);

    printf("Carta 2: \n");

    printf("Estado : \n");
    fflush(stdin); // Limpa o buffer de entrada novamente
    scanf(" %c", &Estado2);

    printf("Código: \n");
    scanf("%s", Codigo2);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nomedacidade2);

    printf("População: \n");
    scanf("%d", &Populacao2);

    printf("Área: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &Numerodepontosturisticos2);

    // Impressão dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("Nome da cidade: %s \n", nomedacidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de pontos turísticos: %d \n", Numerodepontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de pontos turísticos: %d \n", Numerodepontosturisticos2);

    return 0;
}

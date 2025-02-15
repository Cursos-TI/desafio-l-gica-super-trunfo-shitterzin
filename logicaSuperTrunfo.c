#include <stdio.h>

typedef struct {
    char nome[50];
    char estado[30];
    int codigo;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void cadastrarCarta(Carta *carta) {
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nome);

    printf("Estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Código da carta: ");
    scanf("%d", &carta->codigo);

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    printf("\nCadastro da primeira carta:\n");
    cadastrarCarta(&carta1);

    printf("\nCadastro da segunda carta:\n");
    cadastrarCarta(&carta2);


    if (carta1.populacao > carta2.populacao) {
        printf("\nCom %d habitantes, a Carta 1 venceu o jogo!\n", carta1.populacao);
    } else {
        printf("\nCom %d habitantes, a Carta 2 venceu o jogo!\n", carta2.populacao);
    }

    return 0;
}

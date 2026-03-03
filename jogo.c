#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto;
    int palpite;
    int tentativas = 0;

    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;

    do {
        printf("tente acertar o numero de 1 a 100!: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite == numeroSecreto) {
            printf("parabens voce acertou!\n");
        } 
        else if (palpite > numeroSecreto) {
            printf("muito alto! tente mais baixo\n");
        } 
        else {
            printf("muito baixo! tente mais alto\n");
        }

    } while (palpite != numeroSecreto && tentativas < 10);

    if (palpite != numeroSecreto) {
        printf("uma pena, voce perdeu!\n");
    }

    return 0;
}

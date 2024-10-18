#include <stdio.h>
#include <string.h>

struct Contato {
    char nome[50];
    char telefone[15];
};

int PesquisaBinaria(struct Contato contatos[], int tamanhoArray, char nomeProcurado[]) {
    int indiceInferior = 0;
    int indiceSuperior = tamanhoArray - 1;
    int indiceMeio;

    while (indiceInferior <= indiceSuperior) {
        indiceMeio = (indiceInferior + indiceSuperior) / 2;

        int comparacao = strcmp(contatos[indiceMeio].nome, nomeProcurado);

        if (comparacao == 0) {
            return indiceMeio;
        } else if (comparacao < 0) {
            indiceInferior = indiceMeio + 1;
        } else {
            indiceSuperior = indiceMeio - 1;
        }
    }

    return -1;
}

int main() {

    struct Contato contatos[] = {
        {"Alice", "+258-841234567"},
        {"Bruno", "+258-841234568"},
        {"Carlos", "+258-841234569"},
        {"Diana", "+258-841234570"},
        {"Eduardo", "+258-841234571"}
    };

    int tamanhoArray = sizeof(contatos) / sizeof(contatos[0]);
    char nomeProcurado[50];

    printf("===PESQUISA BINARIA===\n\n");

    printf("Digite o nome do contato a ser pesquisado: ");
    scanf("%s", nomeProcurado);

    int resultado = PesquisaBinaria(contatos, tamanhoArray, nomeProcurado);

    if (resultado != -1) {
        printf("Contato encontrado: Nome: %s, Telefone: %s\n", contatos[resultado].nome, contatos[resultado].telefone);
    } else {
        printf("Contato nao encontrado.\n");
    }

    return 0;
}

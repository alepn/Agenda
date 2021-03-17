#include <stdio.h>
#include <string.h>

#define TAM_AGENDA 10

typedef struct Pessoa
{
    int codigo;
    char nome[50];
    char telefone[15];
    char email[50];
    char dataNascimento[11];
    char observacoes[100];
} Pessoa;

int main(void)
{

  Pessoa contatos[TAM_AGENDA];

  for(int i = 0; i < TAM_AGENDA; i++){

    printf("Digite o código: ");
    scanf("%i", &contatos[i].codigo);

    printf("Digite o nome: ");
    scanf("%s", contatos[i].nome);

  }

  return 0;
}

#include <stdio.h>
#include <string.h>

#define TAM_AGENDA 2

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
  int i, buscarCodigo;

  //Cadastrar
  for(i = 0; i < TAM_AGENDA; i++){

    printf("Digite o código: ");
    scanf("%i", &contatos[i].codigo);

    printf("Digite o nome: ");
    scanf("%s", contatos[i].nome);

  }

  //Listar
  for(i = 0; i < TAM_AGENDA; i++){

    printf("Código: ");
    printf("%i\n", contatos[i].codigo);

    printf("Nome: ");
    printf("%s\n", contatos[i].nome);

  }

  //Buscar
  printf("Digite um código para buscar: ");
  scanf("%i", &buscarCodigo);
  for(i = 0; i < TAM_AGENDA; i++){
    
    if(buscarCodigo == contatos[i].codigo){
      printf("Código: ");
      printf("%i\n", contatos[i].codigo);

      printf("Nome: ");
      printf("%s\n", contatos[i].nome);
    }

  }

  return 0;
}

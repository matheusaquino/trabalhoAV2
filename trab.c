//Trabalho de Matheus Aquino//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //variaveis//
    int x, y, aux;
    float nota[30];
    char nome[30][30]; 
    char aux2[30];
    //lista av1
    printf("Olá, meu nome é Matheus Aquino e este programa pode ser visto no seguinte endereço do github: https://github.com/matheusaquino/trabalhoAV2\n");
    printf("Listagem Av1\n");
    printf("-------------------------\n");
     
     //notas alunos//
     for(x=0;x<=29;x++)
    {
      
        printf("Entre com o nome do aluno %d: ", x+1);
        scanf("%s", nome[x]);
        printf("Entre com a nota do %s: ", nome[x]);
        scanf("%f", &nota[x]);
    }
    //ordem decrescente//
    for(x=0;x<=29;x++)
    {
        for(y=x+1;y<=29;y++)
        {
          if ( nota[y] > nota[x] )
          {
             aux = nota[y];
             nota[y] = nota[x];
             nota[x] = aux;
             
             strcpy(aux2, nome[y]);
             strcpy(nome[y], nome[x]);
             strcpy(nome[x], aux2);
          }
        } 
    }
    printf("\n\nLista da av1\n");
    printf("----------------\n");
    printf("Nome do aluno\tav1\n");
    //formação das tabelas//
    for(x=0;x<=29;x++)
    {
        printf("%s\t\t%.2f\n", nome[x], nota[x]);
    }
    return 0;
}
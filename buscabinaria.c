#include <stdio.h>
/*This project was assisted by OpenAI's GPT-3 language tool in the implementation of the binary search and sorting algorithm.
 * This function implements a binary search on a sorted array.
 * The function takes as parameters an array, a number to be searched, and the size of the array.
 * It returns the position of the number found or -1 if it is not found.
 * The code also includes the functionality of sorting the array through the bubble sort algorithm.
*/
int buscabinaria(int b[], int num, int tam)
{
    int esquerda = 0;
    int direita = tam - 1;
    int meio = 0;
   while(esquerda<= direita)
    {
        meio = (esquerda + direita) / 2;
        printf("Meio: %d, Esquerda: %d, Direita: %d\n", b[meio], b[esquerda], b[direita]);
        if(b[meio] == num)
        {  
            return meio;
        }
        if(b[meio] < num)
        {  
           esquerda = meio + 1;

        }
        else {
           
            direita = meio - 1;
        }
        
    }
    return -1;
}
int main()
 
{   int num = 0;
    int tam = 0;
    printf("Digite o tamanho do banco de dados\n");
    scanf("%d", &tam);
    int b[tam];
    int aux = 0;
    for(int i = 0; i < tam; i++)
    {
        printf("Informe o valor para a posição %d\n", i);
        scanf("%d", &b[i]);
    }
    //Ordenação através de bubble sort
    for(int i = 0; i < tam - 1; i++)
    {
        for(int j = 0; j < tam - 1; j++)
        {
            if (b[j] > b[j+1])
            {
              aux = b[j];
              b[j] = b[j+1];
              b[j+1] = aux;
            }
        }
    }
    for(int i = 0; i < tam; i++)// arry ordenada
    printf("%d\n", b[i]);
    printf("Informe o numero que deseja procurar\n");
    scanf("%d", &num);
    printf("%d", buscabinaria(b, num, tam));
 
    

}
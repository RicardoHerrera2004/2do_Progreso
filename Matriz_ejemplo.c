#include <stdio.h>

int main()
{

    int a, b;
    printf("Ingrese el vlor de la fila: ");
    scanf("%d", &a);
    printf("Ingrese el valor de la columna: ");
    scanf("%d", &b);
    int matriz[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matriz[i][j]=0;
            matriz[0][0]=1;
            matriz[2][2]=1;
            matriz[3][3]=1;
            printf("%d", matriz[i][j]);
        }
        
    }
    

    return 0;
}
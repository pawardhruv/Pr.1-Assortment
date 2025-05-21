#include<stdio.h>

int main()
{

    int arr[10][10], i, j, row, col;

    printf("enter the arrays row size :");
    scanf("%d", &row);

    printf("enter the arrays column size :");
    scanf("%d", &col);

    for(i=0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter element arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(j=0; j < col; j++)
    {
        for(i= 0; i< row; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

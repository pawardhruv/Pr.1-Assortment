#include<stdio.h>

int main()
{

    int a[10][10],
    i , j, largest_element,row, col;

    printf("Enter the number of rows and columns of an array:\n");
    scanf("%d %d", &row, &col);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    largest_element = a[0][0];
    for(i = 1; i<row; i++)
    {

        for(j = 0; j<col; j++)
        {
            if(a[i][j] > largest_element)
        
            {
                largest_element = a[i][j];
            }
        }
        
        
    }
    printf("Largest element is : %d", largest_element);
    return 0;
}
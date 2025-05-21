#include<stdio.h>

int main()
{
    int i, j, row, col, row_num, col_num;
    int arr[10][10], sum1 = 0, sum2 = 0;

    printf("\n enter the arrays row size :");
    scanf("%d", &row);

    printf("\n enter the arrays column size :");
    scanf("%d", &col);

    for(i=0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\n Enter element arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n Enter the row number to find the sum: ");
    scanf("%d", &row_num);

    if(row_num <= row)
    {
        printf("\n Sum of row %d: ", row_num);
        for(j = 0; j < col; j++)
        {
            printf("%d ", arr[j][row_num]);
            sum1 += arr[row_num][j];
        }

    }
    printf("\n Sum of row %d: %d\n", row_num, sum1);
    printf("/n /n");

 

    printf("\n Enter the column number to find the sum: ");
    scanf("%d", &col_num);

    if(col_num <= col)
    {
        printf("\n Sum of column %d: ", col_num);
        for(i = 0; i < row; i++)
        {
            printf("%d ", arr[i][col_num]);
            sum2 += arr[i][col_num];
        }
    }
    printf("\n Sum of row %d: %d\n", col_num, sum2);
    printf("/n /n");

    return 0;


    
}



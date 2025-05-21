#include<stdio.h>

int main() 
{
    int a[5], i, negative_elements = 0,size =0;

    printf("Enter the size of an array:\n");
    scanf("%d", &size); 

    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++) 
    {
        if(a[i] < 0) 
        {
            printf("negative elements from an array: %d\n", a[i]);
            negative_elements++;
        }
    }

    printf("Number of negative elements: %d\n", negative_elements);
    return 0;
}


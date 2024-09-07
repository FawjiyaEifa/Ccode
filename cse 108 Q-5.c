
#include <stdio.h>
#define ARR_SIZE 20
int main()
{
    system("COLOR 80");

    printf("\t========Press Enter To Continue========\t");
    getchar();

    int i, size, arr[20];


    printf("\tEnter array size\t: ");
    scanf("%d", &size);

    printf("\tEnter elements\t: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortingAnArray(arr, size);

    printf("\tArray Elements From Maximum to Minimum\t: ");
    for(i = size-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    getch();
}

void sortingAnArray(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

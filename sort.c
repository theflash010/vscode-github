#include <stdio.h>
#include <stdlib.h>


int sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int target = i - 1;
        int temp = arr[i];
        while (target >= 0 && arr[target] >= temp)
        {
            arr[target + 1] = arr[target];
            target--;
        }
        arr[target + 1] = temp;
    }
}
int main(void)
{
    int Arr[10] = { 9,4,2,7,8,1,6,0,3,5 };
    sort(Arr, 10);
    for (int i = 0; i < 10; i++)
        printf("%d\n", Arr[i]);

    system("pause");
    return 0;
}
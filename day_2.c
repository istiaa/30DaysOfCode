//count total number of negative elements in array
#include <stdio.h>
int main()
{
    int arr[100];
    int i, num, count=0;
    printf("Enter size of the array : ");
    scanf("%d", &num);
    printf("Enter elements in array : ");
    for(i=1; i<=num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1; i<=num; i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }
    printf("\nTotal number of negative elements = %d", count);
    return 0;
}

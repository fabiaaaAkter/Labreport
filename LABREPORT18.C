#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("Displaying odd numbers in range(%d): ", n);
    for (int i = 1; i <= n; i += 2)
    {   if(i%2==1){
        sum += i;
        printf("%d ", i);
        }
    }
    printf("\nSum of odd numbers in range(%d): %d\n", n, sum);
return 0;
}

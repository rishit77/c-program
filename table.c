#include<stdio.h>

int main(){
    int n,temp;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        {
            temp = i;
            for (int j=1; j<= n; j++)
        {
            printf("%d", temp);
            temp += i;
        }
        printf("\n");
        }
    return 0;
}
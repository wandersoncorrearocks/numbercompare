#include <stdio.h>

int menor_valor(int a, int b){
    int res;
    res=a<b ? a : b;
    return res;
}


int main()
{
    int x, y, result;
    printf("Digite os valores a serem comparados\n");
    scanf("%d %d", &x, &y);
    result = menor_valor(x,y);
    printf("o menor valor é %d", result);
    
    return 0;
}

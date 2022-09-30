#include <stdio.h>
#include <stdlib.h>

int func_it(int n);
int func_rec(int n);

int main(){
    int n, a, x;
    printf("digite um numero: ");
    scanf("%d", &a);
    printf("digite 1 para o numero ser calculado de forma iterativa e 2 para ser calculados de modo recursivo: ");
    scanf("%d", &x);
    if(x == 1){
        printf("funcao iterativa\n");
        printf("%d", func_it(a));
        printf("\n\n");
    }if(x == 2){
        printf("funcao recursiva\n");
        printf("\n\n");
        printf("%d", func_rec(a));
    }
    system("pause");
}

int func_it(int n){
    for (int i = (n - 1); i > 0; i--){
        printf("%d", n);
        n += i;
    }
}

int func_rec(int n){
     if (n == 0){
        return 0;
     }
     return (n+ func_rec(n-1));
}

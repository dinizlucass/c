#include <stdio.h>
#include <stdlib.h>

void func_it(int n);
int func_rec(int n);

int main(){
    int n, j;
    int res_it, res_rec;
    printf("digite um numero");
    scanf("%d", &n);
    printf("funcao iterativa\n");
    func_it(n);
    printf("\n\n");
    printf("funcao recursiva\n");
    printf("\n\n");
    j = func_rec(n);
    printf("\n\n\n\n");
    system("pause");
}

void func_it(int n){
    n++;
    do{
        n--;
        printf("\n%d", n);
    }while(n);
}

int func_rec(int n){
    printf("\n%d", n);
     if (n == 0){
        return 0;
     }
     return (func_rec(n-1));
}

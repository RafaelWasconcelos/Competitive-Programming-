#include <stdio.h>

int main() {
    int N, Npeca; 

    scanf("%d", &N);
    Npeca = ((N+1)*(N+2))/2;
    printf("%d\n", Npeca);
    
    return 0;
}
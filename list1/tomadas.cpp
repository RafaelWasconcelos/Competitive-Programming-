#include <stdio.h>
int main(){
    int T;
    int N = 4;
    int maxN = 0; 

    for (int i=0; i<N ; i++){
        scanf("%d", &T); 
        if(i<N-1){
            
            maxN += T-1;   
        }   
        else{
            maxN += T;
            printf("%d\n", maxN);
        }
    }


return 0;
}

#include <stdio.h>
#include <stdlib.h>

void bubblesort (int vet[], int n){

int i, j, aux;
for(i=0; i<n;i++){
    for (j=0;j<n-1-i;j++){
        if (vet[j]>vet[j+1]){
            aux=vet[j];
            vet[j]= vet[j+1];
            vet[j+1]=aux;
            }
    }
}
}
int main(){
    int i,n=1000, vet[n];
    for (i=0;i<n;i++)
        vet[i]=rand()%n;
    for(i=0;i<n;i++)
        printf("vet[%d]=%d\n",i,vet[i]);
    bubblesort(vet,n);
    printf("\n\n");
    for(i=0;i<n;i++)
        printf("vet[%d]=%d\n",i,vet[i]);
    return 0;
}

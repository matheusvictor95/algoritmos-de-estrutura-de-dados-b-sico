#include <stdio.h>
#include <stdlib.h>

void selectionsor(int vet[],int n){
int menor, aux,i;
for( i=0;i<n-1;i++){
    menor=i;

        for(int j=i+1;j<n;j++){
            if(vet[menor]>vet[j])
               menor=j;
        }
    if(i!=menor){
        aux=vet[i];
        vet[i]=vet[menor];
        vet[menor]=aux;
    }
}
}
int main(){
    int i,n=1000, vet[n];
    for (i=0;i<n;i++)
        vet[i]=rand()%n;
    for(i=0;i<n;i++)
        printf("vet[%d]=%d\n",i,vet[i]);
    selectionsor(vet,n);
    printf("\n\n");
    for(i=0;i<n;i++)
        printf("vet[%d]=%d\n",i,vet[i]);
    return 0;
}

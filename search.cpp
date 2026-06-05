#include<stdio.h>
#include<conio.h>
void main(){
        clrscr();
        int x[20],s;
        int i,n,k=0;
        printf("Enter n=");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                printf("Enter x[%d]=",i);
                scanf("%d",&x[i]);
        }
        printf("Enter number to search=");
        scanf("%d",&s);
        for(i=0;i<n;i++){
                if(x[i]==s){
                        k=k+1;
                        printf("x[%d] =%d",i,x[i]);
                }
                if(k==0){
                        printf("Search Not found");
                }
        }
        getch();
}
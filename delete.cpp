#include <stdio.h>
#include <conio.h>
void main(){
        clrscr();
        int x[20],d;
        int i,j,n;
        printf("Enter n: ");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                printf("x[%d]=",i);
                scanf("%d",&x[i]);
        }
        printf("\n\nOutput data before delete:\n");
        for(i=0;i<n;i++){
                printf("%4d ",x[i]);
        }
        printf("\n\nEnter number to delete: ");
        scanf("%d",&d);
        for(i=0;i<n;i++){
                if(x[i]==d){
                        for(j=i;j<n;j++){
                                x[j]=x[j+1];
                        }
                        n--;
                }
        }
        printf("\n\nOutput data after delete:\n");
        for(i=0;i<n;i++){
                printf("%4d ",x[i]);
        }
        getch();
}
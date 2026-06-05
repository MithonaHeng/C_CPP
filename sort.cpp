#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
        clrscr();
        int id[20], temp;
        char name[20][20], temp1[20];
        float av[20], temp2;
        int n, i, j;
        printf("Enter the number of students: ");
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
                printf("id =");
                scanf("%d", &id[i]);
                printf("name =");
                fflush(stdin);
                gets(name[i]);
                printf("average =");
                scanf("%f", &av[i]);
        }
        printf("\n\nOutputBefore sorting:\n");
        for(i = 0; i < n; i++)
        {
                printf("%-4d %-15s %-8.2f\n", id[i], name[i], av[i]);
        }
        for(i=0; i<n-1; i++){
                for(j=i+1; j<n; j++){
                                if(strcmp(name[i], name[j]) > 0){
                                        temp = id[i];
                                        id[i] = id[j];
                                        id[j] = temp;
                                        strcpy(temp1, name[i]);
                                        strcpy(name[i], name[j]);
                                        strcpy(name[j], temp1);
                                        temp2 = av[i];
                                        av[i] = av[j];
                                        av[j] = temp2;
                        }
                }
                printf("\n\nOutput After sorting:\n");
                for(i = 0; i < n; i++)
                {
                        printf("%-4d %-15s %-8.2f\n", id[i], name[i], av[i]);
                }
                getch();
        }

}
#include<stdio.h>

int main(){
    int arr1[50];
    int arr2[50];
    int merge[100];
    int n1,n2,i;

    printf("enter the size of first array:- ");
    scanf("%d",&n1);
    printf("enter the elements of first array:- \n");
    for ( i = 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("enter the size of second array:- ");
    scanf("%d",&n2);
    printf("enter the elements of second array:- \n");
    for ( i = 0; i < n2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    for ( i = 0; i < n1; i++)
    {
        merge[i]=arr1[i];
    }
    for ( i = 0; i < n2; i++)
    {
        merge[n1+i]=arr2[i];
    }

    printf("both array's merge is:- ");
    for ( i = 0; i < n1+n2; i++)
    {
        printf("%d , ",merge[i]);
    }
    
    return 0;
}
/*
author: chamod dananjaya
title: basic star pattern types in c
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    //star pattern 1
    printf("\nFirst pattern\n");
    for(int i=1; i<=num; i++){
        for(int j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }

    //star pattern 2
    printf("\nSecond pattern\n");
    for(int i=num; i>0; i--){
        for(int j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }

    //star pattern 3
    printf("\nThird pattern\n");
    if(num%2 == 0){
        printf("This pattern not comfortable for even numbers!\n");
    }
    else{
        int mid = (num/2);
        int start = mid;
        int end = mid;
        for(int i=0; i<num; i++){
            for(int j=0; j<num; j++){
                if(j==mid || (j>=start && j<=end)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            end++;
            start--;
            printf("\n");
            if(end == (num) && start == -1){
                break;
            }
        }
    }

    //star pattern 4
    printf("\nfourth pattern\n");
    if(num%2 == 0){
        printf("This pattern not comfortable for even numbers!\n");
    }
    else{
        int mid = (num/2);
        int start = 0;
        int end = num-1;
        for(int i=0; i<num; i++){
            for(int j=0; j<num; j++){
                if(j==mid || (j>=start && j<=end)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            end--;
            start++;
            printf("\n");
            if(end == mid-1){
                break;
            }
        }
    }
}

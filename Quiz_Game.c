#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    char questions[][100] = {"what is the largest planet in solar systm?\n",
                             "waht is hottest planet ?",
                             "what is blue plant ?"};
                             
    char options[][100] = {"A. Jupitor\nB. Saturn\nC. Mars\nD. Uranus",
                           "A. Jupitor\nB. Mars\nC. earth\nD. venus",
                           "A. mars\nB. earth\nC. venus\nD. saturn"};

    char answers[] = {'A','B','B'};
                           
    int qsize = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;


    printf("******Quiz Game*****\n");
    for(int i =0 ;i < qsize;i++){
        printf("\n%s\n",questions[i]);
        printf("\n%s\n",options[i]);
        printf("\nEnter your choise:");
        scanf(" %c",&guess);

        guess = toupper(guess);

        if(guess == answers[i]){
            printf("correct\n");
            score++;
        }
        else{
            printf("wrong\n");
        }
    }
    printf("your score is %d out of %d points\n",score,qsize);
    return 0;
    }

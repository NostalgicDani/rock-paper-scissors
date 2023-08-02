// rock paper scissors
// date: aug 2

//libraries 
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>

//variables
int pwin = 0;
int cwin = 0;
int pchoice; 
int comchoice;
std::string choices[] = {"boop", "rock", "paper", "scissors"};
int win = 0;

// declare functions?
void set();
void check();

int main() {
    printf("\nWelcome to a simple C++ Rock, Paper, Scissors Game\n");
    printf("\nBest of 5\n");
    printf("\nContinue?");
    std::cin.ignore();
    do {
        set(); 
        printf("\nPick: \n 1.rock\n 2.paper\n 3.scissors\n");
        do {
            std::cin >> pchoice;
        } while ( pchoice > 3 || pchoice < 1);
      //computer choice
          srand((unsigned) time(NULL)); //needed for random choice?
          comchoice = 1 + (rand() % 3);
        std::cout << "\nYou played " << choices[(pchoice)] << ", computer played " << choices[(comchoice)];
        check();
        std::cin.ignore();
        if (pwin == 3) {
            win = 1;
        } else if (cwin == 3){
            win = -1;
        } 
    } while (win == 0);
        set();
        if (win == 1) {
            printf("You won the game!");
            std::cin.ignore();
        } else if (win == -1) {
            printf("Computer won the game :(");
            std::cin.ignore();
        } 
    return 0;
}

void set() {
    system("clear");
    printf("Rock, Paper, Scissors\n");
    printf("Player - %d | Computer - %d\n", pwin, cwin);
}

void check() {
    //rock wins
    if (pchoice == 1 && comchoice == 3){
        printf("\nYou win\n");
        pwin++;
        std::cin.ignore();
    } else if (pchoice == 3 && comchoice == 1){
        printf("\nYou lose\n");
        cwin++;
        std::cin.ignore();
    }
    //paper wins
     else if (pchoice == 2 && comchoice == 1){
        printf("\nYou win\n");
        pwin++;
        std::cin.ignore();
    }  else if (pchoice == 1 && comchoice == 2){
        printf("\nYou lose\n");
        cwin++;
        std::cin.ignore();
    }
    //scissors wins
     else if (pchoice == 3 && comchoice == 2){
        printf("\nYou win\n");
        pwin++;
        std::cin.ignore();
    }  else if (pchoice == 2 && comchoice == 3){
        printf("\nYou lose\n");
        cwin++;
        std::cin.ignore();
    } else {
        printf("\nTied\n");
        std::cin.ignore();
    }
}



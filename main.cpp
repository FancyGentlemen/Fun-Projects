/*
* Project Title: Solitaire
*
* Description: This program is a game of solitaire. At first, the player is shown a menu of options to choose from; New Deck,
* Display Deck, Shuffle Deck, Play Solitaire, and Exit. When the player chooses play solitaire, a deck of cards will appear and
* the player will take cards from the face down deck and the program will calculate the sum of the values of the chosen cards.
* If the sum is a prime number, the chosen cards will be discarded and the player will have to take cards from the deck again.
* If the chosen cards sums' are not prime numbers, the player should keep drawing cards. Once all 52 cards are drawn, if the last
* card drawn goes into a hand of cards that makes it a prime set, the user wins. If the last card drawn *goes into a hand that
* does not make it a prime set, the user loses.
*
* Developers:
* -Michael Butcher: butchemp@mail.uc.edu
* -Stephanie Mullins: mullise@mail.uc.edu
*
* Special Instructions:
* -From the menu, the player can choose any option, however, in order to play Solitaire the deck of cards must be shuffled first.
*
* Developer Comments:
* -Michael Butcher: I used Object Orineted Programming to effectivley complete a task.  This project allowed me to think outside the box in how to solve
* certain problems.  I cerated the shuffling function and most things to do with the actual Solitaire game.  This project showed me programming can be alot
* more fun than I orginaly thought. Having to come up with new ideas to work past a bug gave me enjoyment.  The skills I learned to complete a project and have it
* readable to someone else will stay with me forever.
*
* -Stephanie Mullins: I helped create ideas before and during the making of the project. I created the initial main menu, part of the menu shown
*   while playing the game, displaying the deck of cards unshuffled as one of the menu options, wrote out the introductory comment at the
*   top of main, and described all the functions and what they do at the top of solitaire.cpp. While working on this project, and collectively
*   throughout this course, I have learned that in order to solve these complex problems, a diagram or flowchart is essential to see what is going
*   on and to put it out on paper so you don't have to keep it stuck in your mind, possibly forgetting it.
*/

#include "solitaire.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    Menu Base_Deck;
    vector<card> TempDeck;
    TempDeck=Base_Deck.Initial_Menu();
    Deck Draw_Pile;
    Draw_Pile.InitializeDeck();
    Draw_Pile.Play_Solitaire(TempDeck);
    Deck Players_Hand;
    Players_Hand.Game(Draw_Pile);

return 0;
}

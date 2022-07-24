#ifndef SOLITAIRE_H
#define SOLITAIRE_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <math.h>

using namespace std;

struct card
{
    string cardValue;               // (A,2,3,4,5,6,7,8,9,10,J=Jack ,Q=Queen ,K=King)
    char suite;                     // (S=Spades, H=Hearts, C=Clubs, D=Diamonds)
};

class Deck          // This is the class for when the game of Solitaire is being played
{
    private:
        vector <card> deck;

    public:
        void Display_DrawPile(Deck Draw_Pile);      // Displays the Draw Pile
        void Display_DiscardPile(int sizeOfDiscardPile);        // Displays the Discard Pile
        void Play_Solitaire(vector <card> tempDeck);        // Connects cards from menu to the game so the user has the same deck
        void InitializeDeck();      // Initializes a 52 size vector<card> for an object
        void TakeCard(Deck &Draw_Pile);     // Takes a card from the Draw Pile and adds it to the players hand while also deleting it from the draw pile
        void DrawingPhase(Deck &Draw_Pile, int &valueOfHand);       // Function that runs all functions related to drawing a card
        int ValueOfCard(int i);     // Takes the value of a card in transforms it into a numerical value.  Returns the card's value.
        int ValueOfHand();      // Takes the total value of the player's hand. Returns the sum of the Player's hand
        bool IfPrime(int valueOfHand);      // Checks if the player's hand is prime or not
        void ShowHand(int valueOfHand);     // Displays the player's hand
        void Game(Deck &Draw_Pile);         // Supreme main function for playing Solitaire.  Calls all functions needed to play Solitaire
        void IngameMenu(Deck &Draw_Pile, int &valueOfHand, int &sizeOfDiscardPile);         // The Menu in game to choose opitions from
        int YesPrime();         // For when the Player's hand is prime.  Returns the size of the player's hand for reference to the discard pile
        void Display_Game(int sizeOfDiscardPile, int valueOfHand, Deck Draw_Pile);      // Calls the three Display functions for Draw Pile, Player's Hand, and Discard Pile
        void Unshuffled_Deck();         // Puts an unshuffled 52 size deck into the object.
        void Shuffle_Deck();        // Shuffles the object's deck
        void WinCondition(Deck &Draw_Pile, int &sizeOfDiscardPile, int &valueOfHand);       // Checks if Win condition is met and what to do next if it is met.
        void EndMenu(Deck &Draw_Pile, int &sizeOfDiscardPile, int &valueOfHand);        // Menu for the end of the game.
};

class Menu  // This is the class for when the player is in the menu
{
    private:
        vector <card> deck;
    public:
        vector<card> Initial_Menu(); // Start-up menu.
        void Unshuffled_Deck(); // Makes an unshuffled 52 size deck for the object.
        void Display_Deck(); // Displays the deck in a 4x13 matrix.
        void Shuffle_Deck(); // Shuffles the deck
        vector <card>  Play_Solitaire();  // Transfers the Menu's deck to the Draw Pile.
        void InitializeDeck(); // Creates a blank 52 size deck.
};

#endif // SOLITAIRE_H

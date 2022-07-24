/*
 * Function Name: void Deck::EndMenu(Deck &Draw_Pile, int &sizeOfDiscardPile, int &valueOfHand)
 * Function Description:
 *      Part of class Deck.
 *      Displays a menu for the end of the game.
 * Parameters:
 *      Draw_Pile, sizeOfDiscardPile, and valueOfHand
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::WinCondition(Deck &Draw_Pile, int &sizeOfDiscardPile, int &valueOfHand)
 * Function Description:
 *      Part of class Deck.
 *      Checks if win condition is met and what to do next if it is met.
 * Parameters:
 *      Draw_Pile, sizeOfDiscardPile, valueOfHand
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::Unshuffled_Deck()
 * Function Description:
 *      Part of class Deck.
 *      Puts an unshuffled 52 size deck into the object.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::Shuffle_Deck()
 * Function Description:
 *      Part of class Deck.
 *      Shuffles the object's deck.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::Game(Deck &Draw_Pile)
 * Function Description:
 *      Part of class Deck.
 *      Supreme main function for playing Solitaire. Calls all functions needed to play Solitaire.
 * Parameters:
 *      Draw_Pile
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::IngameMenu(Deck &Draw_Pile, int &valueOfHand, int &sizeOfDiscardPile)
 * Function Description:
 *      Part of class Deck.
 *      The menu in-game to choose options from.
 * Parameters:
 *      Draw_Pile, valueOfHand, sizeOfDiscardPile
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::DrawingPhase(Deck &Draw_Pile, int &valueOfHand)
 * Function Description:
 *      Part of class Deck.
 *      Function that runs all functions related to drawing a card.
 * Parameters:
 *      Draw_Pile, valueOfHand
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: int Deck::YesPrime()
 * Function Description:
 *      Part of class Deck.
 *      For when the player's hand is prime.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      Returns the size of the player's hand for reference to the discard pile.
 *
 *
 * Function Name: bool Deck::IfPrime(int valueOfHand)
 * Function Description:
 *      Part of class Deck.
 *      Checks to see if the Player's hand is prime.
 * Parameters:
 *      valueOfHand
 * Return Value:
 *      Returns true or false.
 *
 *
 * Function Name: int Deck::ValueOfCard(int i)
 * Function Description:
 *      Part of class Deck.
 *      Takes the value of a card and transforms it into a numerical value.
 * Parameters:
 *      i. Used to iterate through the vector deck.
 * Return Value:
 *      Returns the card's value.
 *
 *
 * Function Name: int Deck::ValueOfHand()
 * Function Description:
 *      Part of class Deck.
 *      Takes the total value of the player's hand.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      Returns the sum of the player's hand.
 *
 *
 * Function Name: void Deck::InitializeDeck()
 * Function Description:
 *      Part of class Deck.
 *      Initializes a 52 size vector<card> for an object.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::Play_Solitaire(vector <card> tempDeck)
 * Function Description:
 *      Part of class Deck.
 *      Connects cards from menu to the game so the user has the same deck.
 * Parameters:
 *      tempDeck. Used to create a temporary vector<card> deck.
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::ShowHand(int valueOfHand)
 * Function Description:
 *      Part of class Deck.
 *      Displays the player's hand.
 * Parameters:
 *      valueOfHand
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::Display_DrawPile(Deck Draw_Pile)
 * Function Description:
 *      Part of class Deck.
 *      Displays the Draw Pile.
 * Parameters:
 *      Draw_Pile
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::Display_Game(int sizeOfDiscardPile, int valueOfHand, Deck Draw_Pile)
 * Function Description:
 *      Part of class Deck.
 *      Calls the three display functions for Draw_Pile, Player's Hand, and Discard Pile.
 * Parameters:
 *      sizeOfDiscardPile, valueOfHand, Draw_Pile
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Deck::Display_DiscardPile(int sizeOfDiscardPile)
 * Function Description:
 *      Part of class Deck.
 *      Displays the Discard Pile.
 * Parameters:
 *      sizeOfDiscardPile
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: vector <card> Menu::Play_Solitaire()
 * Function Description:
 *      From the class Menu.
 *      Transitions the deck made in the menu to the Deck class.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      Returns the temporary deck created to convert to the Deck class.
 *
 *
 * Function Name: void Menu::Display_Deck()
 * Function Description:
 *      From the class Menu.
 *      Displays deck of cards in a grid, 13 by 4, by ascending card value and the same suite.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Menu::Shuffle_Deck()
 * Function Description:
 *      From the class Menu.
 *      Shuffles the deck for the user from the initial menu screen.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Menu::Unshuffled_Deck()
 * Function Description:
 *      From the class Menu.
 *      Makes an unshuffled deck for the user from the initial menu screen.
 *      Initializes deck card values, deck suites, and deck orientations.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: void Menu::InitializeDeck()
 * Function Description:
 *      From the class Menu.
 *      Creates an object vector named deck with size 52.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      No return value.
 *
 *
 * Function Name: int Initial_Menu()
 * Function Description:
 *      Stand alone function soley to reduce code in main.
 *      Displays menu to user and allows them to make choices on what they want to do next.
 * Parameters:
 *      No parameters.
 * Return Value:
 *      If choice = 5 then function returns 1, causing the program to kill.
 *      If choice doesn't equal 5 then function returns whatever other choice was picked.
*/

#include "solitaire.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
using namespace std;

void Deck::EndMenu(Deck &Draw_Pile, int &sizeOfDiscardPile, int &valueOfHand)
{
    int choice = 0;
    cout << "1) Play again?\n";
    cout << "2) Exit game\n";
    cout<<"Choice: ";
    cin >> choice;
    cout<<endl<<endl;
    switch(choice)
    {

        case 1: {
            deck.resize(0);
            sizeOfDiscardPile=0;
            Draw_Pile.InitializeDeck();
            Draw_Pile.Unshuffled_Deck();
            Draw_Pile.Shuffle_Deck();
            valueOfHand=0;
            break;
        }

        case 2: {
            exit(true);
            break;
        }
        default: {
            cout << "Not a valid choice. Choose again" << endl;
            break;
        }
    }
}


void Deck::WinCondition(Deck &Draw_Pile, int &sizeOfDiscardPile, int &valueOfHand)
{
    bool prime;
    if (Draw_Pile.deck.size()==0)
    {
        Display_Game(sizeOfDiscardPile,valueOfHand, Draw_Pile);
        cout<<"Let's see if you won..."<<endl;
        prime = IfPrime(valueOfHand);
        if (prime==true)  {cout<<"You Won!!!!!"<<endl;}
        if (prime==false) { cout<<"You Lost :("<<endl;}
        EndMenu(Draw_Pile,sizeOfDiscardPile,valueOfHand);
    }
}


void Deck::Unshuffled_Deck() {
    vector <string> tempCardValue ={"A","2","3","4","5","6","7","8","9","10","J","Q","K","A","2","3","4","5","6","7","8","9","10","J","Q","K","A","2","3","4","5","6","7","8","9","10","J","Q","K","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    vector <char> tempSuite ={'H','H','H','H','H','H','H','H','H','H','H','H','H','D','D','D','D','D','D','D','D','D','D','D','D','D','C','C','C','C','C','C','C','C','C','C','C','C','C','S','S','S','S','S','S','S','S','S','S','S','S','S'};
    for (int i = 0; i<52; ++i)
    {
        deck.at(i).cardValue=tempCardValue.at(i);
        deck.at(i).suite=tempSuite.at(i);
    }
}


void Deck::Shuffle_Deck()
{
    srand(time(NULL));
    string u;
    char v;
    for (int i=0; i<52 ;i++)
    {
        int r = i + (rand() % (52 -i));
        u=deck.at(i).cardValue;
        deck.at(i).cardValue=deck.at(r).cardValue;
        deck.at(r).cardValue=u;
    }
    for (int i=0; i<52 ;i++)
    {
        int r = i + (rand() % (52 -i));
        v=deck.at(i).suite;
        deck.at(i).suite=deck.at(r).suite;
        deck.at(r).suite=v;
    }
}


void Deck::Game(Deck &Draw_Pile)
{
    int sizeOfDiscardPile = 0;
    int valueOfHand = 0;
    bool prime;
    Display_Game(sizeOfDiscardPile,valueOfHand,Draw_Pile);
    while (true)
    {
        IngameMenu(Draw_Pile, valueOfHand, sizeOfDiscardPile);
        WinCondition(Draw_Pile,sizeOfDiscardPile,valueOfHand);
        Display_Game(sizeOfDiscardPile,valueOfHand, Draw_Pile);
        prime = IfPrime(valueOfHand);
        if (prime==true)  sizeOfDiscardPile=sizeOfDiscardPile+YesPrime();
    }
}


void Deck::IngameMenu(Deck &Draw_Pile, int &valueOfHand, int &sizeOfDiscardPile)
{
    int choice = 0;
    cout << "1) Draw card\n";
    cout << "2) Restart game\n";
    cout << "3) Exit game\n";
    cout<<"Choice: ";
    cin >> choice;
    cout<<endl<<endl;
    switch(choice)
    {
       case 1: {
            DrawingPhase(Draw_Pile, valueOfHand);
            break;
        }

        case 2: {
            deck.resize(0);
            sizeOfDiscardPile=0;
            Draw_Pile.InitializeDeck();
            Draw_Pile.Unshuffled_Deck();
            Draw_Pile.Shuffle_Deck();
            valueOfHand=0;
            break;
        }

        case 3: {
            exit(true);
            break;
        }
        default: {
            cout << "Not a valid choice. Choose again" << endl;
            break;
        }
    }
}


void Deck::DrawingPhase(Deck &Draw_Pile, int &valueOfHand)
{
    TakeCard(Draw_Pile);
    valueOfHand=ValueOfHand();
}


int Deck::YesPrime()
{
    int sizeOfDeck;
    cout<<endl<<"Your hand was prime, going to discard pile."<<endl;
    sizeOfDeck=deck.size();
    deck.resize(0);
    return sizeOfDeck;
}


bool Deck::IfPrime(int valueOfHand)
{
    int i;
    bool prime=true;
    if (valueOfHand==1 || valueOfHand==0)  return false;
    for(i = 2; i <= (valueOfHand-1); ++i)
    {
        if(valueOfHand % i ==0)
        {
            prime=false;
            break;
        }
    }
    return prime;
}


int Deck::ValueOfCard(int i)
{
    int value = 0;
    string endCard;
    endCard=deck.at(i).cardValue;
    if(endCard=="A") value=1;
    else if (endCard=="2") value=2;
    else if (endCard=="3") value=3;
    else if (endCard=="4") value=4;
    else if (endCard=="5") value=5;
    else if (endCard=="6") value=6;
    else if (endCard=="7") value=7;
    else if (endCard=="8") value=8;
    else if (endCard=="9") value=9;
    else if (endCard=="10") value=10;
    else if (endCard=="J") value=10;
    else if (endCard=="Q") value=10;
    else if (endCard=="K") value=10;

    return value;
}


int Deck::ValueOfHand()
{
    int value = 0;
    int sum = 0;
    for (unsigned i = 0; i<deck.size(); ++i)
    {
        value=ValueOfCard(i);
        sum=sum+value;
    }
    return sum;
}


void Deck::TakeCard(Deck &Draw_Pile)
{
    deck.push_back(Draw_Pile.deck.back());
    Draw_Pile.deck.erase(Draw_Pile.deck.end()-1);
}


void Deck::InitializeDeck()
{
    deck.resize(52);
}



void Deck::Play_Solitaire(vector <card> tempDeck)
{
    for (int i = 0; i<52; ++i)
    {
        deck.at(i).cardValue=tempDeck.at(i).cardValue;
        deck.at(i).suite=tempDeck.at(i).suite;
    }
}


void Deck::ShowHand(int valueOfHand)
{
    cout<<"Value of hand is "<<valueOfHand<<endl;
    for (unsigned i = 0; i<deck.size(); ++i)
    {
        cout<<deck.at(i).cardValue<<deck.at(i).suite<<"  ";
    }
    cout<<endl;
}


void Deck::Display_DrawPile(Deck Draw_Pile)
{
    cout<<endl;
    cout<<"- - - - - - - - - - - -"<<endl;
    cout<<"Size of pile: "<<Draw_Pile.deck.size()<<endl;
    cout<<"- - - - - - - - - - - -"<<endl;
}


void Deck::Display_Game(int sizeOfDiscardPile, int valueOfHand, Deck Draw_Pile)
{
    Display_DrawPile(Draw_Pile);
    ShowHand(valueOfHand);
    Display_DiscardPile(sizeOfDiscardPile);
}


void Deck::Display_DiscardPile(int sizeOfDiscardPile)
{
    cout<<"- - - - - - - - - - - -"<<endl;
    cout<<"Size of Discard pile: "<<sizeOfDiscardPile<<endl;
    cout<<"- - - - - - - - - - - -"<<endl<<endl;

}




// MENU functions start Here

vector <card> Menu::Play_Solitaire()
{
    vector <card> tempDeck;
    tempDeck.resize(52);
    for (int i = 0; i<52; ++i)
    {
        tempDeck.at(i).cardValue=deck.at(i).cardValue;
        tempDeck.at(i).suite=deck.at(i).suite;
    }
    return tempDeck;
}


void Menu::Display_Deck()
{
    cout<<" Top left is start of deck, bottom right is end of deck."<<endl;
    for (unsigned i = 0; i < 52 ; ++i)
    {
        if(i%13==0) cout<<endl;
        if (deck.at(i).cardValue=="10") cout << deck.at(i).cardValue << deck.at(i).suite << " " ;
        else cout << deck.at(i).cardValue << deck.at(i).suite << "  " ;
    }
}


void Menu::Shuffle_Deck()
{
    srand(time(NULL));
    string u;
    char v;
    for (int i=0; i<52 ;i++)
    {
        int r = i + (rand() % (52 -i));
        u=deck.at(i).cardValue;
        deck.at(i).cardValue=deck.at(r).cardValue;
        deck.at(r).cardValue=u;
    }
    for (int i=0; i<52 ;i++)
    {
        int r = i + (rand() % (52 -i));
        v=deck.at(i).suite;
        deck.at(i).suite=deck.at(r).suite;
        deck.at(r).suite=v;
    }
}


void Menu::Unshuffled_Deck()
{
    vector <string> tempCardValue ={"A","2","3","4","5","6","7","8","9","10","J","Q","K","A","2","3","4","5","6","7","8","9","10","J","Q","K","A","2","3","4","5","6","7","8","9","10","J","Q","K","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    vector <char> tempSuite ={'H','H','H','H','H','H','H','H','H','H','H','H','H','D','D','D','D','D','D','D','D','D','D','D','D','D','C','C','C','C','C','C','C','C','C','C','C','C','C','S','S','S','S','S','S','S','S','S','S','S','S','S'};
    for (int i = 0; i<52; ++i)
    {
        deck.at(i).cardValue=tempCardValue.at(i);
        deck.at(i).suite=tempSuite.at(i);
    }
}


void Menu::InitializeDeck()
{
    deck.resize(52);
}

vector<card> Menu::Initial_Menu()
{
    int choice;
    InitializeDeck();
    Unshuffled_Deck();
    Shuffle_Deck();
    while(true)
    {
        cout << "Welcome to Solitaire! \n";
        cout << "1) New Deck \n";
        cout << "2) Display Deck \n";
        cout << "3) Shuffle Deck \n";
        cout << "4) Play Solitaire \n";
        cout << "5) Exit \n";
        cout << "Enter your choice and press return: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                // function to create an unshuffled deck of cards that has 13 spades, 13 hearts, 13 diamonds, and 13 clubs in an order
                Unshuffled_Deck();
                cout<<endl<<endl;
                break;
            }

            case 2:
            {
                // function to display all cards in a grid: 13 columns by 4 rows
                Display_Deck();
                cout<<endl<<endl;
                break;
            }

            case 3:
            {
                //function to randomly shuffle all the cards in the deck, must shuffle the deck before playing game
                Shuffle_Deck();
                cout<<endl<<endl;
                break;
            }

            case 4:
            {
                //function to play solitaire
                vector <card> TempDeck;
                TempDeck.resize(52);
                TempDeck=Play_Solitaire();
                cout<<endl<<endl;
                return TempDeck;
                break;
            }

            case 5:
            {
                exit(true);
                break;
                }

            default:
            {
                cout << "Not a valid choice. Choose again" << endl;
                break;
            }
        }
    }
}

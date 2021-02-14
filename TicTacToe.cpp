/*
CSCI 3010 - Spring 2021
PE 4(b) - TicTacToe Game
Gabriela Tolosa Ramirez
Justin Murillo
*/

#include <iostream>
#include <string>
#include <vector>

/*
    Create "empty" 3x3 matrix
    @param board (auto) - board being populated as "empty"
*/
void CreateBoard(auto board){
    //making a 3x3 board of "empty" spaces
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            board[i][j] = "_";
        }
    }
}

/*
    Display 3x3 matrix
    @param board (auto) - board being displayed
*/
void DisplayBoard(auto board){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

/*
    Get player choice - location on board
    @param row (int) - row of location - by reference
    @param column(int) - column of location - by reference
*/
void GetPlayerChoice(int &row, int &column) {
    std::cout << "Enter your row between 1 and 3" << std::endl;
    std::cin >> row;
    row -= 1;
    std::cout << "Enter your column between 1 and 3" << std::endl;
    std::cin >> column;
    column -= 1;
}

int main(){
    std::string gameBoard[3][3];
    CreateBoard(gameBoard);
    DisplayBoard(gameBoard);
    return 0;
}

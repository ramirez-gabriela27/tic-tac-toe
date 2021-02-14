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

int main(){
    std::string gameBoard[3][3];
    CreateBoard(gameBoard);
    DisplayBoard(gameBoard);
    return 0;
}

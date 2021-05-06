
/*第2题	TICTACTOE游戏--源代码及关键源代码注解如下：*/
#include <iostream>
#include <stdlib.h>

using namespace std;

char board[4][4];               // array definition

class TICTACTOE {
public:
    void PrintBoard();              // game board
    void PrintInfo();               // some info about the rules of the game is printed
    void PrintStats(int, int, int);      // prints the stats of the  match
    void IfError(int &, int &); // When invalid input is entered, prints the error
    void ChoiceOfChar(char &);      // Asks the users if they want to play again
    void PromptTurnO(int &, int &);   // Prompts the first user for data
    void PromptTurnX(int &, int &);   // Second user has to input coordinates
    bool IfWin(int, int);
    void WinPost(char);
};

int main() {
    TICTACTOE tictactoe;
    int ROW;          // elements of 2 dimensional array!
    int COLUMN;
    int FirstPlayer;      // number of winning games for first player
    int SecondPlayer;
    int Draws;         // number of draws in a game
    FirstPlayer = 0;
    SecondPlayer = 0;
    Draws = 0;
    char choice;
    choice = 'Y';       // Initial value is Y in order to initialize the main loop
    tictactoe.PrintInfo();
    while (choice == 'Y') // In case the players want to play again
    {                                            // this is the main loop
        for (ROW = 0; ROW < 4; ROW++)            // these forloops are used to process the array
            for (COLUMN = 0; COLUMN < 4; COLUMN++)    // by row and column
                board[ROW][COLUMN] = ' ';                    // blank characters as initial values
        int x;                                        // (x,y) coordinates entered by the users
        int y;
        int SpotsOnBoard;                            // this is the sum of spots available on the game board
        SpotsOnBoard = 0;
        while (SpotsOnBoard <= 9)                    // because there is only 9 characters available on the board
        {
            if (SpotsOnBoard == 0)
                tictactoe.PrintBoard();                            // This function draws initialy the blank game board
            // so it is easier for the user to pick the x and y values

            tictactoe.PromptTurnO(x, y);

            tictactoe.IfError(x, y);                            // If the user's input is invalid, this function prints
            // the error message and prompts for correction
            board[x - 1][y - 1] = 'O';                        // actually the array starts from 0, NOT from 1
            SpotsOnBoard++;                            // (as entered by the user)
            // so the program have to "fix" the input
            tictactoe.PrintBoard();                                 // If 3 coordintates are O's in one of 8 possible
            //winning combinations, then O wins
            if (tictactoe.IfWin(x, y)) {
                FirstPlayer++;
                break;
            }
            if (SpotsOnBoard == 16) {
                cout << "Draw!" << endl;
                Draws++;
                break;                            // Without this brake statement it was not working propertly
            }

            tictactoe.PromptTurnX(x, y);
            tictactoe.IfError(x, y);
            board[x - 1][y - 1] = 'X';
            SpotsOnBoard++;
            tictactoe.PrintBoard();
            if (tictactoe.IfWin(x, y)) {
                FirstPlayer++;
                break;
            }
            if (SpotsOnBoard == 16) {
                cout << "Draw!" << endl;
                Draws++;
                break;                            // Without this brake statement it was not working propertly
            }
        }
        tictactoe.ChoiceOfChar(choice);
    }

    tictactoe.PrintStats(FirstPlayer, SecondPlayer, Draws);

    system("PAUSE");
    return 0;
}

void TICTACTOE::PrintBoard()
// Post : The Game board is printed to help with choosing the coordintates
//        Either X or O will be printed on the board.
//        Board is updated while the game progresses
{
    cout << endl;
    cout << "  1   2   3  4 " << endl;
    cout << "1 " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " | " << board[0][3] << endl;
    cout << " ---|---|---|---" << endl;
    cout << "2 " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " | " << board[1][3] << endl;
    cout << " ---|---|---|---" << endl;
    cout << "3 " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " | " << board[2][3] << endl;
    cout << " ---|---|---|---" << endl;
    cout << "4 " << board[3][0] << " | " << board[3][1] << " | " << board[3][2] << " | " << board[3][3] << endl;
    cout << endl;
    cout << endl;
}

void TICTACTOE::PrintInfo()
// Post : Some info about the rules of the game is printed
{
    cout << "第一个玩家用O表示，第二个玩家用X表示。"<< endl;
    cout << "输入行和列的坐标" << endl;
    cout << "完成后按回车键。" << endl;
    cout << endl;
}

void TICTACTOE::PrintStats(int FirstPlayer, int SecondPlayer, int Draws)
// Pre : Players have to decide to exit the game.
// Post : Returns the number of won games and draws.
{
    cout << "O 玩家已经赢了 " << FirstPlayer << " 次" << endl;
    cout << "X 玩家已经赢了" << SecondPlayer << " 次" << endl;
    cout << "共有 " << Draws << " 次平局" << endl;
}

void TICTACTOE::IfError(int &x, int &y)
// Pre : User entered invalid data, program doesn't kow where to put them
// Post : Error message is printed, user is prompted to enter the right input
{
    while (x > 4 || x < 1 || y > 4 || y < 1 || ('O' == board[x - 1][y - 1]
                                                || 'X' == board[x - 1][y - 1])) {
        cout << "不允许使用此坐标，请重试" << endl;
        cout << "行: ";
        cin >> x;
        cout << "列: ";
        cin >> y;
    }
}

void TICTACTOE::ChoiceOfChar(char &choice)
// Pre : Entire program has been executed
// Post : User is given a chance to play again
{
    cout << endl;
    cout << " 如果你想再玩一次，请按Y。" << endl;
    cout << " 否则，按任何其他字母键退出循环。" << endl;
    cin >> choice;
}

void TICTACTOE::PromptTurnO(int &x, int &y)
// Post : First player enters the coordinates of a spot on a game board
{
    cout << "轮到第一个玩家（O），输入坐标" << endl;
    cout << "行: ";
    cin >> x;
    cout << "列: ";
    cin >> y;
}

void TICTACTOE::PromptTurnX(int &x, int &y)
// Post : Second player enters the coordinates of a spot on a game board
{
    cout << "轮到第二个玩家（X），输入坐标" << endl;
    cout << "行: ";
    cin >> x;
    cout << "列: ";
    cin >> y;
}

bool TICTACTOE::IfWin(int x, int y) {
    int posX = x - 1, posY = y - 1;
    char chese = board[posX][posY];
    if (posX >= 1 && board[posX - 1][posY] == chese) {
        if (board[posX + 1][posY] == chese) {
            WinPost(chese);
            return true;
        } else if (posX >= 2 && board[posX - 2][posY] == chese) {
            WinPost(chese);
            return true;
        }
    } else if (board[posX + 1][posY] == chese) {
        if (board[posX + 2][posY] == chese) {
            WinPost(chese);
            return true;
        }
    } else if (board[posX][posY + 1] == chese) {
        if (board[posX][posY - 1] == chese) {
            WinPost(chese);
            return true;
        } else if (board[posX][posY + 2] == chese) {
            WinPost(chese);
            return true;
        }
    } else if (posY >= 1 && board[posX][posY - 1] == chese) {
        if (posY >= 2 && board[posX][posY - 2] == chese) {
            WinPost(chese);
            return true;
        }
    } else if (board[posX - 1][posY - 1] == chese) {
        if (board[posX + 1][posY + 1] == chese) {
            WinPost(chese);
            return true;
        } else if (posX >= 2 && posY >= 2 && board[posX - 2][posY - 2] == chese) {
            WinPost(chese);
            return true;
        }
    } else if (board[posX + 1][posY + 1] == chese) {
        if (board[posX + 2][posY + 2] == chese) {
            WinPost(chese);
            return true;
        }
    } else if (board[posX - 1][posY + 1] == chese) {
        if (board[posX + 1][posY - 1] == chese) {
            WinPost(chese);
            return true;
        } else if (posX >= 2 && board[posX - 2][posY + 2] == chese) {
            WinPost(chese);
            return true;
        }
    } else if (board[posX + 1][posY - 1] == chese){
        if (posY >= 2 && board[posX + 2][posY - 2] == chese) {
            WinPost(chese);
            return true;
        }
    }
    return false;
}

void TICTACTOE::WinPost(char type) {
    if (type == 'O') {
        cout << "O 玩家赢了！" << endl;
    } else {
        cout << "X 玩家赢了！" << endl;
    }
}
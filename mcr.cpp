

bool isWin(char game[3][3])
{

    bool win = false;

    if (game[0][0] == game[0][1] && game[0][1] == game[0][2] && (game[0][0] == 'X' || game[0][0] == 'O'))
        win = true;

    if (game[1][0] == game[1][1] && game[1][1] == game[1][2] && (game[1][0] == 'X' || game[1][0] == 'O'))
        win = true;

    if (game[2][0] == game[2][1] && game[2][1] == game[2][2] && (game[2][0] == 'X' || game[2][0] == 'O'))
        win = true;

    // column

    if (game[0][0] == game[1][0] && game[1][0] == game[2][0] && (game[0][0] == 'X' || game[0][0] == 'O'))
        win = true;

    if (game[0][1] == game[1][1] && game[1][1] == game[2][1] && (game[0][1] == 'X' || game[0][1] == 'O'))
        win = true;

    if (game[0][2] == game[1][2] && game[1][2] == game[2][2] && (game[0][2] == 'X' || game[0][2] == 'O'))
        win = true;

    // diagonal

    if (game[0][0] == game[1][1] && game[1][1] == game[2][2] && (game[0][0] == 'X' || game[0][0] == 'O'))
        win = true;

    if (game[0][2] == game[1][1] && game[1][1] == game[2][0] && (game[0][2] == 'X' || game[0][2] == 'O'))
        win = true;

    return win;
}

bool isValid(char game[3][3], int i, int j)

{

    return game[i][j] ==' ';
}

void display(char game[3][3])

{

    cout << game[0][0] << "" << game[0][1] << "" < game[0][2] << endl;

    cout << game[1][0] << "" << game[1][1] << "" < game[1][2] << endl;

    cout << game[2][0] << "" << game[2][1] << "" < game[2][2] << endl;
}

int main()
{

    int i, j;

    char game[3][3] = { ' ' }; // Tic-tac-toe

    char player1 = 'X';

    char player2 = 'O';

    bool turn = true; // false for player 1's turn, true for player 2's turn. Player 1 first.

    cout << "X = Player 1" << endl
         << "O = Player 2" << endl;

    // bool hasWinner = false;

    display(game);

    for (int n = 0; n < 9; n++) {

        turn = !turn; // use the not-operator to change true to false or false to true.

        if (turn == false)

            cout << "Player 1: ";

        else

            cout << "Player 2: ";

        cout << "Which cell to mark? i:[1..3], j:[1..3]: ";

        cin >> i >> j;

        While(!isValid(game, i, j))

        {

            cin >> i >> j;
        }

        if (turn == false)

            game[i][j] = 'X';

        else

            game[i][j] = 'O';

        //Display the chess board

        display(game);

        if (isWin(game)) {

            // hasWinner = true;
            cout << "Win!" << endl;
            break; // need to terminate the problem
        }
    }
    if (!hasWinner)
        cout << "Tie!" << endl;
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Define characters
char blank = ' ';
char wallChar = '*';
char snakeBodyChar = 'X';
char snakeHeadChar = 'H';

//Initailize map
char map[12][13] = {
    "************",
    "*XXXXH     *",
    "*          *",
    "*          *",
    "*          *",
    "*          *",
    "*          *",
    "*          *",
    "*          *",
    "*          *",
    "*          *",
    "************",
};

int snakeBodyX[100] = { 1,1,1,1 }, snakeBodyY[100] = { 4,3,2,1 };
int HeadX = 1, HeadY = 5;
int tailIndex = 3;
int bodyLength = 4;
int lengthen = 0;
int foodX = 0, foodY = 0;
int gameRunning = 1;

//Function printMap
void printMap()
{
    system("cls");
    int i;
    for (i = 0; i < 12; ++i){
        printf("%s\n", map[i]);
    }
}


//Function gameOver
void gameOver()
{
    printf("GAME OVER !\n");
}

//Function snakeMove
void snackMove(char instruct)
{
    map[HeadX][HeadY] = blank;
    int preHeadX = HeadX;
    int preHeadY = HeadY;

    //Analyze instruction
    switch (instruct){
    case 'a':
    case 'A':
        HeadY--;
        break;

    case 'd':
    case 'D':
        HeadY++;
        break;

    case 'w':
    case 'W':
        HeadX--;
        break;

    case 's':
    case 'S':
        HeadX++;
        break;

    default:
        map[HeadX][HeadY] = snakeHeadChar;
        return;
    }

    if (map[HeadX][HeadY] != ' '){
        gameRunning = 0;
    }

    //snake head move
    map[HeadX][HeadY] = snakeHeadChar;

    int moved = 0;

    //snake body add
    if (lengthen){
        lengthen = 0;
        moved = 1;
        int i;
        for (i = bodyLength - 1; i > tailIndex; --i){
            snakeBodyX[i + 1] = snakeBodyX[i];
            snakeBodyY[i + 1] = snakeBodyY[i];
        }
        snakeBodyX[tailIndex + 1] = preHeadX;
        snakeBodyY[tailIndex + 1] = preHeadY;
        map[preHeadX][preHeadY] = snakeBodyChar;

        bodyLength++;
    }


    if (moved )
        return;

    //snake body move/not add
    map[snakeBodyX[tailIndex]][snakeBodyY[tailIndex]] = blank;
    snakeBodyX[tailIndex] = preHeadX;
    snakeBodyY[tailIndex] = preHeadY;
    map[snakeBodyX[tailIndex]][snakeBodyY[tailIndex]] = snakeBodyChar;
    tailIndex = (tailIndex - 1 + bodyLength) % bodyLength;
}

int main()
{
    srand(time(NULL));
    map[HeadX][HeadY] = snakeHeadChar;
    printMap();

    char instruction;
    while (gameRunning){
        scanf("%c", &instruction);
        snackMove(instruction);
        printMap();
        if (gameRunning == 0)
            gameOver();
    }
    return 0;
}

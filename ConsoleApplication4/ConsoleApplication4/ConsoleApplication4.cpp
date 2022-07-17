#include "stdafx.h"
#include <iostream>
using namespace std;

int board[8][8];

void setQueen(int i, int j)
{
  for (int x = 0; x < 8; ++x)
  {
    ++board[x][j];
    ++board[i][x];
    int foo;
    foo = j - i + x;
    if (foo >= 0 && foo < 8)
      ++board[x][foo];
    foo = j + i - x;
    if (foo >= 0 && foo < 8)
      ++board[x][foo];
  }
  board[i][j] = -1;
}

void resetQueen(int i, int j)
{
  for (int x = 0; x < 8; ++x)
  {
    --board[x][j];
    --board[i][x];
    int foo;
    foo = j - i + x;
    if (foo >= 0 && foo < 8)
      --board[x][foo];
    foo = j + i - x;
    if (foo >= 0 && foo < 8)
      --board[x][foo];
  }
  board[i][j] = 0;
}

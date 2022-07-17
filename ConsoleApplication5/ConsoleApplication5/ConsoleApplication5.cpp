bool tryQueen(int i)
{
  bool result = false;
  for (int j = 0; j < 8; ++j)
  {
    if (board[i][j] == 0)
    {
      setQueen(i, j);
      if (i == 7)
	result = true;
      else
      {
	if (!(result = tryQueen(i + 1)))
	  resetQueen(i, j);
      }
    }
    if (result)
      break;
  }
  return result;
}

int main()
{
  for (int i = 0; i < 8; ++i)
    for (int j = 0; j < 8; ++j)
      board[i][j] = 0;
  tryQueen(0);
  for (int i = 0; i < 8; ++i)
  {
    for (int j = 0; j < 8; ++j)
    {
      if (board[i][j] == -1)
	cout << "[]";
      else
	cout << ". ";
    }
    cout << endl;
  }
  system ("pause");
}
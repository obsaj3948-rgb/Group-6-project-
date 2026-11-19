#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int seats[5][4] = {
    {1, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}};

void showseats()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 4; j++)
{
      cout <<seats[i][j];
}
    cout << endl;
  }
}
void bookseats()
{
  int row, col;
  cout << "Enter Row" << endl;
  cin >> row;
  cout << "Enter Col" << endl;
  cin >> col;
  // array[row][col] = 1;
// int seats[row][col];
  if (seats[row][col] ==0)
  {
    seats[row][col] = 1;
    // cout<<seat[i]
    cout << " Seats are booked"<<endl;
  }
  else
  {
    cout << "seats are already taken"<<endl;
  }
}

int main()
{
  bookseats();
  showseats();
  return 0;
}
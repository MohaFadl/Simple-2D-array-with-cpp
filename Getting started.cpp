#include <iostream>
#include <cstdlib>


int main() {
std::cout << "This project was made by Mohamed Medhat for fun" << std::endl;
std::cout <<"Its purpose is to play with the 2D array a bit!";

srand(time(NULL));
int map [4] [4];
int ship,round = 0;
int row , col;


for ( int i = 0; i < 4; i++)
{
  for (int j = 0; j <4; j++)
  {
    if (rand() % 2 == 1)
  {
    ship += 1;
    map[i][j] = 1;
  } 
  else {
    map[i][j] = 0;
  }
    
    
  }
}

std::cout << "we have" << ship << " ships! Good luck predicting their location! CAPTAIN !!!"  ;


while (ship > 0)
{
  std::cout << "\nPlease enter a row number from 0 to 3\n";
  std::cin >> row;

  std::cout << "Please enter a col number from 0 to 3\n";
  std::cin >> col;

if (map[row][col] == 1 )
{
  map[row][col] = 0;
  ship -= 1;
  std::cout << "You hit it captain , there are  "<< ship << " remaining\n";
}
else
{
  std::cout << "failed , Please try again\n";
}
round += 1;
}

std::cout << "YOU WON!! Congratulations! with " << round <<  " rounds!" << std::endl;
system("start https://github.com/MohaFadl");

return 0;
}
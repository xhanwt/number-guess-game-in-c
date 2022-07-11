/*
Aunthor: Han Win Tun
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  // Generate random number
  srand(time(0));
  int num = (rand() % 100 ) + 1;
  int gNum, // guessed number
      times = 0; // number of times guessed
  do {
  // Enter guess number
  cout << "Guess a number (1-100): ";
  cin >> gNum;
  while (gNum < 1 || gNum > 100 || !cin.good())
    {
    cout << "\aInvalid number!\nPlease guess a number from 1 to 100: ";
    cin.clear();
    cin.ignore(80, '\n');
    cin >> gNum;
  }
  times++;
  
  
  // Calculate difference  
  int dif = gNum - num;
  if (dif == 0) {
    cout << "Correct! The number is " << num << ". You gussed " << times << " times.";
  } 
  else if (dif < 0 && dif > -5) {
    cout << "Try a number a little bit higher.\n\n";
  }
  else if (dif < 0) {
    cout << "Too low, try again.\n\n";
  }
  else if (dif > 0 && dif < 5) {
    cout << "Try a number a little bit lower.\n\n";
  } 
  else if (dif > 0){
    cout << "Too high, try again.\n\n";
  }  
    
  } while (num != gNum);

  return 0;

}

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class creature{
public:
  string name;
  bool dangerous;
  int damagePoints;
  int HP;
//Prompts user for name of creature, then stores it as a name
  void setName(){
    cout << "Now it's time to give your ocean creature a name!\nWhat will you name it?";
    cin >> name;
    cout << "\nyour creature's name is \n" << name << ". \nYour creature has been documented in your notebook.";
  }
  string generateColor(){
    //generates Hex Value
    char hex_char[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char color[6];

     //randomly chooses from array of possible values
    int i;
    string colorCode = "";
    for(i=0;i<6;i++){
      colorCode = colorCode + hex_char[rand()%16];
    }
    return colorCode;
}
};

int main() {
  srand(time(0));
  creature myCreature;
  string color = myCreature.generateColor();
  cout << "You found a creature!\n It has a color of #" << color <<"\n";
  myCreature.setName();
  return 0;
}

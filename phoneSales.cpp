//Author Chad Dayton
//Purpose: this program is used to sell custom phones
//Date Created: 9/10/21


#include <iostream>
using namespace std;

int main(){
int choice;

int chip;
int campixels;
int screenres;
string dolbytype;
int  battlife;
int phonewt;
bool ports;
string os;
bool waterproof;
bool wirecharge;
const float BASEPRICE = 800.25;
float totalprice = BASEPRICE;

//Base Model
//chip = 32gz, cam = 1080p, res = 1080p, audio = DD, battery = 24h
//refresh = 60hz, weight = 125, port = no, os = Android, waterproof = no, wirelelss = no

cout << "Welcome to the custom phone system\n";

cout << "Please choose the phone options. \n\n";

cout << "Chip (1 - 64hz || 2 - 128hz)";
cin >> choice;
if(choice == 2) totalprice +=25;

return 0;
}

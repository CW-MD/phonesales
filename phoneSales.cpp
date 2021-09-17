//Author Chad Dayton
//Purpose: this program is used to sell custom phones
//Date Created: 9/10/21


#include <iostream>
using namespace std;

int main(){

    //data vars
int chip = 32;
int campixels = 1080;
int screenres = 1080;
string dolbytype = "Dolby Digital";
int  battlife = 60;
int phonewt = 125;
bool ports = false;
string os = "Android";
bool waterproof = false;
bool wirecharge = false;
const float BASEPRICE = 826.59;

    //working vars
int choice = 0;
float totalprice = BASEPRICE;

//Base Model
//chip = 32gz, cam = 1080p, res = 1080p, audio = DD, battery = 24h
//refresh = 60hz, weight = 125, port = no, os = Android, waterproof = no, wirelelss = no

cout << "Welcome to the custom phone system\n";

cout << "Please choose the phone options. \n\n";

cout << "Chip (1 - 64hz || 2 - 128hz)";
cin >> choice;
if(choice == 2){
    chip = 128;
    totalprice +=25;
}
 cout << "Camera (1 - 1080p || 2 - 4k)";
cin >> choice;
if(choice == 2){
    campixels = 4000;
    totalprice +=200;
} cout << "Screen (1 - 1080p || 2 - 4k)";
cin >> choice;
if(choice == 2){
    screenres = 4000;
    totalprice +=200;
} cout << "Sound (1 - Dolby Digital || 2 - Dolby HD)";
cin >> choice;
if(choice == 2){
    dolbytype = "Dolby HD";
    totalprice +=50;
} cout << "Chip (1 - 64hz || 2 - 128hz)";
cin >> choice;
if(choice == 2){
    chip = 128;
    totalprice +=25;
} cout << "Battery Life (1 - 60hr || 2 - 120hr)";
cin >> choice;
if(choice == 2){
    battlife = 120;
    totalprice +=100;
} cout << "phone weight (1 - 125g || 2 - 80g)";
cin >> choice;
if(choice == 2){
    phonewt = 80;
    totalprice +=50;
} cout << "Additional Ports? (1 - No || 2 - Yes)";
cin >> choice;
if(choice == 2){
    ports = true;
    totalprice +=50;
} cout << "OS (1 - Android || 2 - IOS)";
cin >> choice;
if(choice == 2){
    os = "IOS";
    totalprice +=50;
} cout << "Waterproof? (1 - No || 2 - Yes)";
cin >> choice;
if(choice == 2){
    waterproof = true;
    totalprice +=100;
} cout << "Wireless Charging? (1 - No || 2 - Yes)";
cin >> choice;
if(choice == 2){
    wirecharge = true;
    totalprice +=100;
} 
cout <<"Your phone will cost $" << totalprice << "\n";

return 0;
}

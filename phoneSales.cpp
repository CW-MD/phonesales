//Author Chad Dayton
//Purpose: this program is used to sell custom phones
//Date Created: 9/10/21


#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    //data vars
int orderNum = 1000;
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

    //users
const int CSIZE = 3;

string fullNames[CSIZE] = {"Ya Boi Chad", "Pillsbury Doughboy", "Anotha One"};
string userNames[CSIZE] = {"Chedda@gmail.com", "Pdough@gmail.com", "An1@gmail.com"};
string userPwds[CSIZE] = {"P@ssw0rd123", "doughPass", "An0thaP@ss"};

int ci = -1;

    //Sold Phones
    const int  OSIZE = 10;
    int sales[OSIZE];
    float totals[OSIZE];
    int oi = 0;

    //working vars
int choice = 0;
float totalprice = BASEPRICE;
bool isPassValid = false;
int attempts = 0;
int numPhones;
string entPass;
float grandTotal;
char morePhones = 'x';

//Base Model
//chip = 32gz, cam = 1080p, res = 1080p, audio = DD, battery = 24h
//refresh = 60hz, weight = 125, port = no, os = Android, waterproof = no, wirelelss = no

cout << "Welcome to the custom phone system\n";

do {
    cout <<"Please enter your password:";
    getline(cin, entPass);

    for(int i = 0; i < CSIZE; i++){
        if(entPass == userPwds[i])
        {isPassValid = true;
        ci = i;
        }
    }
    
    if(!isPassValid){
        cout << "Invalid Password" <<endl;
        attempts++;
    }
    
    } while (attempts < 3 && !isPassValid);
    
        if(!isPassValid){
            cout << "Number of attempts exceeded, program terminated!\n";
            exit(0);
        }
    
    


do{
    totalprice = BASEPRICE;
cout << "Please choose the phone options. \n\n";
cout << "Chip (1 - 64hz || 2 - 128hz)";
 cin >> choice;
 switch (choice)
 {
 case 1:
     chip = 64;
     break;
 
 case 2:
    chip = 128;
    totalprice +=25;
     break;
default:
    cout << "Invalid Entry \n";
    cout << choice;
 }
 cout << "Camera (1 - 1080p || 2 - 4k)";
cin >> choice;

switch (choice)
 {
 case 1:
     campixels = 1080;
     break;
 
 case 2:
    campixels = 4000;
    totalprice +=200;
     break;
default:
    cout << "Invalid Entry \n";
    cout << choice;
 }


cout << "Screen (1 - 1080p || 2 - 4k)";
cin >> choice;

switch (choice)
 {
 case 1:
     screenres = 1080;
     break;
 
 case 2:
    screenres = 4000;
    totalprice +=200;
     break;
default:
    cout << "Invalid Entry \n";
    cout << choice;
 }

 cout << "Sound (1 - Dolby Digital || 2 - Dolby HD)";
cin >> choice;


switch (choice)
 {
 case 1:
     dolbytype = "Dolby Digital";
     break;
 
 case 2:
    dolbytype= "Dolby HD";
    totalprice +=50;
     break;
default:
    cout << "Invalid Entry \n";
    cout << choice;
 }
 cout << "Battery Life (1 - 60hr || 2 - 120hr)";
 cin >> choice;
 switch (choice)
 {
 case 1:
     battlife = 60;
     break;
 
 case 2:
    battlife = 120;
    totalprice +=100;
     break;
default:
    cout << "Invalid Entry \n";
    cout << choice;
 }
 cout << "phone weight (1 - 125g || 2 - 80g)";
cin >> choice;
switch (choice)
{
case 1:
    phonewt = 125;
    break;

case 2:
    phonewt = 80;
    totalprice += 50;

default:
    break;
}

 cout << "Additional Ports? (1 - No || 2 - Yes)";
cin >> choice;
switch (choice)
{
case 1:
    ports = false;
    break;

case 2:
    ports = true;
    totalprice += 50;

default:
    break;
}

 cout << "OS (1 - Android || 2 - IOS)";
cin >> choice;
switch (choice)
{
case 1:
    os = "Android";
    break;

case 2:
    os = "IOS";
    totalprice += 100;

default:
    break;
}
 cout << "Waterproof? (1 - No || 2 - Yes)";
cin >> choice;
switch (choice)
{
case 1:
    waterproof = false;
    break;

case 2:
    waterproof = true;
    totalprice += 50;

default:
    break;
}

cout << "Wireless Charging? (1 - No || 2 - Yes)";
cin >> choice;
switch (choice)
{
case 1:
    wirecharge = false;
    break;

case 2:
    wirecharge = true;
    totalprice += 100;

default:
    break;
}

cout << "How many phones would you like to order?:";
cin >>numPhones;
grandTotal = totalprice * numPhones;
sales[oi] = orderNum++;
totals[oi] = grandTotal;


cout <<"You selected the following options for order #: " <<(orderNum-1) <<endl;
cout << "Chip: " << chip << endl;
cout << "Camera: " << campixels << endl;
cout << "Screen Resolution: " << screenres <<endl;
cout << "Audio Type: " << dolbytype << endl;
cout << "Battery Life: " << battlife << endl;
cout << "Phone Weight: " << phonewt <<endl;
cout << "Extra Ports?: " << ports <<endl;
cout << "Operating System: " << os <<endl;
cout << "Waterproof?: " << waterproof <<endl;
cout << "Wireless Charging?: " << wirecharge <<endl;

cout <<"Your total is $" << grandTotal << " for " << numPhones << " phones" "\n";
oi++;

cout <<"Would you like to order more phones? (Y / N)" ;
cin >> morePhones;
}while(morePhones == 'Y' || morePhones == 'y');

//summary ofall orders
cout << "\n************************************************"<< endl;
cout << "Order List for " << fullNames[ci] <<endl;
for(int i =0; i < oi; i++){
    cout << "Order # "<< sales[i] << " Total: $" << totals[i]  << " for " << numPhones << " phones" <<endl;
}
cout << "Grand Total $" << setprecision(2) <<grandTotal <<endl;
cout << "\n************************************************"<< endl;
return 0;
}
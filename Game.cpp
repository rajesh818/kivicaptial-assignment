#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;

// Function that takes input from the user
string User_Choice(){   
    string S;
    cout << "Enter your Choice(Rock/Paper/Scissor) : ";
    cin >> S;
    return S;
}

// Function that decides computers choice
string Computer_Choice(){
    srand(time(0));
    int choice = (rand()%3);
    string RPS[] = {"Rock","Paper","Scissor"};
    return RPS[choice];
}

int main(){
    string user, computer;

    // Running loop infinite times
    while(true){
        user = User_Choice();  // getting users choice
        computer = Computer_Choice(); // getting computer choice

        // To handle Invalid inputs
        if(user!="Rock"&&user!="Paper"&&user!="Scissor"){ 
            cout << "Invalid Choice" << endl;
            continue;
        }

        // Deciding the Winner
        cout << "Computer Choice is " << computer << " and Your Choice is " << user << endl;

        // Handling Tie case
        if(user==computer){
            cout << "Tie" << endl;
        }
        else{
            if(user=="Rock"){
                if(computer=="Scissor"){
                    cout << "You WIN :)" << endl;
                }
                else{
                    cout << "You LOSE :(" << endl;
                }
            }
            else if(user=="Paper"){
                if(computer=="Rock"){
                    cout << "You WIN :)" << endl;
                }
                else{
                    cout << "You LOSE :(" << endl;
                }
            }
            else if(user=="Scissor"){
                if(computer=="Paper"){
                    cout << "You WIN :)" << endl;
                }
                else{
                    cout << "You LOSE :(" << endl;
                }
            }
        }
    }
}
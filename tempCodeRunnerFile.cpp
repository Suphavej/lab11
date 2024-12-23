#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
   
    srand(time(0));

cout << "Press Enter 3 times to reveal your future.";

string grade[] ={"A","B","C","D","F","W"};



for (int i = 0; i < 3; i++){
    cin.ignore();
}
string grades = grade[rand() % 9];
cout << "You will get " << grades << " in this 261102." ;

return 0;
}
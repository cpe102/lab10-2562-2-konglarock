// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 

 int main(){
    string G;
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x= rand()%9;
    if (x==0) G="A";
    else if (x==1) G="B+";
    else if (x==2) G="B";
    else if (x==3) G="C+";
    else if (x==4) G="C";
    else if (x==5) G="D+";
    else if (x==6) G="D";
    else if (x==7) G="F";
    else G="W" ; 

    cout << "You will get "<< G <<" in this 261102";

 }
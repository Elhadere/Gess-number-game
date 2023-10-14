#include <iostream>


using namespace std;

int main(){
    int gessNum;
    int tries;
    int num;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    do
    {
        cout << "Enter a guess number beween (1-100)";
        cin >> gessNum;
        tries++;
        if(gessNum > num){
            cout << "Too hight!\n";
        }
        else if(gessNum < num){
            cout << "Too low\n";
        }
        else{
            cout << "Correct! # of tries is :"<<tries;
        }
    } while (gessNum!=num);
    

}
#include <iostream>
using namespace std;
int count = 1;
void myName(){
    if(count == 4){
        return;
    }

    cout<<count<<" Saurav"<<endl;
    count++;
    myName();
}

//Print names N times
void myName(int i,int N){
    //base condition
    if (i>N)
    {
        return;
    }

    cout<<"Saurav San"<<endl;
    myName(i+1,N);
    
}

//Print from 1 to N
void printNum(int i,int N){
    //base condition
    if (i>N)
    {
        return;
    }

    cout<<i<<endl;
    printNum(i+1,N);
}

//Print from N to 1
void printrevNum(int i,int N){
    //base condition
    if (i<N)
    {
        return;
    }

    cout<<i<<endl;
    printrevNum(i-1,N);
}

//Print from 1 to N with Backtracking (no i+1 in function call)
void printNumBack(int i,int N){
    //base condition
    if (i<N)
    {
        return;
    }
    printNumBack(i-1,N);
    cout<<i<<endl;
}
//Print from N to 1 with Backtracking (no i-1 in function call)
void printrevNumBack(int i, int N){
    //base
    if(i>N){
        return;
    }
    printrevNumBack(i+1,N);
    cout<<i<<endl;
}

int main(){
    //myName(1,4);
    //printNum(1,10);
    //printrevNum(10,1);
    //printNumBack(10,1);
    printrevNumBack(1,10);
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

void printElementOfStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){
    stack<int>s;
    s.push(1);
    s.push(10);
    s.push(21);
    s.push(17);
    s.push(34);

    cout<<s.empty()<<endl;  // false or 0
    cout<<s.size()<<endl;  //how much size

    printElementOfStack(s);
}
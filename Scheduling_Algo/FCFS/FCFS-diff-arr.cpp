#include<iostream>
#include<stdlib.h>

using namespace std;

class Process{
    int id, bt, at, ct, tat, wt;

    public:

}

int main(){

    int n;
    cout<<"\nEnter the no of processes in your sytem:\n";
    cin>n;

    Process *p = new Process[n];

    Process f;
    f.input(p, n);
    f.sort(p, n);
    f.calc(p, n);
    f.show(p, n);

    return 0;
}

void Process::input(Process *p, int n){
    for
}

void Process::calc(Process *p, int n){
    int sum = 0;
    sum = sum + p[0].at;

    for(int i=0; i<n; i++){
        sum = sum + p[i].bt;
        p[i].ct = sum;
        -
    }
}
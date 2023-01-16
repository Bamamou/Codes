#include<iostream>
#include <string.h>
using namespace std;

void Param(string cell ) {
    cout<<"WHat is the battery chenistry used your battery pack?"<<endl;
    cin>>cell;

    string name[3]= { "NMC", "LFP", "NCA"}, battery(cell);
    int size=sizeof(name)/sizeof(name[0]);
    int result[size];
    int i=0;
    while (i<size)
    {
        if (battery == name[i])
        {
            cout<<name[i]<<endl;
        }
        else
        {
            cout<<"Parameters not found!";
            break;;
        }
        i++;  
        break;
    }
}

int main(){
    string cell;
    Param(cell);
}
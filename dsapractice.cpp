#include<iostream>
using namespace std;
int main(){
    int n;
    int one=0;
    int two=0;
    int three=0;
    int four=0;
    cout<<"how many entries do you want to make?"<<endl;
    cin>>n;
    int ent[n];
    cout<<"enter the book ID:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ent[i];
    }
    for(int j=0;j<n;j++)
    {
        if(ent[j]==1){
            one++; 
        }
        
        else if(ent[j]==2){
            two++;
        }
        
        else if(ent[j]==3){
            three++;
        }
        
        else if(ent[j]==4){
            four++;
        }
        
    }
    if(one>two && one>three && one>four){
        cout<<"book ID:one"<<endl;
    }
    if(two>one && two>three && two>four){
        cout<<"book ID:two"<<endl;
    }
    if(three>one && three>two && three>four){
        cout<<"book ID:three"<<endl;
    }
    if(four>one && four>two && four>three){
        cout<<"book ID:four"<<endl;
    }
}
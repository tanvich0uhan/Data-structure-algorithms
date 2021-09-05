//Code which is able to take multiple string values in an array & can store too & display in one line too 
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i,n;
    string sub[100];
    cout<<"Enter the number of subjects "<<endl;
    cin>>n;
    cout<<"Enter the names of subjects that you want to enter"<<endl;
    for(i=0;i<=n;i++){
        
        getline(cin,sub[i]);
    }
    cout<<"Displaying Subjects "<<endl;
    for(i=0;i<=n;i++)
    {
     cout<<i<<"."<<" "<<sub[i]<<endl;   
    }
    return 0;
}

OR

#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 char *sub[7]= {"Web development(PHP/JSP)","Java programming","Unix & Shell programming", "Cloud computing", "Data structures & algorithms", "Discrete structures","Data communication"};
 cout<<endl;
 cout<<"Subjects in THIRD SEMESTER"<<endl;
	       cout<<endl;
 for(int i=0;i<7;i++)
 {
 cout<<i+1<<"."<<" "<<sub[i]<<endl;

}
getch();
}

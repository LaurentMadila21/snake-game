#include <iostream>
using namespace std;

int main()
{
    cout <<"Enter the student's name : "; 
    string name;
    cin>>name; /*this part of the code is going to ask the user to enter his name */

    cout<<"Enter your marks for (CAT 1):";
    int c1;
    cin>>c1;
    cout<<"CAT 1: "<<c1<<"/100";
    cout<<"\n"; //this part is asking the user to to input th mark for cat1

    cout<<"Enter your marks for (CAT 2): ";
    int c2;
    cin>>c2;
    cout<<"CAT 2: "<<c2<<"/100";
    cout<<"\n";//this part is asking the user to to input th mark for cat2

    cout<<"Enter your marks for (EXAM): ";
    int e;
    cin>>e;
    cout<<"EXAM: "<<e<<"/100";
    cout<<"\n";//this part is asking the user to to input th mark for exam

    int tot;
    tot=((c1+c2+e)*100) /300; /*this part calculate the total marks for cat1 ,cat2 and exam and give the result in %*/

    cout <<"FNAL SCORE:"<<(double)tot<<"%"<<endl;// this part showes the result in the terminal

    if (tot<=40)
    {
        cout<<"GRADE : F \nSTATUT : FAIL";
    }

    else if(tot<50)
    {
        cout<<"GRADE : D \nSTATUT : FAIL";
    }

    else if(tot<60)
    {
        cout<<"GRADE : C \nSTATUT : PASS";
    }

    else if(tot<70)
    {
        cout<<"GRADE : B \nSTATUT : PASS";
    }

    else 
    {
        cout<<"GRADE : A \nSTATUT : PASS";
    }
    //from line 33 up to 57 are the if and if else statement that are just some condition who will be respected for
    //for example if the student has gotten 35% the condition that is written there is going to be respected line 33-36 

    return 0;
}

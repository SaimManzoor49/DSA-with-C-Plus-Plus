#include <iostream>
using namespace std;

void p1()
{
    for (int i = 1; i < 6; i++)
    {

        for (int j = 0; j < 6 - i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/////////////////////////////////////////////////
void p2()
{

    for (int i = 1; i < 6; i++)
    {

        for (int j = 1; j < 7-i; j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
}

//////////////////////////

void p3(){

int temp = true;

for (int i = 0; i < 6; i++)
{
    
    for (int j = 0; j < i ; j++)
    {
        if(temp==true){
            cout<<" 1";
        }else{
            cout<<" 0";
        }
        temp=!temp;
    }
    cout<<endl;
    

}

}


void p4(){
    
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 4; j >= i; j--)
        {
            cout<<"*";
        }
        for (int k = 4; k > i; k--)
        {
            cout<<"*";
        }
            
            cout<<endl;

    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 4; j >= i; j--)
        {
            cout<<"*";
        }
        for (int k = 4; k > i; k--)
        {
            cout<<"*";
        }
            
            cout<<endl;

    }

}


void p5(){


    for (int i = 0; i < 2; i++)
    {   
        for (int j = 3; j > 1; j--)
        {
        cout<<" ";
        }
        cout<<"*";
        cout<<" ";

    }
    cout<<endl;

    for (int i = 0; i < 4; i++)
    {   
        for (int j = 2; j > 1; j--)
        {
        cout<<" ";
        }
        cout<<"*";

    }
    
    cout<<endl;

    for (int i = 0; i < 3; i++)
    {   
        cout<<"*";
        for (int j = 4; j > 1; j--)
        {
        cout<<" ";
        }

    }
    


}


int main()
{

    p1();
    cout<<"------------"<<endl;
    p2();
    cout<<"------------"<<endl;
    p3();
    cout<<"------------"<<endl;
    p4();
    cout<<"------------"<<endl;
    p5();

    return 0;
}
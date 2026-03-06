#include<iostream>
using namespace std;
#include <cstring>
#include "stack.h"

int main(int argc, char **argv)
{
    Stack s;
    int i,j;
   
/*
  Exercise 2
  */
    printf("Checking the parentheses in argv arguments\n");

   


    for(i=1;i<argc;i++)
    {
        Stack s;
        if(strlen(argv[i])%2 ==1)
        {
            cout<<"incorrect"<<endl;
            return 0;
        }
        for(j=0;j<strlen(argv[i]);j++)
        {
            //Stack s; //Change node to char-->****
            if(argv[i][j]=='[' || argv[i][j]=='{' )
            {
                s.push(argv[i][j]);
            }
            else
            {
                if(argv[i][j]==']' || argv[i][j]=='}' ) 
                {
                    char x=s.pop();
                    //cout<<"testing "<<argv[i][j]<<endl;
                    if ((argv[i][j] == ']' && x == '{') ||(argv[i][j] == '}' && x == '[') )
                    {
                        cout<<"incorrect"<<endl;
                        return 0;
                    }
                }
            }
        }
    
    
        char t = s.pop();
       
        if (t != NULL)
        {
            cout<<"incorrect"<<endl;
            return 0;
        }
    }
    cout<<"correct"<<endl;
    return 0;
}

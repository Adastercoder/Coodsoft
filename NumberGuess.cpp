#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int guess;
    srand((unsigned int) time(NULL));
    int number= (rand()%10+1);
    
    
    cout<<"Guess The Number"<<"\n";
    cout<<"We have selected a random number between 1-10. See if you can guess it."<<"\n";
    do
    {   cout<<"enter your guess";
        cin>>guess;

        if(guess>number){
          cout<<"number is too low "<<"\n";
        }
        else if (guess<number)
        {
            cout<<"number is too high"<<"\n";
        }
        else{
            cout<<"you guess the correct number";
        }
        
    } while (guess!=number);
    
    
    return 0;

}

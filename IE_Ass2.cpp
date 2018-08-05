
  
#include<iostream>

int main()    
{
    using namespace std;    
    int num,factorial=1;
	
    cout<<"Enter a number to calculate it's factorial"<<endl;  
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
    cout<<"Factorial of "<<num<<"="<<factorial<<endl;
    cin.get();
 
    return 0;
}

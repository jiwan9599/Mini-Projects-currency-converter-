#include<iostream>
using namespace std;
int main()
{      //Declaration of varibles
       int Rupees;
       float J,I,S,M;
       //input indian rupees
       cout<<"Enter currency in Indian Rupees"<<endl;
       cin>>Rupees;
       //Calculations
       J=Rupees*1.52;
       I=Rupees*1.73;
       S=Rupees*3.32;
       M=Rupees*23.12;
       cout<<Rupees<<" Indian Rupees are equal to "<<J<<" Japanese Yen"<<endl;
       cout<<Rupees<<" Indian Rupees are equal to "<<I<<" Icelandic Krona"<<endl;
       cout<<Rupees<<" Indian Rupees are equal to "<<S<<" Srilanka Rupee"<<endl;
       cout<<Rupees<<" Indian Rupees are equal to "<<M<<" Myanmar Kyat"<<endl;

       system("pause");
}

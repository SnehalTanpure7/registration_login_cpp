#include<iostream>
#include<string>
using namespace std;
string username;
string password;
void registration()
{
    
    std::cout<<"-------Registration--------!"<<endl;

    cout<<"Tap Here for Registration:"<<endl;
    std::cout<<"Enter the username:"<<endl;
    std::cin>>username;
    std::cout<<"Enter the password:"<<endl;
    std::cin>>password;
    
    
    std::cout<<"Registration done successfully👍!"<<endl;
}
void enroll()
{
    int ch;
    do{
        cout<<"Select Your Choice for Enroll this!!(login or signin)"<<endl;
        cout<<"1.Sign in"<<endl;
        cout<<"2.Login"<<endl;
        cout<<"3.Exit:"<<endl;
        cout<<"Enter the choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {

            string userid,pass;
            cout<<"-------signin-------"<<endl;
            cout<<"Tap Here for Sign in"<<endl;
            cout<<"Enter the userid:"<<endl;
            cin>>userid;
            cout<<"Enter the password"<<endl;
            cin>>pass;
            
            

            if(userid==username&&password==pass)
            {
                cout<<"Sign in Successfully..!👍:"<<endl;
            }
            else{
                cout<<"Sign in Unsuccessfully.!❌:"<<endl;
            }
        } 
        break;
            case 2:
            {
            string lusername,lpassword;
            cout<<"-------Login-------"<<endl;
            cout<<"Tap Here for Login!"<<endl;
             cout<<"Enter the username:"<<endl;
            cin>>lusername;
            cout<<"Enter the password:"<<endl;
            cin>>lpassword;
            
            if(username==lusername&&password==lpassword)
              {
                 cout<<"Login Successfully.!😎";
               }
            else{
                 cout<<"Login failed! Your password and username is incorrect❌";
                }
            }
                break;
            case 3:
            exit(0);
            default :
            cout<<"fail:";
        }
    }while(ch==1);

}
int main()
{
    int choice;
    do
    {
        cout<<"Enter Your choice"<<endl;
        cout<<"1.Registration"<<endl;
        cout<<"2.Enroll"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            registration();
            break;
            case 2:
            enroll();
            break;
            case 3:
            exit(0);
            break;
            default:
            cout<<"error occur !so sorry ,registration fail!"<<endl;
        }
    }while(choice==1);
}









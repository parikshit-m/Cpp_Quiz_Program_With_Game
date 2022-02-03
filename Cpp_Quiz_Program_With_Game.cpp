#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
void test();
void login();
void game();

int main()
{   system("color 0a");
    login();
    
    return 0;
}

void login ()
{
    string userName;
    string userPassword;
    int loginAttempt = 0;

    while (loginAttempt < 3)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;

        if (userName == "gktest" && userPassword == "gktest")
        {   system("cls");
            cout << "Welcome \n";
            cout << "Now you can start the test!\n";
            
            test();
            break;
        }
        
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            
            loginAttempt++;
        }
    }
    if (loginAttempt == 3)
    {
            cout << "Too many login attempts! The program will now terminate.";
           
    }

    
}
void test()
{   int r1,r2,r3,r4,r5,ans1, score1=0, ans2, score2=0, score3=0,ans3,score4=0,ans4,score5=0,ans5;
    int con_key;
    cout<<"Your test begins here\n\n"<<endl;
    srand(time(0));
    r1=rand()%3+1;
    r2=rand()%3+1;
    r3=rand()%3+1;
    r4=rand()%3+1;
    r5=rand()%3+1;
    
    //Level 1 que.
   
    switch(r1){
        case 1:
            cout<<"which symbol is used for destructor\n1.*    2./   3.@   4.~"<<endl;
            break;
        case 2:
            cout<<"What is the average of first five multiples of 12?"<<endl;
            break;
        case 3:
            cout<<"If DOOR=25 LOWER=37 TOWER=18 then OVER =??\n1.60   2.06 3.50  4.05"<<endl;
            break;
    }
    cin>>ans1;
    switch(r1){
        case 1:
            if(ans1==4)
                {cout<<"right"<<endl;
                    score1=score1+5;
                }
            else
                cout<<"wrong ans.\n correct ans is 4."<<endl;
            break;
        case 2:
            if(ans1==36)
                {cout<<"right"<<endl;
                     score1=score1+5;
                }
            else
                cout<<"wrong ans.\n correct ans is 36."<<endl;
            
            break;
        case 3:
            if(ans1==2)
                {cout<<"right"<<endl;
                     score1=score1+5;
                }
            else
                cout<<"wrong ans.\n correct ans is 2."<<endl;
            break;
    }
    cout<<"score obtained from this que\n "<<score1<<endl;
    
    
    //Level 2 que.
    
    switch(r2){
        case 1:
            cout<<" \n\n\nwhich of the following is not  user defined data type\n1.structure  2.enum 3.union 4.char"<<endl;
            break;
        case 2:
            cout<<"\n\n\nwhat is the relation berween gauss and tesla?\n  1. 1 gauss=10^-6 tesla  2. 1 gauss=10^+4 tesla  3. 1 gauss=10^-4 tesla"<<endl;
            break;
        case 3:
            cout<<"\n\n\nComplete the series 2, 5, 9, 19, 37......."<<endl;
            break;
    }
    cin>>ans2;
    switch(r2){
        case 1:
            if(ans2==4)
                {cout<<"right"<<endl;
                    score2=score2+15;
                }
            else
                cout<<"wrong ans.\n correct ans is 4."<<endl;
            break;
        case 2:
            if(ans2==3)
                {cout<<"right"<<endl;
                     score2=score2+15;
                }
            else
                cout<<"wrong ans.\n correct ans is 3."<<endl;
            
            break;
        case 3:
            if(ans2==75)
                {cout<<"right"<<endl;
                     score2=score2+15;
                }
            else
                cout<<"wrong ans.\n correct ans is 75."<<endl;
            break;
    }
    
    cout<<"score obtained from this que\n "<<score2<<endl;
    
    //Level 3 que.
    
    switch(r3){
        case 1:
            cout<<"\n\n\non which law KCL is based?\n 1.conservation of charge 2. conservation of energy  3. conservation of momentum"<<endl;
            break;
        case 2:
            cout<<"\n\n\n For singular linear transformation.....\n1.|A|=0  2.|A|=1 3.|A|=3 "<<endl;
            break;
        case 3:
            cout<<"\n\n\nA: B: C is in the ratio of 3: 2: 5. How much money will C get out of Rs 1260?"<<endl;
            break;
    }
    cin>>ans3;
    switch(r3){
        case 1:
            if(ans3==1)
                {cout<<"right"<<endl;
                    score3=score3+7;
                }
            else
                cout<<"wrong ans.\n correct ans is 1."<<endl;
            break;
        case 2:
            if(ans3==1)
                {cout<<"right"<<endl;
                     score3=score3+7;
                }
            else
                cout<<"wrong ans.\n correct ans is 1."<<endl;
            
            break;
        case 3:
            if(ans3==630)
                {cout<<"right"<<endl;
                     score3=score3+7;
                }
            else
                cout<<"wrong ans.\n correct ans is 630."<<endl;
            break;
    }
    
    cout<<"score obtained from this que \n"<<score3<<endl;
    
    
    
    
    //Level 4 que.
    
    switch(r4){
        case 1:
            cout<<"\n\n\nR1=10,R2=5 are connected in parallel then equivalent resistance of circuit? \n1.11/3   2. 3/10   3. 10/3"<<endl;
            break;
        case 2:
            cout<<"\n\n\n for earthing wire ..... colour code is used\n1. green  2. black 3. brown"<<endl;
            break;
        case 3:
            cout<<"\n\n\nWhich are the feature of OOPs\n 1.Classes and objects  2. inheritance   3.polymorphism   4. all of the above"<<endl;
            break;
    }
    cin>>ans4;
    switch(r4){
        case 1:
            if(ans4==3)
                {cout<<"right"<<endl;
                    score4=score4+8;
                }
            else
                cout<<"wrong ans.\n correct ans is 3."<<endl;
            break;
        case 2:
            if(ans4==1)
                {cout<<"right"<<endl;
                     score4=score4+8;
                }
            else
                cout<<"wrong ans.\n correct ans is 1."<<endl;
            
            break;
        case 3:
            if(ans4==4)
                {cout<<"right"<<endl;
                     score4=score4+8;
                }
            else
                cout<<"wrong ans.\n correct ans is 4."<<endl;
            break;
    }
    
    cout<<"score obtained from this que \n"<<score4<<endl;
    
    

    //Level 5 que.
   
    switch(r5){
        case 1:
            cout<<"\n\n\nWhich of the followin is not keyword in c++\n 1.sizeofstatic 2.enum  3. volatile"<<endl;
            break;
        case 2:
            cout<<"\n\n\nwhat is the form of supply and output voltage to transformer?\n 1)AC AC 2)DC DC 3)AC DC  4)DC AC"<<endl;
            break;
        case 3:
            cout<<"\n\n\nif eigen  value of symmetric matrix 2, 3, -4 then  index of matrix is...\n1.1     2.2    3. -1 "<<endl;
            break;
    }
    cin>>ans5;
    switch(r5){
        case 1:
            if(ans5==1)
                {cout<<"right"<<endl;
                    score5=score5+15;
                }
            else
                cout<<"wrong ans.\n correct ans is 1."<<endl;
            break;
        case 2:
            if(ans5==1)
                {cout<<"right"<<endl;
                     score5=score5+15;
                }
            else
                cout<<"wrong ans.\n correct ans is 1."<<endl;
            
            break;
        case 3:
            if(ans5==2)
                {cout<<"right"<<endl;
                     score5=score5+15;
                }
            else
                cout<<"wrong ans.\n correct ans is 2."<<endl;
            break;
    }
    
    cout<<"score obtained from this que \n"<<score5<<endl;
    system("cls");
    
    cout<<"\n\nyour test is ended\nyour total score \n\n\n "<<score1+score2+score3+score4+score5;
    
    cout<<"\n\nenter any key to continue\n";
    cin>>con_key;
    if(score1+score2+score3+score4+score5==50){
        game();
    }

    int end_key;
    cout<<"\n\nenter any key to end program\n";
    cin>>end_key;
    
}





void game(){
    int number, guess, nguesses=1;
    system("cls");
    cout<<"Congragulation!!!!\nYou have scored full marks and as a reward you are eligible to play a game\n";
    cout<<"So the game is--\nComputer have choosen a random number between 1 to 10\n"
        <<"Now you have to guess that number in minimum number of guesses\n";
    
    srand(time(0));
    number = rand()%10 + 1; // Generates a random number between 1 and 10
    
    // Keep running the loop until the number is guessed
    do{
        cout<<"Guess the number between 1 to 10\n";
        cin>>guess;
        if(guess>number){
            cout<<"Lower number please!\n";
        }
        else if(guess<number){
            cout<<"Higher number please!\n";
        }
        else{
            cout<<"You guessed it in %d attempts\n"<<nguesses;
        }
        nguesses++;
    }while(guess!=number);
    
    
}


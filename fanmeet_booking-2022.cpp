#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
using namespace std;

class Fanmeet {
    public :
        char answer = 'Y';
        string name,email,password,tt;
        int i,j,many_Ticket,amount,change_money,change;
        int price_A = 3000 ,price_B = 2500 ,price_C = 2000 ,price_D = 1700 , price_E = 1500;
    public :
        void show_Profile();
        void show_Booking();
};

void Fanmeet :: show_Profile() {
    cout << "\t\tName : ";
    cin >> name;
    cout << "\t\tEmail : ";
    cin >> email;
    cout << "\t\tPassword : ";
    cin >> password;
    cout << endl << "\t\t====== Logged in successfully  ======" << endl ; 
};

void Fanmeet :: show_Booking() {
    while (answer =='y' or  answer =='Y') {
        cout << endl <<"\t\t-*-*-*-* FANMEET DAY *-*-*-*-" << endl << endl ;
        cout << "\t\t[      Janurary 21, 2023      ]" << endl ;
        cout << "\t\t============ STAGE ============" << endl;
        cout << "\t\t===============================" << endl;
        
        string A[5][10] = {
            {"\t\tA1","A2","A3","A4","A5","A6","A7","A8","A9","A10"},
            {"\t\tB1","B2","B3","B4","B5","B6","B7","B8","B9","B10"},
            {"\t\tC1","C2","C3","C4","C5","C6","C7","C8","C9","C10"},
            {"\t\tD1","D2","D3","D4","D5","D6","D7","D8","D9","D10"},
            {"\t\tE1","E2","E3","E4","E5","D6","E7","E8","E9","D10"}
            };
            for(int i = 0; i < 5; ++i) {
                for(int j = 0 ; j < 10; ++j) {
                    cout << A[i][j] << " "; }
                cout << endl; }
        
            cout << endl << "\t\tPrice [A1-A10]  = 3000 Baht" << endl;
            cout << "\t\tPrice [B1-B10]  = 2500 Baht" << endl;
            cout << "\t\tPrice [C1-C10]  = 2000 Baht" << endl;
            cout << "\t\tPrice [D1-D10]  = 1700 Baht" << endl;
            cout << "\t\tPrice [E1-E10]  = 1500 Baht" << endl << endl;
            cout << "\t\tHow many Ticket : ";   
            cin >> many_Ticket;
            
            for(int i = 1; i<= many_Ticket;i++) {
                cout << "\t\tBook a Ticket : ";
                cin >> tt;
                if (tt == "A1" or tt == "A2" or tt == "A3" or tt == "A4" or tt == "A5" or tt == "A6" or tt == "A7" or tt == "A8" or tt == "A9" or tt == "A10" ) {
                    amount += price_A; 
                }
                else if (tt == "B1" or tt == "B2" or tt == "B3" or tt == "B4" or tt == "B5" or tt == "B6" or tt == "B7" or tt == "B8" or tt == "B9" or tt == "B10" ) {
                    amount += price_B;
                }
                else if (tt == "C1" or tt == "C2" or tt == "C3" or tt == "C4" or tt == "C5" or tt == "C6" or tt == "C7" or tt == "C8" or tt == "C9" or tt == "C10" ) {
                    amount += price_C;
                }
                else if (tt == "D1" or tt == "D2" or tt == "D3" or tt == "D4" or tt == "D5" or tt == "D6" or tt == "D7" or tt == "D8" or tt == "D9" or tt == "D10" ) {
                    amount += price_D;
                }
                else if (tt == "E1" or tt == "E2" or tt == "E3" or tt == "E4" or tt == "E5" or tt == "E6" or tt == "E7" or tt == "E8" or tt == "E9" or tt == "E10" ) {
                    amount += price_E ;
                }
            }
            cout << "\t\tTotal for Ticket : "<< amount << endl ;
    cout << "\t\tYou Want Buy again ? [ yes = y or no = n ] : ";
    cin >> answer ;
    }
    cout << endl <<"\t\tTotal Ticket = " << amount << endl ;
    while(amount > 0 ) {
        cout << "\t\tPlease enter the amount : " ;
        cin >> change_money ;
        if (change_money < amount) {
            cout << "\t\tMoney not enought. Please Enter again "<< endl; }
        else if (change_money >= amount) {
            change = change_money - amount ; 
            break; }
    }
    cout << "\t\tchange Money for Ticket = " << change << " Baht" << endl;
};

class Souvenirs {
    public :
    float amount,t_shirtoversizeB = 690,t_shirtoversizeW = 690 ,t_sweater = 990, cap = 550;
    int number;
    
    Souvenirs(float show_amount){
        amount = show_amount ;
    }
    
    Souvenirs(float show_amount,int num) {
        amount = show_amount ;
        number = num ;
    }
    
    Souvenirs(float show_amount,int num, float show_TshirtB){
        amount = show_amount ;
        number = num ;
        t_shirtoversizeB = show_TshirtB;
    }
    
    Souvenirs(float show_amount,int num, float show_TshirtB, float show_Cap){
        amount = show_amount ;
        number = num ;
        t_shirtoversizeB = show_TshirtB;
        cap = show_Cap;
    }
    
    void Show_total() {
        int num,many,change_money,change;
        float amount,t_shirtoversizeB = 690,t_shirtoversizeW = 690 ,t_sweater = 990,cap = 550;
        char answer = 'Y';
        while (answer =='y' or  answer =='Y') {
            cout << endl << "\t\t[1] T-shirt Oversize(Black) 690 Baht" << endl;
            cout << "\t\t[2] T-shirt Oversize(White) 690 Baht" << endl;
            cout << "\t\t[3] Sweater FM collection   990 Baht" << endl;
            cout << "\t\t[4] Cap User collection     550 Baht" << endl;
            cout << "\t\t[5] Exit " << endl << endl;
            cout << "\t\tSelect Number : " ;
            cin >> num ;
            switch(num) {
                case 1:
                cout  << "\t\tHow many : ";
                cin >> many ;
                t_shirtoversizeB *= many; 
                amount += t_shirtoversizeB;
                break;
                
                case 2: 
                cout  << "\t\tHow many : ";
                cin >> many ;
                t_shirtoversizeW *= many;
                amount += t_shirtoversizeW;
                break;
            
                case 3 :
                cout  << "\t\tHow many : ";
                cin >> many ;
                t_sweater *= many;
                amount += t_sweater;
                break;
                
                case 4 :
                cout  << "\t\tHow many : ";
                cin >> many ;
                cap *= many;
                amount += cap;
                break;
                
                case 5 :
                if (num == 5);
                exit(1);
            }
            cout << "\t\tTotal  =  " << amount << endl <<endl ;
        cout << "\t\tYou Want Buy again ? [ yes = y or no = n ] : ";
        cin >> answer ;
        }
        cout << endl << "\t\tTotal Souvenirs =  " << amount << endl ;
        while(amount > 0 ) {
            cout << "\t\tPlease enter the amount : " ;
            cin >> change_money ;
            if (change_money < amount) {
                cout << "Money not enought. Please Enter again "<< endl;}
            else if (change_money >= amount) {
                change = change_money - amount ; 
                break; }
    }
    cout << "\t\tchange Money for Souvenirs = " << change << " Baht" << endl;
    };
};
    
class Proxie {
    public :
    string name;
    void show_name(){
        cout <<"\t\tName 'USER' : ";
        cin >> name ;
    };
};

class Gun : public Proxie {
    public:
    string text ;
    void showGun() {
        Proxie::show_name();
        ifstream f;
        f.open("gun.txt");
        string line;
        while(getline(f,line)) {
            cout << line << endl;
        }
    f.close(); 
    };
};

class Kim : public Proxie {
    public:
    string text ;
    void showKim() {
        Proxie::show_name();
        ifstream f;
        f.open("kim.txt");
        string line;
        while(getline(f,line)) {
            cout << line << endl;
        }
    f.close();
};
};

class CK : public Proxie {
    public:
    string text ;
    void showCk() {
        Proxie::show_name();
        ifstream f;
        f.open("ck.txt");
        string line;
        while(getline(f,line)) {
            cout << line << endl;
        }
    f.close();
};
};

class Gorn : public Proxie {
    public:
    string text ;
    void showGorn() {
        Proxie::show_name();
        ifstream f;
        f.open("gorn.txt");
        string line;
        while(getline(f,line)) {
            cout << line << endl;
        }
    f.close();
};
};

class Onglee : public Proxie {
    public:
    string text ;
    void showOnglee() {
        Proxie::show_name();
        ifstream f;
        f.open("ol.txt");
        string line;
        while(getline(f, line)) {
            cout << line << endl;
        }
    f.close();
};
};

class Victor : public Proxie {
    public:
    string text ;
    void showVictor() {
        Proxie::show_name();
        ifstream f;
        f.open("vt.txt");
        string line;
        while(getline(f, line)) {
            cout << line << endl;
        }
    f.close();
};
};


int main() {
    int answer,num;
    char back_menu;
    float show_amount,show_TshirtB,show_Cap;
    
    Fanmeet p1;
    Souvenirs s1(show_amount);
    Souvenirs s2(show_amount,num);
    Souvenirs s3(show_amount,num,show_TshirtB);
    Souvenirs s4(show_amount,num,show_TshirtB,show_Cap);
    
    Gun g1;
    Kim k1;
    CK c1;
    Gorn g2;
    Onglee o1;
    Victor v1;
    
    do {
        cout << endl << "\t\t\t\t===== WELCOME TO FANMEET 'PROXIE' =====\t\t\t\t" << endl << endl;
        cout << "\t\t\t\t\t MENU " << endl;
        cout << "\t\t\t\t\t\t[1]  Login " << endl;
        cout << "\t\t\t\t\t\t[2]  Book a Ticket " << endl;
        cout << "\t\t\t\t\t\t[3]  Buy Souvenirs " << endl;
        cout << "\t\t\t\t\t\t[4]  L O V E 'PROXIE'" << endl ;
        cout << "\t\t\t\t\t\t[5]  Exit" << endl<<endl;
        cout << "\t\t\t\t\tSelect An Option 1|2|3|4|5 : ";
        cin >> answer;
        switch(answer) {
            case 1:
            cout << endl << "\t\t\tLOGIN " << endl << endl;
            p1.show_Profile();
            break;
            
            case 2:
            cout << endl << "\t\t\tBook a Ticket " << endl ;
            p1.show_Booking();
            break;
            
            case 3:
            cout << endl << "\t\t\tBuy Souvenirs" << endl ;
            s4.Show_total();
            break;
            
            case 4 :
            cout << endl << "\t\t\tL O V E 'PROXIE'" << endl ;
            int select;
            char ans;
            do {
                cout <<"\t\t[1] Gunn" << endl;
                cout <<"\t\t[2] KIMJi" << endl;
                cout <<"\t\t[3] CK" << endl;
                cout <<"\t\t[4] Gboy" << endl;
                cout <<"\t\t[5] H_eN4y" << endl;
                cout <<"\t\t[6] Victor" << endl;
                cout <<"\t\tSelect my love : ";
                cin >> select;
                switch(select)
                {
                    case 1 : 
                        g1.showGun();
                        break;
                    case 2 : 
                        k1.showKim();
                        break;
                    case 3 : 
                        c1.showCk();
                        break;
                    case 4 : 
                        g2.showGorn();
                        break;
                    case 5 : 
                        o1.showOnglee();
                        break;
                    case 6 : 
                        v1.showVictor();
                        break;
                }
                cout << endl << "\t\tBack to select [ yes = y or no = n ] : ";
                cin >> ans ;
            }
            while(ans =='y' || ans =='Y') ;
            break;
            
            case 5:
                if (answer == 5) {
                    
                    exit(1);
                }
            default:
                cout <<"\t\tThis is not exsit so try again!" << endl;
        }
        cout << endl <<"\t\tBack to Menu [ yes = y or no = n ] : ";
        cin >> back_menu ;
        
        if(back_menu =='n' || back_menu =='N') {
        }
    }
    while(back_menu =='y' || back_menu =='Y') ;
}
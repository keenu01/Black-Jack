// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib> 
#include<vector>
#include<time.h>
using namespace std;
int main() {
    cout << R"(
 888888ba  dP         .d888888   a88888b. dP     dP           dP  .d888888   a88888b. dP     dP 
 88    `8b 88        d8'    88  d8'   `88 88   .d8'           88 d8'    88  d8'   `88 88   .d8' 
a88aaaa8P' 88        88aaaaa88a 88        88aaa8P'            88 88aaaaa88a 88        88aaa8P'  
 88   `8b. 88        88     88  88        88   `8b.           88 88     88  88        88   `8b. 
 88    .88 88        88     88  Y8.   .88 88     88    88.  .d8P 88     88  Y8.   .88 88     88 
 88888888P 88888888P 88     88   Y88888P' dP     dP     `Y8888'  88     88   Y88888P' dP     dP 
                                                                                                
                                                                                                
)" << endl;
    srand(time(0));
    int nc = 0;
    int nc2 = 0;
    char ans;
    vector<int> card = { 20,1,2,3,4,5,6,7,8,9,10,11,12,13 };
    vector<int> aicard;
    int N = 13;
    int t = 35;
    for (int i = 0; i < 32; i++)
    {
        aicard.push_back(i);
    }
    for (int i = 0; i < 10; i++) {
        nc = card[rand() % N];

    }

    cout << "Current Card is: " << nc << endl;
    cout << "Woud you like to Draw or Keep?(D/K)" << endl;
    cin >> ans;
    if (ans == 'D')
    {
        nc2 = card[rand() % N];
        switch (nc2) {

        case 20:
            cout << "You have Drawn an ACE!!" << endl;
            break;
        case 11:
            cout << "You have Drawn a JESTER!!" << endl;
            break;
        case 12:
            cout << "You have Drawn a QUEEN" << endl;
            break;

        case 13:
            cout << "You have just Drawn a KING!" << endl;
            break;
        default:
            cout << "You just drawn: " << nc2 << endl;
            break;
        }
    }

    int ai = aicard[rand() % t];
    if (ai < 0) {
        ai += card[rand() % N];
    }
    else if (ai < 10) {
        ai += card[rand() % N];
    }

    int anx = nc + nc2;
    if (anx <= 20 && anx > ai)
    {
        cout << "You Win!" << endl;
        cout << "Your Card Total was " << anx << endl;
        cout << "Dealer's Card Total  Was " << ai << endl;
    }

    else if (anx == ai) {
        cout << "Draw..";
    }
    else if (ai <= 20 && ai > anx)
    {
        cout << "Dealer Wins.." << endl;
        cout << "Your Card Total was " << anx << endl;
        cout << "Dealer's Card Was " << ai << endl;
    }





    return 0;
}

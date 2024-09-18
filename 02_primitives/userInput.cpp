#include <iostream>
#include <string>
using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    cout <<"What would you like to order \n"<<endl;
    getline(cin, userTea);

    //ask for quantity
    cout << "How many cups"<< userTea <<" Would you like to have\n" <<endl;
    cin>>teaQuantity;
    cout <<teaQuantity;
    cout << userTea;
    return 0;
}
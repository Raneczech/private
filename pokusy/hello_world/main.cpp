//by Raneczech

#include <iostream>
using namespace std;

int print(const char* text);
int println(const char* text);
const char* input(const char* prompt);

int main(void) {
    while(1){
        string pred_hello = input("Co ma byt pred world / svete? ");
        print(pred_hello.c_str());
        if(pred_hello == "ahoj") {
            println(" svete!");
        }
        else if(pred_hello == "hello"){
            println(" world!");
        }else{
            cout << endl << "I dont understand you." << endl;
        }
    }
    return 0;
}

int print(const char* text) {
    cout << text;
    return 0;
}

int println(const char* text) {
    cout << text << endl;
    return 0;
}

const char* input(const char* prompt) {
    static string line; // uchovává poslední vstup
    cout << prompt;
    getline(cin, line);
    return line.c_str(); // vrací ukazatel na data uvnitř `line`
}

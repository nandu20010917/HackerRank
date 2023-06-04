#include <bits/stdc++.h>

using namespace std;

string dayOfProgrammer(int year) {
    if(year<1918){
        if(year%4==0) {
            string date = "12.09." + to_string(year);
            return date;
        }
        else{
            string date = "13.09." + to_string(year);
            return date;
        }
    }
    else if(year==1918){
        string date = "26.09." + to_string(year);
        return date;
    }
    else {
        if (year % 400 == 0) {
            string date = "12.09." + to_string(year);
            return date;
        } else if (year % 4 == 0 and year % 100 != 0) {
            string date = "12.09." + to_string(year);
            return date;
        } else {
            string date = "13.09." + to_string(year);
            return date;
        }
    }
}

int main() {
    string x = dayOfProgrammer(1918);
    cout<<x;
    return 0;
}

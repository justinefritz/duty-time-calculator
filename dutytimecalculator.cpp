#include <iostream>
using namespace std;

void morning();
void afternoon();
void duty();
void totalhours();

int main() {
    int choice;
    cout << "PLEASE SELECT THE FOLLWING\n\n";
    cout << "1. MORNING DUTY CALCULATOR\n";
    cout << "2. AFTERNOON DUTY CALCULATOR\n";
    cout << "3. WHOLE DAY DUTY CALCULATOR\n";
    cout << "4. TOTAL HOURS CALCULATOR\n";
    cout << " : ";
    cin >> choice;
    if (choice == 1){
        morning();
    }
        else if (choice == 2){
            afternoon();
        }
        else if (choice == 3){
            duty();
        }
        else if ( choice == 4){
            totalhours();
        }
        else{
            main();
        }
}
void morning(){
    int h, m, h2, m2, totalin, totalh, totalout, mins, hours;
    cout << "MORNING TIME CALCULATOR\n" ;
    cout << "TIME IN HOURS : ";
    cin >> h;
    cout << "TIME IN MINS : ";
    cin >> m;
    if (m >= 60){
        afternoon();
    }
    cout << "TIME OUT HOURS : ";
    cin >> h2;
    cout << "TIME OUT MINS : ";
    cin >> m2;
    if (m2 >= 60){
        afternoon();
    }
    totalin = (h * 60) + m;
    totalout = (h2 * 60) + m2;
    totalh = totalout - totalin;
    hours = totalh / 60;
    mins = (totalh %60);
    cout << hours << " hours and " << mins << " mins";
}
void afternoon(){
    int h, m, h2, m2, totalin, totalh, totalout, mins, hours;
    cout << "MORNING TIME CALCULATOR\n" ;
    cout << "TIME IN HOURS : ";
    cin >> h;
    cout << "TIME IN MINS : ";
    cin >> m;
    if (m >= 60){
        afternoon();
    }
    cout << "TIME OUT HOURS : ";
    cin >> h2;
    cout << "TIME OUT MINS : ";
    cin >> m2;
    if (m2 >= 60){
        afternoon();
    }
    totalin = (h * 60) + m;
    totalout = (h2 * 60) + m2;
    totalh = totalout - totalin;
    hours = totalh / 60;
    mins = (totalh %60);
    cout << hours << " hours and " << mins << " mins";
}
void duty(){
    int h, m, h2, m2, totalin, totalh, totalout, mins, hours, total, totalhours, totalmins;
    cout << "WHOLE DAY DUTY CALCULATOR\n ";
    cout << "MORNING TIME\n" ;
    cout << "TIME IN HOURS : ";
    cin >> h;
    cout << "TIME IN MINS : ";
    cin >> m;
    if (m >= 60){
        duty();
    }
    cout << "TIME OUT HOURS : ";
    cin >> h2;
    cout << "TIME OUT MINS : ";
    cin >> m2;
    if (m2 >= 60){
        duty();
    }
    totalin = (h * 60) + m;
    totalout = (h2 * 60) + m2;
    totalh = totalout - totalin;

    int ph, pm, ph2, pm2, ptotalin, ptotalh1, ptotalout, pmins, phours;
    cout << "AFTERNOON TIME\n" ;
    cout << "TIME IN HOURS : ";
    cin >> ph;
    cout << "TIME IN MINS : ";
    cin >> pm;
    if (pm >= 60){
        duty();
    }
    cout << "TIME OUT HOURS : ";
    cin >> ph2;
    cout << "TIME OUT MINS : ";
    cin >> pm2;
    if (pm2 >= 60){
        duty();
    }
    ptotalin = (ph * 60) + pm;
    ptotalout = (ph2 * 60) + pm2;
    ptotalh1 = ptotalout - ptotalin;

    total = totalh + ptotalh1;
    totalhours = total / 60;
    totalmins = (total%60);
    cout << totalhours << " hours " << totalmins << " mins";
}
void totalhours(){
    int n, h, m, i, total, hours, mins;
    cout << "TOTAL HOURS CALCULATOR\n";
    cout << "TOTAL DAYS OF DUTY : ";
    cin >> n;
    for (int x = 1; x <= n; x++){
        cout << "HOURS : ";
        cin >> h;
        cout << "MINS : ";
        cin >> m;
            if (m >= 60){
            totalhours();
    }
        i = (h * 60) + m;
        total = total + i;
    }
    hours = total / 60;
    mins = (total%60);
    cout << hours << " hours and " << mins <<" mins";
}
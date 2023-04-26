#include <stdio.h>
#include <stdlib.h>

void morning();
void afternoon();
void duty();
void totalhours();

int main() {
    int choice;
    printf("PLEASE SELECT THE FOLLWING\n\n");
    printf("1. MORNING DUTY CALCULATOR\n");
    printf("2. AFTERNOON DUTY CALCULATOR\n");
    printf("3. WHOLE DAY DUTY CALCULATOR\n");
    printf("4. TOTAL HOURS CALCULATOR\n");
    printf(" : ");
    scanf("%d", &choice);
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
    printf("MORNING TIME CALCULATOR\n" );
    printf("TIME IN HOURS : ");
    scanf("%d", &h);
    printf("TIME IN MINS : ");
    scanf("%d", &m);
    if (m >= 60){
        afternoon();
    }
    printf("TIME OUT HOURS : ");
    scanf("%d", &h2);
    printf("TIME OUT MINS : ");
    scanf("%d", &m2);
    if (m2 >= 60){
        afternoon();
    }
    totalin = (h * 60) + m;
    totalout = (h2 * 60) + m2;
    totalh = totalout - totalin;
    hours = totalh / 60;
    mins = (totalh%60);
    printf("%d hours and %d mins", hours, mins );
}
void afternoon(){
    int h, m, h2, m2, totalin, totalh1, totalout, mins, hours;
    printf("AFTERNOON TIME CALCULATOR\n" );
    printf("TIME IN HOURS : ");
    scanf("%d", &h);
    printf("TIME IN MINS : ");
    scanf("%d", &m);
    if (m >= 60){
        afternoon();
    }
    printf("TIME OUT HOURS : ");
    scanf("%d", &h2);
    printf("TIME OUT MINS : ");
    scanf("%d", &m2);
    if (m2 >= 60){
        afternoon();
    }
    totalin = (h * 60) + m;
    totalout = (h2 * 60) + m2;
    totalh1 = totalin - totalout;
    hours = totalh1 / 60;
    mins = (totalh1%60);
    printf("%d hours and %d mins", hours, mins );
}
void duty(){
    int h, m, h2, m2, totalin, totalh, totalout, mins, hours, total, totalhours, totalmins;
    printf("WHOLE DAY DUTY CALCULATOR\n ");
    printf("MORNING TIME\n" );
    printf("TIME IN HOURS : ");
    scanf("%d", &h);
    printf("TIME IN MINS : ");
    scanf("%d", &m);
    if (m >= 60){
        duty();
    }
    printf("TIME OUT HOURS : ");
    scanf("%d", &h2);
    printf("TIME OUT MINS : ");
    scanf("%d", &m2);
    if (m2 >= 60){
        duty();
    }
    totalin = (h * 60) + m;
    totalout = (h2 * 60) + m2;
    totalh = totalout - totalin;

    int ph, pm, ph2, pm2, ptotalin, ptotalh1, ptotalout, pmins, phours;
    printf("AFTERNOON TIME\n" );
    printf("TIME IN HOURS : ");
    scanf("%d", &ph);
    printf("TIME IN MINS : ");
    scanf("%d", &pm);
    if (pm >= 60){
        duty();
    }
    printf("TIME OUT HOURS : ");
    scanf("%d", &ph2);
    printf("TIME OUT MINS : ");
    scanf("%d", &pm2);
    if (pm2 >= 60){
        duty();
    }
    ptotalin = (ph * 60) + pm;
    ptotalout = (ph2 * 60) + pm2;
    ptotalh1 = ptotalout - ptotalin;

    total = totalh + ptotalh1;
    totalhours = total / 60;
    totalmins = (total%60);
    printf("%d hours %d mins", totalhours, totalmins);
}
void totalhours(){
    int n, h, m, i, total, hours, mins;
    printf("TOTAL HOURS CALCULATOR\n");
    printf("TOTAL DAYS OF DUTY : ");
    scanf("%d", &n);
    for (int x = 1; x <= n; x++){
        printf("HOURS : ");
        scanf("%d", &h);
        printf("MINS : ");
        scanf("%d", &m);
            if (m >= 60){
            totalhours();
    }
        i = (h * 60) + m;
        total = total + i;
    }
    hours = total / 60;
    mins = (total%60);
    printf("%d hours and %d mins", hours, mins );
}
#include <string.h>
#include <stdio.h>
int main(){
    char timeString[8]="";
    char hourNames[24][32]= {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen","nineteen",
    "twenty", "twenty-one", "twenty-two", "twenty-three"};
    printf("Enter time:\n");
    scanf("%s", timeString);
    int i = 0;
    int hour = 0;
    for(i=0; i<2; i++){
        // Reject non-numeric values for hour
        if((int)(timeString[i]-'0') < 0 && (int)(timeString[i]-'0') > 23){
            return;
        }
        // Get 1st hour digit
        if(i == 1 && timeString[i+1]!= ':'){
            hour += 10*(int)(timeString[i]-'0');
            printf("%d", hour);
        }
        // Get 2nd hour digit if any
        else{
            printf("next timestring: %d", ((int)(timeString[i]-'0')));
            hour += (int)(timeString[i]-'0');
        }        
    }
    if(hour/10 == 1){
        
    }
    printf("hours: %d", hour);
}
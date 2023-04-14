#include <stdio.h>
float getMultiplier (int vehicleCode){
    
    if(vehicleCode == 1)
    {
       return 0.5;
    }
    else if (vehicleCode == 2){
        return 1;

    }
    else if (vehicleCode == 3){

        return 1.5;
    }
    else {
        return 0;
    }
}
float getCharge (int hoursStayed){

    if(hoursStayed >= 0 && hoursStayed <= 3){
        return 5.0;
    }
    else if(hoursStayed >= 4 && hoursStayed <= 6){
        return 7.5;
    }
     else if(hoursStayed >= 7 && hoursStayed <= 10){
        return 10.0;
    }
    else {
        return 12.5;
    }
}
int main ()
{
    int vehicleCode,count=0;
    float hoursStayed,hourMultiplier,charge;
    float totalMoney = 0;
    printf("Enter vehicle type: ");
    scanf("%d",&vehicleCode); 
       
    while(vehicleCode!=111){
        if (vehicleCode ==1 || vehicleCode ==2 || vehicleCode ==3){
            printf("Enter the number of hours: ");
            scanf("%f",&hoursStayed);     
            charge = getCharge(hoursStayed);
            hourMultiplier = getMultiplier(vehicleCode);
            float fee = hourMultiplier * charge;
            totalMoney += fee;
            count++;
            printf("Charge = %.2f TL \n", fee);
        }
        else {
            printf("ERROR!\n");
        }
        printf("Enter vehicle type: ");
        scanf("%d",&vehicleCode); 
    }
    printf("--------------------------\n");
    printf("A total of %d vehicles came to car park!\n", count);
    printf("Total money earned = %.2f TL", totalMoney);
    return 0; 
}






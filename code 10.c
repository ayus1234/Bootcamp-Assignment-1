/*Program to take date as an input in below given format and convert the date format and
display the result as given below.

User Input date format – “DD/MM/YYYY” (27/11/2022)

Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 11 , Year – 2022)

*/

#include<stdio.h>
int main()
{
    int DD,MM,YYYY;
    printf("Enter the Day, Month and Year\n");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);
    printf("Day - %d , Month - %d , Year - %d",DD,MM,YYYY);
    return 0;
}
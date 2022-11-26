#include <stdio.h>
int leapyr(int n);
int Switch1(int sm, int y);
int Switch2(int em, int ey);
int Switch3(int year, int month, int day);
int main()
{
    int sday, eday, smonth, emonth, syear, eyear, tdays = 0, dcode;
    int i, totaldays;
    printf("enter startong date in order of day,month,year\n");
    scanf("%d%d%d", &sday, &smonth, &syear);
    printf("enter end date,month,year\n");
    scanf("%d%d%d", &eday, &emonth, &eyear);
    int td1 = 0;
    if ((eyear - syear) > 2) //total days in years inbetween syear and eyear
    {
        for (i = syear + 1; i <= eyear - 1; i++)
        {
            if (leapyr(i))
                td1 += 366;
            else
                td1 += 365;
        }
    }
    int td2 = Switch1(smonth, syear); //total days from smonth+1 of syear to syear's end
    int td3 = Switch2(emonth, eyear); //total days from 1st january of eyear to emonth-1
    int td4 = Switch3(syear, smonth, sday) + eday; //total days of smonth and emonth
    totaldays = (td1 + td2 + td3 + td4);   //total days after calculating everything
    printf("total days are : %d\n", totaldays);
    return 0;
}

int leapyr(int y)
{
    if ((y % 100 == 0 && y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        return 1;
    else
        return 0;
}
int Switch1(int sm, int y)
{
    int i, count = 0;
    for (i = sm + 1; i <= 12; i++)
    {
        switch (i)
        {
        case 1:
            count += 31;
            break;
        case 2:
            if (leapyr(y))
                count += 29;
            else
                count += 28;
            break;
        case 3:
            count += 31;
            break;
        case 4:
            count += 30;
            break;
        case 5:
            count += 31;
            break;
        case 6:
            count += 30;
            break;
        case 7:
            count += 31;
            break;
        case 8:
            count += 31;
            break;
        case 9:
            count += 30;
            break;
        case 10:
            count += 31;
            break;
        case 11:
            count += 30;
            break;
        case 12:
            count += 31;
            break;
        }
    }
    return count;
}
int Switch2(int em, int ey)
{
    int i, count = 0;
    for (i = 1; i <= em - 1; i++)
    {
        switch (i)
        {
        case 1:
            count += 31;
            break;
        case 2:
            if (leapyr(ey))
                count += 29;
            else
                count += 28;
            break;
        case 3:
            count += 31;
            break;
        case 4:
            count += 30;
            break;
        case 5:
            count += 31;
            break;
        case 6:
            count += 30;
            break;
        case 7:
            count += 31;
            break;
        case 8:
            count += 31;
            break;
        case 9:
            count += 30;
            break;
        case 10:
            count += 31;
            break;
        case 11:
            count += 30;
            break;
        case 12:
            count += 31;
            break;
        }
    }
    return count;
}
int Switch3(int year, int month, int day)
{
    int count;
    int sd=day;
    switch (month)
    {
    case 1:
        count = 31 - sd + 1;
        break;
    case 2:
        if (leapyr(year))
            count = 29 - sd + 1;
        else
            count = 28 - sd + 1;
        break;
    case 3:
        count = 31 - sd + 1;
        break;
    case 4:
        count = 30 - sd + 1;
        break;
    case 5:
        count = 31 - sd + 1;
        break;
    case 6:
        count = 30 - sd + 1;
        break;
    case 7:
        count = 31 - sd + 1;
        break;
    case 8:
        count = 31 - sd + 1;
        break;
    case 9:
        count = 30 - sd + 1;
        break;
    case 10:
        count = 31 - sd + 1;
        break;
    case 11:
        count = 30 - sd + 1;
        break;
    case 12:
        count = 31 - sd + 1;
        break;
    }
    return count;
}
#include<iostream>
#include<sstream>
using namespace std;

class Date
{
    private:
    int days;
    int month;
    int year;
    public:
    Date(int d,int m, int y)
    {
        d=days;
        m=month;
        y=year;
    }
    void check_leap()
    {
        if(year%4==0 && year%100!=0)
        {
            cout<<"It is a leap year!"<<endl;
        }
        else
        {
            cout<<"It is not a leap year "<<endl;
        }
    }
    void get_data()
    {
        string date;
        cout<<"Enter date of birth"<<endl;
        cin>>date;
        char garbage;
        stringstream ss(date);
        ss>>days>>garbage>>month>>garbage>>year;
    }
    void check_dob()
    {
        int dob_year=0;
        int dob_month=0;
        int dob_days=0;
        while(year<2023)
        {
            year++;
            dob_year++;
        }
        while(month<8)
        {
            month++;
            dob_month++;
        }
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 )
        {
            while(days<31)
            {
            days++;
            dob_days++;
            }
        } 
        else if(month==4 || month==6 || month==9 || month==11)
        {
            while(days<30)
            {
            days++;
            dob_days++;
            }
        }
        else if(year%4==0 && year%100!=0 && month==2)
        {
           while(days<29)
            {
            days++;
            dob_days++;
            } 
        }
        else
        {
           while(days<28)
            {
            days++;
            dob_days++;
            } 
        }
        
        cout<<"You are "<<dob_year<<" years, "<<dob_month<<" months and "<<dob_days<<" days old "<<endl; 
    }
};

int main()
{
    Date d1(29,8,2023);
    d1.check_leap();
    d1.get_data();
    d1.check_dob();
    return 0;
}
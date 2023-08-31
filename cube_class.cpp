#include<iostream>
using namespace std;

class cube
{
    private:
    double height;
    double width;
    double length;
    public:
    void getdata()
    {
        cout<<"Enter values"<<endl;
        cin>>height>>length>>width;
    }
    double cal()
    {
        double result=height*width*length;
        return result;
    }
    cube()
    {
        cout<<"Enter values in order l w h"<<endl;
        cin>>length>>width>>height;
    }
    void geth()
    {
        cout<<"enter updated height :";
        cin>>height;
    }
    void getl()
    {
        cout<<"enter updated length :";
        cin>>length;
    }
    void getw()
    {
        cout<<"enter updated width :";
        cin>>width;
    }
    void update()
    {
        cout<<"You wanna update?"<<endl<<"1 for h"<<endl<<"2 for b"<<endl<<"3 for w"<<endl<<"any other num for no"<<endl;
        int choice;
        cin>>choice;
        if(choice==1)
        {
            geth();
        }
        else if(choice==2)
        {
            getl();
        }
        else if(choice==3)
        {
            getw();
        }
        else
        cout<<"ok"<<endl;
    }
    double getlength()
    {
        return length;
    }
    double getwidth()
    {
        return width;
    }
    double getheight()
    {
        return height;
    }
    
};

int main()
{
    cube c1;
    double volume=c1.cal();
    cout<<"volume of cube with length,width and height("<<c1.getlength()<<","<<c1.getwidth()<<","<<c1.getheight()<<") = "<<volume<<endl;
    c1.update();
    volume=c1.cal();
    cout<<"updated volume of cube with length,width and height("<<c1.getlength()<<","<<c1.getwidth()<<","<<c1.getheight()<<") = "<<volume<<endl;
    return 0;
}

// the volume of cube with height  width length is 
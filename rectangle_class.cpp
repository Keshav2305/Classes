#include<iostream>
using namespace std;

class rectangle
{
    private:
    double length;
    double width;
    public:
    rectangle();
    double Area();
};
class cuboid:public rectangle
{
    private:
    double height;
    public:
    cuboid();
    double volume();
};
rectangle::rectangle()
{
    cout<<"Enter the length of rectangle: ";
    cin>>length;
    cout<<"Enter the width of rectangle: ";
    cin>>width;
} 
double rectangle::Area()
{
    return length*width; 
}   
cuboid::cuboid()
{
    cout<<"Enter the height of the cuboid: ";
    cin>>height;
}
double cuboid::volume()
{
    return Area()*height;
}

int main()
{
    cuboid c;
    cout<<"Area of rectangle= "<<c.Area()<<endl;
    cout<<"The volume of rectange ="<<c.volume()<<endl;
}
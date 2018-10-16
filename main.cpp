#include <iostream>

using namespace std;
class Tollbooth
{
    public:
    Tollbooth()
    {
        cars=0;
        money=0;
    }
    void paying_cars()
    {
        money=money+150.5;
    }
    void non_paying_cars()
    {
        cars++;
        loss=cars*150.5;
        //int counter=cars;
        //int =counter*150.50;
    }
    void display()
    {
        cout<<"total money collected is "<<money<<endl;
        cout<<"total non paying cars are"<<cars<<endl;
        cout<<"your loss is "<<loss<<endl;
    }

    private:
    unsigned int cars;
    double money,loss;

};
int main()
{
    Tollbooth t;
    char key;
    cout<<"enter p for paying cars,n for non paying cars,q for total cars ,cash and total lost"<<endl;
    //cin>>key;
    //key=getchar();
    while(key != 'q')

    {
        cin>>key;
        if(key=='p')
         t.paying_cars();
        if(key=='n')
         t.non_paying_cars();
        //if(key==)
        //t.display();

    }
    t.display();
    return 0;
}

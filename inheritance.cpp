#include<bits/stdc++.h>
using namespace std;

class Human{
public:
    int age;
    int weight;
    int height;
};

class Male: public Human{
    string name;
    string color;
    void setWeight(int w){
        this->weight = w;
    }
    int getWeight(){
        return weight;
    }
    int set_get_Height(int h){
        this->height = h;
        return height;
    }
    string set_get_name(string name){
        this->name = name;
        return name;
    }
};



int main(){
    Male obj1;    // object creation..
    obj1.name = "Vatsalya";
    cout << obj1.name << endl;
    cout << obj1.set_get_height(180) << endl; 
}





class toyota{
public:
    // properties..
    int speed;
    int fuel;
    int capacity;
    float mileage;
    void start(){
        cout << "car starting.."
    }
    void stop(){
        cout << " car i going to stop..";
    }
    void refuel(){
        cout << "refuel the car..";
    }
    

};
#include <iostream>
using namespace std;

// Abstract Class
class Activity {
public:
   
    virtual double calculateCaloriesBurned() = 0;
};

// Derived Class: Running
class Running : public Activity {
private:
    double distance; 
    double time;     

public:
    Running(double d, double t) {
        distance = d;
        time = t;
    }

    double calculateCaloriesBurned() override {
       
        return distance * 60;
    }
};

// Derived Class: Cycling
class Cycling : public Activity {
private:
    double speed; // in km/h
    double time;  // in hours

public:
    Cycling(double s, double t) {
        speed = s;
        time = t;
    }

    double calculateCaloriesBurned() override {
        // Simple formula: Calories = speed * time * 8
        return speed * time * 8;
    }
};


int main() {
    Running run(5.0, 30);   
    Cycling cycle(20.0, 1.5); 

    cout << "Calories burned (Running): " 
         << run.calculateCaloriesBurned() << endl;

    cout << "Calories burned (Cycling): " 
         << cycle.calculateCaloriesBurned() << endl;

    return 0;
}
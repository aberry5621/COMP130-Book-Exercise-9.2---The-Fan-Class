//
//  main.cpp
//  COMP130 Book Exercise 9.2 - The Fan Class
//
//  Created by ax on 10/26/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    cout << "The Fan Class!\n";
    
    /*
     Fan class:
     - Int data field named speed that specifies the fan speed (1, 2, 3)
     - Bool data field "on" for on / off state
     - double data field define radius of fan
     - No-arg constructor creates default fan:
        - speed: 1
        - on: false
        - radius: 5
     - Accessor and mutator functions for all data fields
     */
    
    class Fan {
        public:
        int fan_speed = 0;
        bool on = 0;
        double radius = 0.0;
        
        Fan() {
            fan_speed = 1;
            on = 0;
            radius = 5.0;
        }
        
        Fan(int spd, bool swc, double rad) {
            fan_speed = spd;
            on = swc;
            radius = rad;
        }
        
    };
    
    Fan fan_1(3, 1, 10);
    
    cout << "fan_1 properties" << endl;
    cout << "================" << endl;
    cout << "fan_1 speed: " << fan_1.fan_speed << endl;
    cout << "fan_1 on state: " << fan_1.on << endl;
    cout << "fan_1 radius: " << fan_1.radius << endl;

    Fan fan_2(2, 0, 5);
    
    cout << "fan_2 properties" << endl;
    cout << "================" << endl;
    cout << "fan_2 speed: " << fan_2.fan_speed << endl;
    cout << "fan_2 on state: " << fan_2.on << endl;
    cout << "fan_2 radius: " << fan_2.radius << endl;

    return 0;
}

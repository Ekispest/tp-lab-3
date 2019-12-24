include "Circle.h"
#include <bits/stdc++.h>

static double pi = acos(-1);

Circle::Circle(double r ){
    setRadius(r);
}

void Circle::setRadius(double r){
    radius = r;
    area = pi*r*r;
    ference = 2*pi*r;
}

void Circle::setFerence(double f){
    setRadius(f/(2.0*pi));
}

void Circle::setArea(double a){
    setRadius(sqrt(a/pi));
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getFerence()const{
    return ference;
}

double Circle::getArea()const{
    return area;
}
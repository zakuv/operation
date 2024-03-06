
#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Point{
    double x;
    double y;
};


void scalpel(Point& start, Point& end)
{
    cout << "Сделан разрез между точками (" << start.x << ", " << start.y << ") и (" << end.x << ", " << end.y << ")." << endl;
}


void hemostat(Point& point)
{
    cout << "Сделан зажим в точке (" << point.x << ", " << point.y << ")" << endl;
}

void tweezers(Point& point)
{
    cout << "Использованы пинцеты в точке (" << point.x << ", " << point.y << ")." << endl;
}

void suture(const Point& start, const Point& end) {
    cout << "Наложен шов между точками (" << start.x << ", " << start.y << ") и (" << end.x << ", " << end.y << ")." << endl;
}

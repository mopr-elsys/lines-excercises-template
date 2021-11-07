#include <iostream>
#include "geom.hpp"
using namespace std;

int main () {
    char input;
    double x, y, A, B ,C;
    Point p1,p2;
    Line l1,l2;
    cin>> input;
    switch(input) {
    case 'c':
        cin>> input;
        switch(input) {
        case 'l':
            cin>> x>> y;
            p1 = Point(x,y);
            cin>> x>> y;
            p2 = Point(x,y);
            cout<< Line(p1, p2);
            break;
        case 'c':
            cin>> A>> B>> C;
            l1 = Line(A,B,C);
            cin>> A>> B>> C;
            l2 = Line(A,B,C);
            cout<< l1.parallel(l2);
            break;
        case 'p':
            cin>> A>> B>> C;
            l1 = Line(A,B,C);
            cin>> A>> B>> C;
            l2 = Line(A,B,C);
            cout<< l1.perpendicular(l2);
            break;
        }
        break;
    case 'v':
        cin>> input;
        switch(input) {
        case 'c':
            cin>> A>> B>> C;
            l1 = Line(A,B,C);
            cin>> x>> y;
            p1 = Point(x,y);
            cout<< l1.parallel(p1);
            break;
        case 'p':
            cin>> A>> B>> C;
            l1 = Line(A,B,C);
            cin>> x>> y;
            p1 = Point(x,y);
            cout<< l1.perpendicular(p1);
            break;
        }
        break;
    }

    return 0;
}

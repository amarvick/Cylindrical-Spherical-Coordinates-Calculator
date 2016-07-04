/*This program is a calculative program which allows the user to input values for polar coordinates, and then they will be converted into cylindrical and
 spherical coordinates in both radians and degrees.*/

#include <iostream> //character input/output commands can be activated
#include <cmath> //math library to allow sin/cos/tan functions and exponents
#define nl '\n' //nl will create a new line. Not required, but makes the program a little neater
#define PI 3.14159265359 //rather than typing '3.14159...', we can type 'PI' instead to make conversions look neater and easier

using namespace std;
int main()

{cout << "\tCONVERTING CARTESIAN COORDINATES TO CYLINDRICAL AND SPHERICAL" << endl; //Objective (with indent, '\t') displayed
    cout << nl;
    
    double x, y, z, r, p, t, ph, td, phd; //these are all necessary variables needed and are defined below
    
    cout << "X Coordinate: "; //asks user to input an x coordinate
    cin >> x; //user can input x coordinate
    cout << "Y Coordinate: "; //asks user to input a y coordinate
    cin >> y; //user can input y coordinate
    cout << "Z Coordinate: "; //asks user to input a z coordinate
    cin >> z; //user can input z coordinate
    
    p = pow(((pow(x,2)) + (pow(y,2)) + (pow(z,2))), 0.5); // computes 'rho' for spherical coordinates.
    ph = acos(z/p); //computes 'phi', the angle from the z-axis to the line.
    t = atan(y/x); //computes 'theta', the angle from the xy plane spread out starting from x.
    
    /*NOTE: C++ will initially convert its angle measurements into radians. If desired to be degrees, multiple by 180/pi.*/
    
    r = pow((pow(x,2) + pow(y,2)), 0.5); //computes the radius for cylindrical coordinates (length of 'x-y' line).
    td = t*(180/PI); //converts 'theta' into degrees
    phd = ph*(180/PI); //converts 'phi' into degrees
    
    cout << nl;
    cout << "Polar (x, y, z) = (" << x << ", " << y << ", " << z << ")" << endl; //displays polar coordinates
    cout << nl;
    cout << "Cylindrical (RADIANS) (r, theta, z) = (" << r << ", " << t << ", " << z << ")" << endl; //displays cylindrical coordinates in radians
    cout << nl;
    cout << "Cylindrical (DEGREES) (r, theta, z) = (" << r << ", " << td << ", " << z << ")" << endl; //displays cylindrical coordinates in degrees
    cout << nl;
    cout << "Spherical (RADIANS) (rho, theta, phi) = (" << p << ", " << t << ", " << ph << ")" << endl; //displays spherical coordinates in radians
    cout << nl;
    cout << "Spherical (DEGREES) (rho, theta, phi) = (" << p << ", " << td << ", " << phd << ")" << endl; //displays spherical coordinates in degrees
    return 0;}
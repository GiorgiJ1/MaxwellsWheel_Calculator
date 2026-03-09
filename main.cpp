#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int choice;
    double h, t, a, g, I, m, r, v, w;

    g = 9.81;

    do
    {
        cout << "Maxwell's Wheel Calculator\n";
        cout << "1. Find acceleration from height and time\n";
        cout << "2. Find moment of inertia\n";
        cout << "3. Find theoretical acceleration\n";
        cout << "4. Find linear speed\n";
        cout << "5. Find angular speed\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter height h (m): ";
            cin >> h;
            cout << "Enter time t (s): ";
            cin >> t;

            a = 2 * h / (t * t);

            cout << "Acceleration a = " << a << " m/s^2\n\n";
        }
        else if (choice == 2)
        {
            cout << "Enter mass m (kg): ";
            cin >> m;
            cout << "Enter axle radius r (m): ";
            cin >> r;
            cout << "Enter acceleration a (m/s^2): ";
            cin >> a;

            I = m * r * r * (g / a - 1);

            cout << "Moment of inertia I = " << I << " kg*m^2\n\n";
        }
        else if (choice == 3)
        {
            cout << "Enter mass m (kg): ";
            cin >> m;
            cout << "Enter axle radius r (m): ";
            cin >> r;
            cout << "Enter moment of inertia I (kg*m^2): ";
            cin >> I;

            a = g / (1 + I / (m * r * r));

            cout << "Theoretical acceleration a = " << a << " m/s^2\n\n";
        }
        else if (choice == 4)
        {
            cout << "Enter acceleration a (m/s^2): ";
            cin >> a;
            cout << "Enter height h (m): ";
            cin >> h;

            v = sqrt(2 * a * h);

            cout << "Linear speed v = " << v << " m/s\n\n";
        }
        else if (choice == 5)
        {
            cout << "Enter linear speed v (m/s): ";
            cin >> v;
            cout << "Enter axle radius r (m): ";
            cin >> r;

            w = v / r;

            cout << "Angular speed w = " << w << " rad/s\n\n";
        }
        else if (choice == 0)
        {
            cout << "Goodbye\n";
        }
        else
        {
            cout << "Invalid choice\n\n";
        }

    } while (choice != 0);

    return 0;
}
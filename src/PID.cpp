#include "PID.h"
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double KP, double KI, double KD) {

    Kp = KP;
    Ki = KI;
    Kd = KD;
    initialized = true;
    p_error = 0;
    d_error = 0;
    i_error = 0;
}

void PID::UpdateError(double cte) {
    i_error += cte;
    d_error = cte - p_error;
    p_error = cte;

}

// double PID::TotalError() {
// }

double PID::CalculateSteer() {

    return -1*(Kp*p_error + Kd*d_error + Ki*i_error);

}

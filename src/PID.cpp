#include "PID.h"


using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    PID::Kp = Kp;
    PID::Ki = Ki;
    PID::Kd = Kd;
    PID::p_error = 0;
    PID::i_error = 0;
    PID::d_error = 0;
    PID::tolerance = 0.2;
    PID::twiddle_on = true;
    PID::N = 100;

}

void PID::UpdateError(double cte) {
    PID::d_error = cte - PID::p_error;
    PID::i_error += cte;
    PID::p_error = cte;
}

double PID::TotalError() {

}




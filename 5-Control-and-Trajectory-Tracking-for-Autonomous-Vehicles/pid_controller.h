/**********************************************
 * Self-Driving Car Nano-degree - Udacity
 *  Created on: December 11, 2020
 *      Author: Mathilde Badoual
 **********************************************/

#ifndef PID_CONTROLLER_H
#define PID_CONTROLLER_H

class PID {
public:

   /**
    TODO: Create the PID class
   **/

    /*
    * Errors
    */
    double prev_cte{0.0};
    double diff_cte{0.0}; 
    double int_cte{0.0};
    /*
    * Coefficients
    */
    double Kp;
    double Ki;
    double Kd;
    /*
    * Output limits
    */
    double output_lim_min;
    double output_lim_max;
    /*
    * Delta time
    */
    double dt{0.0};

    /*
    * Constructor
    */
    PID();


    /*
    * Destructor.
    */
    virtual ~PID();

    /*
    * Initialize PID.
    */
    void Init(double Kp, double Ki, double Kd, double output_lim_max, double output_lim_min);

    /*
    * Update the PID error variables given cross track error.
    */
    void UpdateError(double cte);
    
    /*
    * Calculate the total PID error.
    */
    double TotalError();
  
    /*
    * Update the delta time.
    */
    double UpdateDeltaTime(double new_delta_time);
};

#endif //PID_CONTROLLER_H



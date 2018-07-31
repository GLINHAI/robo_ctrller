#ifndef BASECONTROL_H
#define BASECONTROL_H

class BaseControl {

 public:
  BaseControl() { } 
  ~BaseControl() { }

 private:
  double Kp;
  double Kd;
  double Ki;

  double p_error;
  double i_error;
  double d_error;

  double set_point;
};




#endif

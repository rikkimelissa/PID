# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

###Simulator.

This project uses the Udacity Term2 Simulator which contains the PID project.

###Goals

In this project the goal is to use a PID controller to navigate a car around a race track using cross track error.

###Details

This controller uses basic feedback control to keep the car within the track. Although set up as PID control, my final controller actually only uses PD control, as the three terms had the following effects:

- The proportional term drove the car to the center of the track but caused a lot of oscillations, which quickly drove the system to instability.

- The derivative term slowed down the car's angle adjustment and helped keep the system stable.

- The integral term generally fixes incremental error, but since the necessary angle to keep the car in the center varies widely as the track changes anyway, this term also caused overshoot and led the system to instability.

My final hyperparameters were chosen through manual tuning. The derivative term had to be much higher than the proportional term for stable driving, and even this only worked at low speeds. The integral term with even a tiny value was not found to improve the driving at any speed.


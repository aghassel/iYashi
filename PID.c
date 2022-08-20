#include <stdio.h>
#include <time.h>
#include <potentiometer.c>

time_t prev_time;

int PID(int target) {
    if(prev_time == NULL) {
        prev_time = 0;
    }

    float Kp = 4.5;
    float Ki = 2.0;
    float Kd = 2.0;

    float error = target - mapServo()

    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    cur_time = localtime ( &rawtime );

    float time_difference = cur_time - prev_time;
    prev_time = cur_time;
    
    float proportionality = Kp * error;
    float integral = Ki * error * time_difference;
    float derivative = Kd * error / time_difference;

    float PID_final = proportionality + integral + derivative;

    return PID_final;
}

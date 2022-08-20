#include <Servo.h>
#include <PID.c>
#include <data.pb.h>

Servo myservo;
User user1;
int resistance;

void setup() {
    myservo.attach(9);
    myservo.watch(90);

    suser1.set_name("Biff");
    sensor.set_userid(1);
    sensor.set_resistance(1);

    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    cur_time = localtime ( &rawtime );

    sensor.set_datetime(cur_time);
}

void loop() {
    float error = PID(90)
    myservo.watch(error)
    if error < 1.0 {resistance = 1};
    else if error < 3.0 {resistance = 2};
    else if error < 7.0 {resistance = 3};
    else if error < 15.0 {resistance = 4};
    else {resistance = 5};
    delay(100);

    sensor.set_resistance(resistance);

    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    cur_time = localtime ( &rawtime );

    sensor.set_datetime(cur_time);

    std::ofstream ofs("user.data", std::ios_base::out | std::ios_base::binary);
    sensor.SerializeToOstream(&ofs);
}
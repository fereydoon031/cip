#include <ros/ros.h>
#include <iostream>
#include <math.h>

int main()
{
    int a=10;
    a++;
    ROS_INFO_STREAM("begining of the end:");
    ROS_INFO_STREAM(a);

}
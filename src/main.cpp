#include <ros/ros.h>
#include <iostream>
#include <math.h>

int main(int argc , char** argv)
{
    ros::init(argc,argv,"cip_node");
    ros::start();
    ros::NodeHandle nh;



    ros::spin();
    ros::shutdown();
    return 0;

}
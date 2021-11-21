#include<ros/ros.h>
#include<std_msgs/Int16.h>
#include<my_msgs/RequestOfMove.h>

void NumberCallback(const my_msgs::RequestOfMove &msg){
    ROS_INFO("sub MR: %d, ML: %d\n", msg.MR, msg.ML);
}

int main(int argc, char** argv){
    ros::init(argc, argv, "sub_node");
    ros::NodeHandle nh;

    ros::Subscriber sub_number = nh.subscribe("/Topic/Move", 10, NumberCallback);
    
    ros::spin();
}
//包含头文件ros/ros.h,ROS提供的C++客户端库，在后面的编译配置中要添加相应的依赖库roscpp
#include "ros/ros.h"    

int main(int argc,char **argv) 
{
  ros::init(argc,argv,"hello_node"); //初始化ros节点;并指明节点的名称为 hello_node
  ros::NodeHandle n;                //声明一个ros节点的句柄;
  //调用了roscpp库提供的方法ROS_INFO_STREAM来打印信息。这里打印字符串"hello world!"。    
  ROS_INFO_STREAM("hello world!");
}

#include "../../include/drone_navigation/bridge.h"

using namespace bridge;

int main(int argc, char** argv) {

	ros::init(argc, argv, "bridge_node");
	ros::NodeHandle nh("~");
	Realsense_Bridge Bridge(nh);
	
	ros::spin();
	Bridge.worker_.join();
	return 0;
}

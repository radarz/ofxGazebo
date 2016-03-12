//
//  ofxGazebo.cpp
//
//  Created by Rob Sawyer on 3/11/16.
//
//

#include "ofxGazebo.h"

void ofxGazebo::setup(){
	// Populate a std::vector with the command line arguments
	std::vector<std::string> v;
	for (size_t i = 0; i < _argc; ++i)
		v.push_back(std::string(_argv[i]));
	
	// Initialize gazebo.
	gazebo::setupServer(v);
	
	// Load a world
	gazebo::physics::WorldPtr world = gazebo::loadWorld("worlds/empty.world");
	
	// This is your custom main loop. In this example the main loop is just a
	// for loop with 2 iterations.
	for (unsigned int i = 0; i < 2; ++i)
	{
		// Run simulation for 100 steps.
		gazebo::runWorld(world, 100);
	}
	
	// Close everything.
	gazebo::shutdown();
}
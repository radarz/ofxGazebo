//
//  ofxGazebo.cpp
//
//  Created by Rob Sawyer on 3/11/16.
//
//

#include "ofxGazebo.h"

void ofxGazebo::setup(){
	// Initialize gazebo.
	gazebo::setupServer();
}

void ofxGazebo::draw(){
	// This is your custom main loop. In this example the main loop is just a
	// for loop with 2 iterations.
	for (unsigned int i = 0; i < 2; ++i)
	{
		// Run simulation for 100 steps.
		gazebo::runWorld(world, 100);
	}
}

void ofxGazebo::exit(){
	// Close everything.
	gazebo::shutdown();
}

gazebo::physics::WorldPtr ofxGazebo::loadWorld(string path){
	// Load a world
	return gazebo::loadWorld(path);
}
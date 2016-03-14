/*
 * ofxGazebo.h
 *
 * Copyright (C) 2014-2016 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *	
 * Created by Rob Sawyer on 3/11/16.
 */

#ifndef ofxGazebo_h
#define ofxGazebo_h

#include <gazebo/gazebo.hh>
#include <gazebo/common/common.hh>
#include <gazebo/physics/physics.hh>

#include "ofMain.h"

class ofxGazebo{
public:
	void setup();
	void exit();
	void draw();
	gazebo::physics::WorldPtr loadWorld(string path);
	
	
protected:
	gazebo gazebo;
	
};

#endif /* ofxGazebo_h */

/*******************************************************************************
* mixing_matrix_defs.h
*
* James Strawson 2016
* matrix definitions for mixing_matrix.c
*
*  				rotor
*		1	2	3	4	5	6	7	8
* 	  Z
*  Roll
* Pitch
*   YAW
*     X
*     Y
*******************************************************************************/

#define MAX_INPUTS 6	// up to 6 control inputs (r,p,yaw,z,x,y)	
#define MAX_ROTORS 8	// up to 8 rotors



// my 6D0F control
//  6  1       cw ccw      	Y
// 5    2    ccw     cw    	^
//  4  3       cw ccw      	+ > X

#define MIX_6DOF   {{ 1.0000,  1.0000,  1.0000,  1.0000,  1.0000,  1.0000},\
					{-0.2410, -0.4770, -0.3120,  0.3120,  0.4770,  0.2410},\
					{ 0.4770, -0.0266, -0.4511, -0.4511, -0.0266,  0.4770},\
					{-0.4663,  0.4770, -0.4647,  0.4647, -0.4770,  0.4663},\
					{ 0.4770,  0.0216, -0.4575,  0.4575, -0.0216, -0.4770},\
					{-0.2130,  0.4770, -0.2528, -0.2528,  0.4770, -0.2130}}

					


// Most popular: 4-rotor X layout like DJI Phantom and 3DR Iris
//  4   1       cw ccw      Y
//    X     			   	^
//  3   2       ccw cw      + > X

#define MIX_4X 	   {{ 1.0,  1.0,  1.0,  1.0},\
					{-0.5, -0.5,  0.5,  0.5},\
					{ 0.5, -0.5, -0.5,  0.5},\
					{-0.5,  0.5, -0.5,  0.5}}	
					
// less popular: 4-rotor + layout
//    1       ccw      	Y
//  4 + 2   cw   cw		^
//    3       ccw      	+ > X

#define MIX_4PLUS  {{ 1.0,  1.0,  1.0,  1.0},\
					{ 0.0, -0.5,  0.0,  0.5},\
					{ 0.5,  0.0, -0.5,  0.0},\
					{-0.5,  0.5, -0.5,  0.5}}
					
// 6X like DJI S800
//  6  1       cw ccw      	Y
// 5    2    ccw     cw    	^
//  4  3       cw ccw      	+ > X

#define MIX_6X	   {{  1.00,  1.00,  1.00,  1.00,  1.00,  1.00},\
					{ -0.25, -0.50, -0.25,  0.25,  0.50,  0.25},\
					{  0.50,  0.00, -0.50, -0.50,  0.00,  0.50},\
					{ -0.50,  0.50, -0.50,  0.50, -0.50,  0.50}}
					
// 6+ not very common
//	  1				ccw
// 6     2       cw    cw      	Y
// 5     3    	ccw    ccw    	^
//    4       		cw      	+ > X

#define MIX_6PLUS  {{  1.00,  1.00,  1.00,  1.00,  1.00,  1.00},\
					{  0.00, -0.50, -0.50,  0.00,  0.50,  0.50},\
					{  0.50,  0.25, -0.25, -0.50, -0.25,  0.25},\
					{ -0.50,  0.50, -0.50,  0.50, -0.50,  0.50}}

// 8X like DJI S1000
//	 8 1		   cw ccw
// 7     2       ccw     cw    	Y
// 6     3    	 cw     ccw    	^
//   5 4       	   ccw cw      	+ > X

#define MIX_8X	   {{  1.00,  1.00,  1.00,  1.00,  1.00,  1.00,  1.00,  1.00},\
					{ -0.21, -0.50, -0.50, -0.21,  0.21,  0.50,  0.50,  0.21},\
					{  0.50,  0.21, -0.21, -0.50, -0.50, -0.21,  0.21,  0.50},\
					{ -0.50,  0.50, -0.50,  0.50, -0.50,  0.50, -0.50,  0.50}}




 
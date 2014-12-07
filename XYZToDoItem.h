//
//  XYZToDoItem.h
//  MotorControlApp
//
//  Created by iBeacon on 12/7/14.
//  Copyright (c) 2014 MTS. All rights reserved.
//

#ifndef MotorControlApp_XYZToDoItem_h
#define MotorControlApp_XYZToDoItem_h

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end


#endif

//
//  SimpleGameAppDelegate.h
//  SimpleGame
//
//  Created by shenxiangyu on 02/11/2010.
//  Copyright 2010 ACG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleGameAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end


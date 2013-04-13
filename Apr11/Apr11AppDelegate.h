//
//  Apr11AppDelegate.h
//  Apr11
//
//  Created by Christopher J Di Luccia on 4/8/13.
//  Copyright (c) 2013 Christopher J Di Luccia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVAudioPlayer.h>  //for AVAudioPlayer
@class ViewController;

@interface Apr11AppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    NSArray *a;
	UIWindow *window;
    NSString *last;
    UITabBarController *tabBarController;
}

@property (strong, nonatomic) UIWindow *window;
@end
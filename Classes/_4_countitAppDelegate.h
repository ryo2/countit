//
//  _4_countitAppDelegate.h
//  14_countit
//
//  Created by 森 亮二 on 10/12/18.
//  Copyright 2010 東京大学. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"
#import "TitleViewController.h"


@interface _4_countitAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	TitleViewController * TitleVCont;
	MainViewController * MainVCont;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
-(void) drive ;

@end


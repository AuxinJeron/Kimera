//
//  KMRMAppDelegate.h
//  KimeraMobile
//
//  Created by Massimo Oliviero on 5/27/13.
//  Copyright (c) 2013 Massimo Oliviero. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "UIResponder+Kimera.h"
#import "KMRMInterface.h"

@interface KMRMAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) KMRMInterface *interface;

@end

//
//  AppDelegate.h
//  BT2
//
//  Created by Greg Paton on 1/29/13.
//  Copyright (c) 2013 Greg Paton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate, CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBCentralManager *manager;
}

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@end

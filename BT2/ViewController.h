//
//  ViewController.h
//  BT2
//
//  Created by Greg Paton on 1/29/13.
//  Copyright (c) 2013 Greg Paton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface ViewController : UIViewController {
    
    CBCentralManager *manager;
    CBPeripheral *peripheral;
    
    id delegate;
    
    IBOutlet UIButton *bt_connect;
}

@property (nonatomic, retain) IBOutlet UIButton *connect;
@property (nonatomic, assign) id delegate;

- (IBAction)connect:(id)sender;

@end

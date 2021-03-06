//
//  ViewController.h
//  Carduino
//
//  Created by Ladvien on 6/21/14.
//  Copyright (c) 2014 Honeysuckle Hardware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "CarduinoViewCell.h"

@interface ViewController : UIViewController <CBPeripheralDelegate, CBCentralManagerDelegate, UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) CBCentralManager *centralManager;
@property (strong, nonatomic) NSMutableDictionary *devices;
@property (strong, nonatomic) CBPeripheral *discoveredPeripheral;
@property (strong, nonatomic) CBPeripheral *selectedPeripheral;
@property (readonly, nonatomic) CFUUIDRef UUID;
@property (strong, nonatomic) CBCharacteristic *characteristics;
@property (strong, nonatomic) NSMutableData *data;


-(float)mapNumber: (float)x minimumXIn:(float)minXIn maximumXIn:(float)maxXIn mimimumXOut:(float)minXOut maximumXOut:(float)maxXOut;

- (void)fadeDeviceMenuIn;
- (void)fadeDeviceMenuOut;
@end

//Holds steering slider value as an integer.
short int steeringValue;

//Holds acceleration slider value as an integer.
short int accelerationValue;

int counter;

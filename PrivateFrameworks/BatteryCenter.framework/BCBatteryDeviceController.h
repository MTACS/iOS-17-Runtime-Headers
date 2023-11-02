
@interface BCBatteryDeviceController : NSObject <BCBatteryDeviceObservable>

@property (nonatomic, readonly, copy) NSArray *connectedDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter

+ (id)_sharedPowerSourceController;

- (void)addBatteryDeviceObserver:(id)arg1 queue:(id)arg2;
- (id)connectedDevices;
- (id)init;
- (void)removeBatteryDeviceObserver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)sb_deviceInternalBattery;

@end

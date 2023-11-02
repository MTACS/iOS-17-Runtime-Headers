
@interface IMDeviceConditions : NSObject

@property (readonly) bool isDeviceCharging;
@property (readonly) bool isDeviceOnData;
@property (readonly) bool isDeviceOnWifi;

+ (id)sharedInstance;

- (id)_batteryStatus;
- (id)_mobileNetworkManager;
- (bool)isDeviceCharging;
- (bool)isDeviceOnData;
- (bool)isDeviceOnWifi;

@end

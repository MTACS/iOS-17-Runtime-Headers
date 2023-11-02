
@interface HMIThermalPressureMonitor : HMFObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _osThermalPressureLevelNotificationToken;
    long long  _thermalPressureLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) long long thermalPressureLevel;

+ (id)logCategory;
+ (id)sharedInstance;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_updateThermalPressureLevel;
- (void)dealloc;
- (id)init;
- (long long)thermalPressureLevel;

@end

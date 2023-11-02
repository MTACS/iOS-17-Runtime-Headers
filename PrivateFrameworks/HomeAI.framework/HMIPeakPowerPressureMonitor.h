
@interface HMIPeakPowerPressureMonitor : HMFObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _osPeakPowerPressureLevelNotificationToken;
    long long  _peakPowerPressureLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long peakPowerPressureLevel;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedInstance;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_updatePeakPowerPressureLevel;
- (void)dealloc;
- (id)init;
- (long long)peakPowerPressureLevel;

@end


@interface HDSPDevicePowerMonitor : NSObject <HDSPNotificationObserver> {
    NSNumber * _batteryLevelOverride;
    NSNumber * _isChargingOverride;
    HKSPObserverSet * _observers;
}

@property (nonatomic, readonly) float batteryLevel;
@property (nonatomic, retain) NSNumber *batteryLevelOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCharging;
@property (nonatomic, retain) NSNumber *isChargingOverride;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (float)batteryLevel;
- (id)batteryLevelOverride;
- (id)init;
- (id)initWithCallbackScheduler:(id)arg1;
- (bool)isCharging;
- (id)isChargingOverride;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setBatteryLevelOverride:(id)arg1;
- (void)setIsChargingOverride:(id)arg1;

@end

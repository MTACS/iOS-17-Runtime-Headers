
@interface CMContinuityCaptureBatteryStateMonitor : NSObject {
    NSNumber * _batteryLevel;
    long long  _batteryState;
    bool  _invalidated;
    struct IONotificationPort { } * _ioNotificationPort;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _serviceNotification;
}

@property (readonly, retain) NSNumber *batteryLevel;
@property (readonly) long long batteryState;
@property (nonatomic) bool invalidated;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (void)invalidate;
+ (long long)resolveBatteryState:(bool)arg1 isBatteryChargingThermallyLimited:(bool)arg2 batteryCapacity:(id)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)batteryLevel;
- (long long)batteryState;
- (void)handleBatteryInfoChanged;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (bool)invalidated;
- (id)queue;
- (void)setInvalidated:(bool)arg1;
- (bool)setupNotification;

@end

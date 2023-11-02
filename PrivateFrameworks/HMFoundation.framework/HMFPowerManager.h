
@interface HMFPowerManager : HMFObject {
    float  _batteryLevel;
    long long  _batteryState;
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _hasBattery;
    unsigned int  _interestNotification;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct IONotificationPort { } * _notificationPort;
    bool  _running;
}

@property (readonly) float batteryLevel;
@property (readonly) long long batteryState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) bool hasBattery;
@property (nonatomic, readonly) unsigned int interestNotification;
@property (nonatomic, readonly) struct IONotificationPort { }*notificationPort;
@property (getter=isRunning, nonatomic) bool running;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_deregisterForPowerSourceNotifications:(bool)arg1;
- (void)_registerForPowerSourceNotifications;
- (float)batteryLevel;
- (long long)batteryState;
- (id)clientQueue;
- (void)dealloc;
- (bool)hasBattery;
- (id)init;
- (unsigned int)interestNotification;
- (bool)isRunning;
- (struct IONotificationPort { }*)notificationPort;
- (void)setRunning:(bool)arg1;
- (void)start;
- (void)stop;
- (void)updateBatteryState:(unsigned int)arg1;

@end

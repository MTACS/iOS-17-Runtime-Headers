
@interface CUTPowerMonitor : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) double batteryPercentRemaining;
@property (nonatomic, readonly) bool isExternalPowerConnected;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg1 notificationID:(void*)arg2;
- (id)_init;
- (bool)_initIOService;
- (bool)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)addDelegate:(id)arg1;
- (double)batteryPercentRemaining;
- (void)dealloc;
- (bool)isExternalPowerConnected;
- (void)removeDelegate:(id)arg1;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;

@end

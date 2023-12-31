
@interface MSBatteryPowerMonitor : NSObject {
    struct IONotificationPort { } * _batteryIONotifyPort;
    unsigned int  _batteryNotificationRef;
    struct __CFRunLoopSource { } * _batteryRunLoopSource;
    double  _currentLevel;
    bool  _isExteralPowerConnected;
}

@property (nonatomic) double currentLevel;
@property (setter=setExternalPowerConnected:, nonatomic) bool isExternalPowerConnected;

+ (id)defaultMonitor;

- (bool)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (double)batteryPercentRemaining;
- (double)currentLevel;
- (void)dealloc;
- (id)init;
- (bool)isExternalPowerConnected;
- (void)setCurrentLevel:(double)arg1;
- (void)setExternalPowerConnected:(bool)arg1;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;

@end

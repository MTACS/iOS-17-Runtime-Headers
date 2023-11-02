
@protocol NPKLowPowerModeMonitor <NSObject>

@required

+ (id)sharedInstance;

- (bool)isLowPowerModeEnabled;
- (void)registerObserver:(id <NPKLowPowerModeMonitorObserver>)arg1;
- (void)unregisterObserver:(id <NPKLowPowerModeMonitorObserver>)arg1;

@end

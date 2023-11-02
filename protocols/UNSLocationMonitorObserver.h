
@protocol UNSLocationMonitorObserver <NSObject>

@optional

- (void)locationMonitor:(UNSLocationMonitor *)arg1 triggerDidFireForRegion:(CLRegion *)arg2 forBundleIdentifier:(NSString *)arg3;

@end

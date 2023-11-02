
@interface CSHostPowerSourceMonitor : CSEventMonitor

+ (id)sharedInstance;

- (long long)currentPowerSource;
- (id)init;

@end

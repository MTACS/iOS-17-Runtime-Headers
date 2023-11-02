
@interface CSMacWakeSleepMonitor : CSEventMonitor

+ (id)sharedInstance;

- (bool)deviceIsInSleep;

@end

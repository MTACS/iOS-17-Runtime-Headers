
@protocol DBProcessMonitorObserving <NSObject>

@required

- (void)processMonitor:(DBProcessMonitor *)arg1 didHandleDeathOfBundleIdentifier:(NSString *)arg2;
- (void)processMonitor:(DBProcessMonitor *)arg1 shouldHandleDeathOfBundleIdentifier:(NSString *)arg2 isCrash:(bool)arg3;

@end

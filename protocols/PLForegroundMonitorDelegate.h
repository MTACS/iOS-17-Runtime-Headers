
@protocol PLForegroundMonitorDelegate <NSObject>

@required

- (void)foregroundMonitor:(PLForegroundMonitor *)arg1 changedStateToForeground:(bool)arg2 forBundleIdentifier:(NSString *)arg3;

@end

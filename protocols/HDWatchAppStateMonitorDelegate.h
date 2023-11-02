
@protocol HDWatchAppStateMonitorDelegate <NSObject>

@required

- (void)monitorDidDetectAppActivate:(HDWatchAppStateMonitor *)arg1;
- (void)monitorDidDetectAppDeactivate:(HDWatchAppStateMonitor *)arg1;

@end

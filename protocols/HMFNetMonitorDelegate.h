
@protocol HMFNetMonitorDelegate <NSObject>

@optional

- (void)networkMonitorIsReachable:(HMFNetMonitor *)arg1;
- (void)networkMonitorIsUnreachable:(HMFNetMonitor *)arg1;

@end

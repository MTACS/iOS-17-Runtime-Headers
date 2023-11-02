
@protocol HFNetworkMonitorObserver <NSObject>

@optional

- (void)networkDidBecomeAvailable:(HFNetworkMonitor *)arg1;
- (void)networkDidBecomeExpensive:(HFNetworkMonitor *)arg1;
- (void)networkDidBecomeInexpensive:(HFNetworkMonitor *)arg1;
- (void)networkDidBecomeUnavailable:(HFNetworkMonitor *)arg1;

@end

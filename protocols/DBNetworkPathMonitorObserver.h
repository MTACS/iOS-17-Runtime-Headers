
@protocol DBNetworkPathMonitorObserver <NSObject>

@required

- (void)networkPathMonitor:(DBNetworkPathMonitor *)arg1 didChangeNetworkReachable:(bool)arg2;
- (void)networkPathMonitorDidChangeNetworkPath:(DBNetworkPathMonitor *)arg1;

@end

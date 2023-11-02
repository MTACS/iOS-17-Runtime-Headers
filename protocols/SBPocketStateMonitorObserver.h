
@protocol SBPocketStateMonitorObserver <NSObject>

@required

- (void)pocketStateMonitor:(SBPocketStateMonitor *)arg1 pocketStateDidChangeFrom:(long long)arg2 to:(long long)arg3;

@end

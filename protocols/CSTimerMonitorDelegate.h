
@protocol CSTimerMonitorDelegate <NSObject>

@required

- (void)CSTimerMonitor:(CSTimerMonitor *)arg1 didReceiveTimerChanged:(long long)arg2;

@end


@protocol SPBLEStateMonitorDelegate <NSObject>

@required

- (void)bleMonitor:(SPBLEStateMonitor *)arg1 didChangeState:(unsigned long long)arg2;

@end

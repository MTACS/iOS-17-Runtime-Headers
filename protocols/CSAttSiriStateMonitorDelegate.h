
@protocol CSAttSiriStateMonitorDelegate <NSObject>

@optional

- (void)attSiriStateMonitor:(CSAttSiriStateMonitor *)arg1 didRecieveAttSiriStateChange:(unsigned long long)arg2;

@end

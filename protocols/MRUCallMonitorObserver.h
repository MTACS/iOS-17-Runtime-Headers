
@protocol MRUCallMonitorObserver <NSObject>

@required

- (void)callMonitorDidUpdateOnCall:(MRUCallMonitor *)arg1 isOnCall:(bool)arg2;

@end

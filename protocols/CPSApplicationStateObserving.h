
@protocol CPSApplicationStateObserving <NSObject>

@required

- (void)applicationStateMonitor:(CPSApplicationStateMonitor *)arg1 didBecomeActive:(bool)arg2;

@end

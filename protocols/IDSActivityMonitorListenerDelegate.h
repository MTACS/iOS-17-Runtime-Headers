
@protocol IDSActivityMonitorListenerDelegate <NSObject>

@required

- (void)activityMonitor:(IDSActivityMonitor *)arg1 didReceiveActivityUpdate:(IDSActivityUpdate *)arg2;

@end

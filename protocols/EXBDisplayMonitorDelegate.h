
@protocol EXBDisplayMonitorDelegate <EXBDisplayMonitorObserver>

@optional

- (void)displayMonitor:(EXBDisplayMonitor *)arg1 didUpdateIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;

@end

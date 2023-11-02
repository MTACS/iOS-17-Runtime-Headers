
@protocol EXBDisplayMonitorObserver <NSObject>

@optional

- (void)displayMonitor:(EXBDisplayMonitor *)arg1 didConnectIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
- (void)displayMonitor:(EXBDisplayMonitor *)arg1 didDisconnectIdentity:(FBSDisplayIdentity *)arg2;
- (void)displayMonitor:(EXBDisplayMonitor *)arg1 willDisconnectIdentity:(FBSDisplayIdentity *)arg2;

@end

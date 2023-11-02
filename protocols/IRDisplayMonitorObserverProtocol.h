
@protocol IRDisplayMonitorObserverProtocol <NSObject>

@required

- (void)monitor:(IRDisplayMonitor *)arg1 didUpdateAppInFocus:(NSString *)arg2 isScreenUnlockEvent:(bool)arg3;

@end

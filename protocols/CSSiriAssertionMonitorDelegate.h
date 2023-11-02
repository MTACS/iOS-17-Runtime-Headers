
@protocol CSSiriAssertionMonitorDelegate <NSObject>

@optional

- (void)CSSiriAssertionMonitor:(CSSiriAssertionMonitor *)arg1 didReceiveBacklightOnEnabled:(bool)arg2 atHostTime:(unsigned long long)arg3;
- (void)CSSiriAssertionMonitor:(CSSiriAssertionMonitor *)arg1 didReceiveEnabled:(bool)arg2;

@end

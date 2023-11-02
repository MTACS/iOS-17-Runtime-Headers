
@protocol SBDoNotDisturbStateMonitorObserver <NSObject>

@required

- (void)doNotDisturbStateMonitor:(SBDoNotDisturbStateMonitor *)arg1 didUpdateToState:(DNDState *)arg2;

@end

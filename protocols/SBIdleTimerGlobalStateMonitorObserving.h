
@protocol SBIdleTimerGlobalStateMonitorObserving <NSObject>

@required

- (void)idleTimerGlobalStateMonitor:(SBIdleTimerGlobalStateMonitor *)arg1 changedForReason:(NSString *)arg2;

@end

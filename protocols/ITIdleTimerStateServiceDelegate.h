
@protocol ITIdleTimerStateServiceDelegate

@required

- (<BSInvalidatable> *)acquireIdleTimerAssertionWithConfiguration:(ITIdleTimerConfiguration *)arg1 fromClient:(BSProcessHandle *)arg2 forReason:(NSString *)arg3;

@end

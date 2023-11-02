
@protocol ITIdleTimerStateServerDelegate <NSObject>

@required

- (bool)addIdleTimerConfiguration:(ITIdleTimerConfiguration *)arg1 fromProcess:(BSProcessHandle *)arg2 forReason:(NSString *)arg3;
- (void)clientDidDisconnect:(BSProcessHandle *)arg1;
- (bool)isIdleTimerServiceAvailable;
- (void)removeIdleTimerConfigurationFromProcess:(BSProcessHandle *)arg1 forReason:(NSString *)arg2;

@end


@protocol MTTimerManagerIntentSupport <NSObject>

@required

- (NAFuture *)addTimer:(NSObject<MTTimerIntentSupport> *)arg1;
- (NAFuture *)removeTimer:(NSObject<MTTimerIntentSupport> *)arg1;
- (NAFuture *)timers;
- (NAFuture *)updateTimer:(NSObject<MTTimerIntentSupport> *)arg1;

@optional

- (NAFuture *)sleepTimersWithState:(unsigned long long)arg1;

@end

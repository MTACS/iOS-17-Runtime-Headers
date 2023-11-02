
@protocol ITIdleTimerStateRequestHandling <NSObject>

@required

- (void)addIdleTimerConfiguration:(ITIdleTimerConfiguration *)arg1 forReason:(NSString *)arg2 error:(id*)arg3;
- (bool)isIdleTimerServiceAvailable;
- (void)removeIdleTimerConfiguration:(ITIdleTimerConfiguration *)arg1 forReason:(NSString *)arg2;

@end

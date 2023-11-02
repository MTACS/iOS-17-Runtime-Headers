
@protocol ITIdleTimerServerInterface <NSObject>

@required

- (void)addIdleTimerServiceConfiguration:(ITIdleTimerConfiguration *)arg1 forReason:(NSString *)arg2 error:(id*)arg3;
- (bool)isIdleTimerServiceAvailableWithError:(id*)arg1;
- (void)removeIdleTimerServiceConfiguration:(ITIdleTimerConfiguration *)arg1 forReason:(NSString *)arg2 error:(id*)arg3;

@end

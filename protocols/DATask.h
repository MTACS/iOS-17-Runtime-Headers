
@protocol DATask <NSObject>

@required

- (void)cancelTaskWithReason:(int)arg1 underlyingError:(NSError *)arg2;
- (void)finishWithError:(NSError *)arg1;
- (void)performTask;

@optional

- (void)requestCancelTaskWithReason:(int)arg1;
- (void)setTaskManager:(DATaskManager *)arg1;
- (bool)shouldForceNetworking;
- (bool)shouldHoldPowerAssertion;
- (void)startModal;

@end

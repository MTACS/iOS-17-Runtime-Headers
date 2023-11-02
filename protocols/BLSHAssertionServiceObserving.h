
@protocol BLSHAssertionServiceObserving <NSObject>

@optional

- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 didAcquireAssertion:(id <BLSAsserting>)arg2;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 didCancelAssertion:(id <BLSAsserting>)arg2 withError:(NSError *)arg3;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 didPauseAssertion:(id <BLSAsserting>)arg2;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 didRestartTimeoutTimerForAssertion:(id <BLSAsserting>)arg2;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 didResumeAssertion:(id <BLSAsserting>)arg2;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 failedToAcquireAssertion:(id <BLSAsserting>)arg2 withError:(NSError *)arg3;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 willCancelAssertion:(id <BLSAsserting>)arg2;

@end

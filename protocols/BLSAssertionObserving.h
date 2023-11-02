
@protocol BLSAssertionObserving <NSObject>

@optional

- (void)assertion:(BLSAssertion *)arg1 didCancelWithError:(NSError *)arg2;
- (void)assertion:(BLSAssertion *)arg1 didFailToAcquireWithError:(NSError *)arg2;
- (void)assertionDidPause:(BLSAssertion *)arg1;
- (void)assertionDidResume:(BLSAssertion *)arg1;
- (void)assertionWasAcquired:(BLSAssertion *)arg1;
- (void)assertionWillCancel:(BLSAssertion *)arg1;

@end

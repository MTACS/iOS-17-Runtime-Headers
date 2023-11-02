
@protocol RBSAssertionObserving <NSObject>

@optional

- (void)assertion:(RBSAssertion *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)assertionWillInvalidate:(RBSAssertion *)arg1;

@end

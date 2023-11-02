
@protocol RBAssertionManagerQueueDelegate <NSObject>

@required

- (void)eventQueue:(RBAssertionManagerEventQueue *)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(RBSProcessIdentity *)arg2 expirationTime:(double)arg3;
- (void)eventQueue:(RBAssertionManagerEventQueue *)arg1 handleInvalidationEventForAssertion:(RBAssertion *)arg2;
- (void)eventQueue:(RBAssertionManagerEventQueue *)arg1 handleWarningEventForAssertion:(RBAssertion *)arg2;
- (double)eventQueue:(RBAssertionManagerEventQueue *)arg1 remainingRuntimeForProcessIdentity:(RBSProcessIdentity *)arg2;
- (double)eventQueue:(RBAssertionManagerEventQueue *)arg1 startTimeForAssertion:(RBAssertion *)arg2;

@end

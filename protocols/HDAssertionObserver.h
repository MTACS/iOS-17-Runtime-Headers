
@protocol HDAssertionObserver <NSObject>

@required

- (void)assertionManager:(HDAssertionManager *)arg1 assertionInvalidated:(HDAssertion *)arg2;

@optional

- (void)assertionManager:(HDAssertionManager *)arg1 assertionTaken:(HDAssertion *)arg2;

@end

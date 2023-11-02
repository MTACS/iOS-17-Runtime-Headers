
@protocol RBSTerminationAssertionObserving <RBSAssertionObserving>

@required

- (void)assertionTargetProcessDidExit:(RBSTerminationAssertion *)arg1;

@end

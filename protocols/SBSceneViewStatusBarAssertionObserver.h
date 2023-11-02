
@protocol SBSceneViewStatusBarAssertionObserver <NSObject>

@required

- (void)statusBarAssertionDidInvalidate:(SBSceneViewStatusBarAssertion *)arg1;
- (void)statusBarAssertionDidUpdate:(SBSceneViewStatusBarAssertion *)arg1;

@end

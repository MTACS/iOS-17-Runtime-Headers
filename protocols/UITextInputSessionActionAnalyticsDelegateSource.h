
@protocol UITextInputSessionActionAnalyticsDelegateSource <NSObject>

@required

- (UIResponder *)_delegateAsResponder;
- (NSUUID *)_sessionIdentifier;

@optional

- (void)_didEndEnumerateTextInputActions;
- (void)_didEndEnumeratingAnalytics;
- (void)_didFinishInit;
- (long long)_overrideTextInputSource;

@end

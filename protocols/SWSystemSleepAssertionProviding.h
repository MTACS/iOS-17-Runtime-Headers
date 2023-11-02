
@protocol SWSystemSleepAssertionProviding <NSObject>

@required

- (SWPreventSystemSleepAssertion *)acquirePreventSystemSleepAssertionWithIdentifier:(NSString *)arg1;
- (SWSystemActivityAssertion *)acquireSystemActivityAssertionWithIdentifier:(NSString *)arg1;

@end

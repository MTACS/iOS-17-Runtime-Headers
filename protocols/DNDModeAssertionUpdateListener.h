
@protocol DNDModeAssertionUpdateListener <NSObject>

@optional

- (void)modeAssertionService:(DNDModeAssertionService *)arg1 didReceiveModeAssertionInvalidation:(DNDModeAssertionInvalidation *)arg2;
- (void)modeAssertionService:(DNDModeAssertionService *)arg1 didUpdateActiveModeAssertion:(DNDModeAssertion *)arg2;

@end

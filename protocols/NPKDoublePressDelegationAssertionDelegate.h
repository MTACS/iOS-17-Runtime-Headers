
@protocol NPKDoublePressDelegationAssertionDelegate <NSObject>

@required

- (void)doublePressDelegationAssertion:(NPKDoublePressDelegationAssertion *)arg1 didReceiveTerminalAuthenticationRequestForPassWithUniqueID:(NSString *)arg2;
- (void)doublePressDelegationAssertionDidReceiveDelegatedDoublePressEvent:(NPKDoublePressDelegationAssertion *)arg1;

@end

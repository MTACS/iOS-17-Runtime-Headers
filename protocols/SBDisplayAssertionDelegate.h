
@protocol SBDisplayAssertionDelegate <NSObject>

@required

- (void)displayAssertion:(SBDisplayAssertion *)arg1 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertionDidGainControlOfDisplay:(SBDisplayAssertion *)arg1;

@optional

- (void)displayAssertion:(SBDisplayAssertion *)arg1 didReceiveNewDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertionDidInvalidate:(SBDisplayAssertion *)arg1;

@end

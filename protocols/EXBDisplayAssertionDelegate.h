
@protocol EXBDisplayAssertionDelegate <NSObject>

@required

- (void)displayAssertion:(EXBDisplayAssertion *)arg1 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertionDidGainControlOfDisplay:(EXBDisplayAssertion *)arg1 previousDeactivationReasons:(unsigned long long)arg2;

@optional

- (void)displayAssertion:(EXBDisplayAssertion *)arg1 didReceiveNewDeactivationReasons:(unsigned long long)arg2 previousDeactivationReasons:(unsigned long long)arg3;
- (void)displayAssertionDidInvalidate:(EXBDisplayAssertion *)arg1;

@end

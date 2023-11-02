
@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion {
    SBFAuthenticationAssertion * _disableLockAssertion;
    NSString * _identifier;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidate;

@end

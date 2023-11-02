
@interface SBLockScreenDisabledAssertionManager : NSObject <SBAutoUnlockRule> {
    NSMutableSet * _disableLockScreenIfPossibleAssertions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addLockScreenDisableAssertion:(id)arg1;
- (id)description;
- (id)init;
- (bool)isLockScreenDisabledForAssertion;
- (void)removeLockScreenDisableAssertion:(id)arg1;
- (bool)shouldAutoUnlockForSource:(int)arg1;

@end

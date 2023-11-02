
@protocol BFFPasscodeCreationDelegate <NSObject>

@optional

- (void)passcodeManager:(BFFPasscodeCreationManager *)arg1 didSetPasscodeWithSuccess:(bool)arg2 error:(NSError *)arg3;
- (void)passcodeManager:(BFFPasscodeCreationManager *)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)passcodeManagerWillSetPasscode:(BFFPasscodeCreationManager *)arg1;

@end

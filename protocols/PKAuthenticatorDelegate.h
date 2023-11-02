
@protocol PKAuthenticatorDelegate <NSObject>

@optional

- (void)authenticator:(PKAuthenticator *)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticator:(PKAuthenticator *)arg1 didTransitionToCoachingState:(long long)arg2;
- (void)authenticator:(PKAuthenticator *)arg1 didTransitionToEvaluationStateWithEvent:(struct { long long x1; long long x2; })arg2;
- (void)authenticatorDidActivateTouchID:(PKAuthenticator *)arg1;
- (void)authenticatorDidDeactivateTouchID:(PKAuthenticator *)arg1 status:(long long)arg2;
- (void)authenticatorDidEncounterFingerOff:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterFingerOn:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterMatchMiss:(PKAuthenticator *)arg1;
- (void)authenticatorWillRestartEvaluation:(PKAuthenticator *)arg1;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewController;
- (UIViewController *)passcodeViewController;
- (UIViewController *)passphraseViewController;
- (void)presentPasscodeViewController:(void *)arg1 completionHandler:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 13: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, NSData *, void*
- (void)presentPassphraseViewController:(void *)arg1 completionHandler:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 13: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, NSData *, void*

@end

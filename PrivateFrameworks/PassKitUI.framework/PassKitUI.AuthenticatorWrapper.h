
@interface PassKitUI.AuthenticatorWrapper : NSObject <AKAppleIDAuthenticationInAppContextDelegate, AKSignInViewControllerDelegate, PKAuthenticatorDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _authenticatorModel;
    void authenticator;
    void delegate;
}

- (void).cxx_destruct;
- (void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(struct { long long x1; long long x2; })arg2;
- (void)contextWillBeginPresentingSecondaryUI:(id)arg1;
- (void)dealloc;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewController;
- (id)init;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (bool)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;

@end

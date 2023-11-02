
@protocol ACMSignInDialogDelegate <NSObject>

@required

- (void)onIForgot:(id)arg1;
- (void)onSignIn:(id)arg1;
- (void)onSignInCancel:(id)arg1;
- (void)signInDialogDidBecomeDisabled;
- (void)signInDialogDidBecomeEnabled;
- (void)signInDialogWillBecomeDisabled;
- (void)signInDialogWillBecomeEnabled;

@end


@interface AAUIDeviceLocatorConfirmationUtilities : NSObject

+ (void)_handleFMIPAuthenticationResponse:(id)arg1 withError:(id)arg2 forContext:(id)arg3 completion:(id /* block */)arg4;
+ (id)_messageForError:(id)arg1 account:(id)arg2;
+ (void)_performFMIPAuthenticationForContext:(id)arg1 completion:(id /* block */)arg2;
+ (id)_titleForError:(id)arg1 account:(id)arg2;
+ (void)checkIfWatchHasAppleIDAccount:(id /* block */)arg1;
+ (void)showDisableAlertForAccount:(id)arg1 presentingViewController:(id)arg2 withCompletion:(id /* block */)arg3;
+ (void)showDisableAlertForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 completion:(id /* block */)arg4;
+ (void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(id /* block */)arg5;
+ (void)showDisableAlertForContext:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)showEnableAlertWithCompletion:(id /* block */)arg1;

@end

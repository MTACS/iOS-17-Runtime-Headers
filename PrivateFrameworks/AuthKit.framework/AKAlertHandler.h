
@interface AKAlertHandler : NSObject {
    <AKAlertHandlerUIProvider> * _uiProvider;
}

@property (nonatomic) <AKAlertHandlerUIProvider> *uiProvider;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_URLWithString:(id)arg1 byAppendingParameters:(id)arg2;
- (void)_openPasscodeSetup;
- (void)_openSpyglass;
- (void)_openUpgradeAccountSecurityLevelWithBundleID:(id)arg1;
- (bool)_shouldShowAlertForManagedAccount:(id)arg1 error:(id)arg2;
- (void)_showAlertForAccountNotSupportedWithCompletion:(id /* block */)arg1;
- (void)_showAlertForCannotFindServerWithCompletion:(id /* block */)arg1;
- (void)_showAlertForInsufficientSecurityLevelWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_showAlertForInvalidContextWithCompletion:(id /* block */)arg1;
- (void)_showAlertForManagedAccount:(id)arg1 error:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_showAlertForMissingAppleAccountWithCompletion:(id /* block */)arg1;
- (void)_showAlertForPasscodeSetupWithCompletion:(id /* block */)arg1;
- (void)_showAlertForUnderageAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_showAlertForUnverifiedEmailWithCompletion:(id /* block */)arg1;
- (id)notificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4;
- (void)setUiProvider:(id)arg1;
- (bool)showAlert:(id)arg1 primaryAction:(id /* block */)arg2 altAction:(id /* block */)arg3;
- (bool)showAlert:(id)arg1 primaryAction:(id /* block */)arg2 altAction:(id /* block */)arg3 cancelAction:(id /* block */)arg4;
- (void)showAlertForError:(id)arg1 withAuthKitAccount:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)showAlertForError:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)uiProvider;

@end

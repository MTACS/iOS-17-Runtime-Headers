
@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext {
    UINavigationController * _navigationController;
    NSDictionary * _overrideFirstActionSignal;
    UIViewController * _topViewControllerOnLoadStart;
}

@property (nonatomic) UINavigationController *navigationController;
@property (nonatomic, readonly) NSString *passwordForCreating;
@property (nonatomic, readonly) NSString *usernameForCreating;

- (void).cxx_destruct;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)navigationController;
- (id)passwordForCreating;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)setNavigationController:(id)arg1;
- (id)usernameForCreating;

@end

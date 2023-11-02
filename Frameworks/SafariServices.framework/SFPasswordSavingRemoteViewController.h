
@interface SFPasswordSavingRemoteViewController : SFPasswordRemoteViewController {
    ASAccountAuthenticationModificationController * _accountAuthenticationModificationController;
}

+ (id)passwordServiceViewControllerName;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_accountAuthenticationModificationController;
- (void)accountAuthenticationModificationController:(id)arg1 didFailRequest:(id)arg2 withError:(id)arg3;
- (void)accountAuthenticationModificationController:(id)arg1 didSuccessfullyCompleteRequest:(id)arg2 withUserInfo:(id)arg3;
- (void)performUpgradeToSignInWithAppleForCredential:(id)arg1 serviceIdentifier:(id)arg2;
- (void)performUpgradeToStrongPasswordForCredential:(id)arg1 serviceIdentifier:(id)arg2;
- (id)presentationAnchorForAccountAuthenticationModificationController:(id)arg1;

@end

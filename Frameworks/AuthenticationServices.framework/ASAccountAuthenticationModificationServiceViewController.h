
@interface ASAccountAuthenticationModificationServiceViewController : UIViewController <ASAccountAuthenticationModificationServiceViewControllerProtocol, _ASAccountAuthenticationModificationHostViewControllerDelegate> {
    _ASAccountAuthenticationModificationHostViewController * _accountModificationHostViewController;
    ASPasswordCredential * _existingCredential;
    bool  _isPerformingAppInitiatedUpgrade;
    ASCredentialServiceIdentifier * _serviceIdentifierForUpgrade;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_deleteExistingKeychainCredentialIfPossible;
- (bool)_ensureHostHasAccountModificationEntitlement;
- (void)_findExtensionSupportingUpgrade:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)_isKeychainSyncEnabled;
- (void)_updateCredential:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4;
- (void)_updateKeychainWithNewCredential:(id)arg1;
- (void)_upgradeCredentialToSignInWithApple:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4;
- (void)accountModificationHostViewController:(id)arg1 didFinishWithCredential:(id)arg2 userInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)accountModificationHostViewController:(id)arg1 requestCanceledWithError:(id)arg2 completion:(id /* block */)arg3;
- (void)accountModificationHostViewControllerDidCompleteUpgradeToSignInWithApple:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissUIForAccountModificationHostViewController:(id)arg1;
- (void)presentUIForAccountModificationHostViewController:(id)arg1;
- (void)updateCredential:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extensionUUID:(id)arg4;
- (void)upgradeCredentialToSignInWithApple:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extensionUUID:(id)arg4;

@end

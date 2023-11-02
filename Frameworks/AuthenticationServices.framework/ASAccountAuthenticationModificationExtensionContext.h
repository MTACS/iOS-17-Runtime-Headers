
@interface ASAccountAuthenticationModificationExtensionContext : NSExtensionContext <_ASAccountAuthenticationModificationExtensionContextProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelRequest;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeChangePasswordRequestWithUpdatedCredential:(id)arg1 userInfo:(id)arg2;
- (void)completeUpgradeToSignInWithAppleWithUserInfo:(id)arg1;
- (void)getSignInWithAppleUpgradeAuthorizationWithState:(id)arg1 nonce:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)prepareInterfaceToUpdatePasswordForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 newPassword:(id)arg3 userInfo:(id)arg4 completion:(id /* block */)arg5;
- (void)prepareInterfaceToUpgradeCredentialToSignInWithApple:(id)arg1 serviceIdentifier:(id)arg2 userInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)updatePasswordForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 newPassword:(id)arg3 userInfo:(id)arg4;
- (void)upgradeCredentialToSignInWithApple:(id)arg1 serviceIdentifier:(id)arg2 userInfo:(id)arg3;

@end

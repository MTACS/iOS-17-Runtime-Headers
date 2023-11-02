
@protocol ASAccountAuthenticationModificationServiceViewControllerProtocol

@required

- (void)updateCredential:(ASPasswordCredential *)arg1 forServiceIdentifier:(ASCredentialServiceIdentifier *)arg2 userInfo:(NSDictionary *)arg3 extensionUUID:(NSUUID *)arg4;
- (void)upgradeCredentialToSignInWithApple:(ASPasswordCredential *)arg1 forServiceIdentifier:(ASCredentialServiceIdentifier *)arg2 userInfo:(NSDictionary *)arg3 extensionUUID:(NSUUID *)arg4;

@end


@protocol _ASAccountAuthenticationModificationExtensionContextProtocol <NSObject>

@required

- (void)cancelRequest;
- (void)prepareInterfaceToUpdatePasswordForServiceIdentifier:(void *)arg1 existingCredential:(void *)arg2 newPassword:(void *)arg3 userInfo:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: ASCredentialServiceIdentifier *, ASPasswordCredential *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareInterfaceToUpgradeCredentialToSignInWithApple:(void *)arg1 serviceIdentifier:(void *)arg2 userInfo:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: ASPasswordCredential *, ASCredentialServiceIdentifier *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updatePasswordForServiceIdentifier:(ASCredentialServiceIdentifier *)arg1 existingCredential:(ASPasswordCredential *)arg2 newPassword:(NSString *)arg3 userInfo:(NSDictionary *)arg4;
- (void)upgradeCredentialToSignInWithApple:(ASPasswordCredential *)arg1 serviceIdentifier:(ASCredentialServiceIdentifier *)arg2 userInfo:(NSDictionary *)arg3;

@end

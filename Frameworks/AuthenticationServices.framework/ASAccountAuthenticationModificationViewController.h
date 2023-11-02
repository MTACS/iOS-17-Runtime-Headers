
@interface ASAccountAuthenticationModificationViewController : UIViewController

@property (nonatomic, readonly) ASAccountAuthenticationModificationExtensionContext *extensionContext;

- (void)cancelRequest;
- (void)changePasswordWithoutUserInteractionForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 newPassword:(id)arg3 userInfo:(id)arg4;
- (void)convertAccountToSignInWithAppleWithoutUserInteractionForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 userInfo:(id)arg3;
- (id)extensionContext;
- (void)prepareInterfaceToChangePasswordForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 newPassword:(id)arg3 userInfo:(id)arg4;
- (void)prepareInterfaceToConvertAccountToSignInWithAppleForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 userInfo:(id)arg3;

@end

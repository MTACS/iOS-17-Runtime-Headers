
@protocol _ASAccountAuthenticationModificationExtensionHostContextDelegate <_ASExtensionHostContextDelegate>

@optional

- (void)dismissRequestUI:(_ASAccountAuthenticationModificationExtensionHostContext *)arg1;
- (void)getSignInWithAppleAuthorizationWithState:(void *)arg1 nonce:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASAuthorizationAppleIDCredential *, NSError *, void*
- (void)prepareToCompleteRequestWithHostContext:(void *)arg1 updatedCredential:(void *)arg2 userInfo:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: _ASAccountAuthenticationModificationExtensionHostContext *, ASPasswordCredential *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteUpgradeToSignInWithAppleRequestWithHostContext:(void *)arg1 userInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASAccountAuthenticationModificationExtensionHostContext *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

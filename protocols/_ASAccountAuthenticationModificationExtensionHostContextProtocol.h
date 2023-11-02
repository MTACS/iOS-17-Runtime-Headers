
@protocol _ASAccountAuthenticationModificationExtensionHostContextProtocol <NSObject>

@required

- (void)dismissRequestUI;
- (void)getSignInWithAppleAuthorizationWithState:(void *)arg1 nonce:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASAuthorizationAppleIDCredential *, NSError *, void*
- (void)prepareToCancelRequestWithError:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteRequestWithUpdatedCredential:(void *)arg1 userInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: ASPasswordCredential *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteUpgradeToSignInWithAppleWithUserInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

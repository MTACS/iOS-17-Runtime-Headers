
@interface _ASAccountAuthenticationModificationExtensionHostContext : NSExtensionContext <_ASAccountAuthenticationModificationExtensionHostContextProtocol, _ASExtensionHostContext> {
    <_ASAccountAuthenticationModificationExtensionHostContextDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_ASAccountAuthenticationModificationExtensionHostContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissRequestUI;
- (void)getSignInWithAppleAuthorizationWithState:(id)arg1 nonce:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareToCancelRequestWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareToCompleteRequestWithUpdatedCredential:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareToCompleteUpgradeToSignInWithAppleWithUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end

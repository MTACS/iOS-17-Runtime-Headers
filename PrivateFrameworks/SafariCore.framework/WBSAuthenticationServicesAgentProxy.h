
@interface WBSAuthenticationServicesAgentProxy : NSObject <WBSAuthenticationServicesAgentDelegate, WBSAuthenticationServicesAgentInterface> {
    NSXPCConnection * _connection;
    <WBSAuthenticationServicesAgentDelegate> * _delegate;
}

@property (nonatomic) <WBSAuthenticationServicesAgentDelegate> *delegate;

- (void).cxx_destruct;
- (void)_setUpConnection:(id)arg1;
- (void)completeAssertionWithExternalPasskeyForApplicationIdentifier:(id)arg1 relyingPartyIdentifier:(id)arg2 authenticatorData:(id)arg3 signature:(id)arg4 userHandle:(id)arg5 credentialID:(id)arg6;
- (void)completeAssertionWithExternalPasskeyForWebFrameIdentifier:(id)arg1 relyingPartyIdentifier:(id)arg2 authenticatorData:(id)arg3 signature:(id)arg4 userHandle:(id)arg5 credentialID:(id)arg6;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)getExternalLoginChoiceForApplicationidentifier:(id)arg1 relyingPartyIdentifier:(id)arg2 credentialID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getExternalLoginChoiceForWebFrameIdentifier:(id)arg1 relyingPartyIdentifier:(id)arg2 credentialID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getPasskeyAssertionRequestParametersForApplicationIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPasskeyAssertionRequestParametersForWebFrameIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)newPasskeysAvailableForApplicationIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)test_createPasskeyWithUserName:(id)arg1 displayName:(id)arg2 relyingPartyIdentifier:(id)arg3 userHandle:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)userSelectedAutoFillNearbyDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)userSelectedAutoFillPasskey:(id)arg1 authenticatedLAContext:(id)arg2 savedAccountContext:(id)arg3 completionHandler:(id /* block */)arg4;

@end


@interface ASAuthorizationPlatformPublicKeyCredentialProvider : NSObject <ASAuthorizationProvider, ASAuthorizationWebBrowserPlatformPublicKeyCredentialProvider> {
    NSString * _relyingPartyIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createCredentialAssertionRequestWithChallenge:(id)arg1;
- (id)createCredentialAssertionRequestWithClientData:(id)arg1;
- (id)createCredentialRegistrationRequestWithChallenge:(id)arg1 name:(id)arg2 userID:(id)arg3;
- (id)createCredentialRegistrationRequestWithClientData:(id)arg1 name:(id)arg2 userID:(id)arg3;
- (id)initWithRelyingPartyIdentifier:(id)arg1;
- (id)relyingPartyIdentifier;

@end


@interface ASAuthorizationSecurityKeyPublicKeyCredentialProvider : NSObject <ASAuthorizationProvider> {
    NSString * _relyingPartyIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createCredentialAssertionRequestWithChallenge:(id)arg1;
- (id)createCredentialRegistrationRequestWithChallenge:(id)arg1 displayName:(id)arg2 name:(id)arg3 userID:(id)arg4;
- (id)initWithRelyingPartyIdentifier:(id)arg1;
- (id)relyingPartyIdentifier;

@end

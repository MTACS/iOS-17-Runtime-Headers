
@interface _WKPublicKeyCredentialCreationOptions : NSObject {
    long long  _attestation;
    _WKAuthenticatorSelectionCriteria * _authenticatorSelection;
    NSArray * _excludeCredentials;
    _WKAuthenticationExtensionsClientInputs * _extensions;
    NSData * _extensionsCBOR;
    NSArray * _publicKeyCredentialParamaters;
    _WKPublicKeyCredentialRelyingPartyEntity * _relyingParty;
    NSNumber * _timeout;
    _WKPublicKeyCredentialUserEntity * _user;
}

@property (nonatomic) long long attestation;
@property (nonatomic, retain) _WKAuthenticatorSelectionCriteria *authenticatorSelection;
@property (nonatomic, copy) NSArray *excludeCredentials;
@property (nonatomic, retain) _WKAuthenticationExtensionsClientInputs *extensions;
@property (nonatomic, retain) NSData *extensionsCBOR;
@property (nonatomic, copy) NSArray *publicKeyCredentialParamaters;
@property (nonatomic, retain) _WKPublicKeyCredentialRelyingPartyEntity *relyingParty;
@property (nonatomic, copy) NSNumber *timeout;
@property (nonatomic, retain) _WKPublicKeyCredentialUserEntity *user;

- (long long)attestation;
- (id)authenticatorSelection;
- (void)dealloc;
- (id)excludeCredentials;
- (id)extensions;
- (id)extensionsCBOR;
- (id)initWithRelyingParty:(id)arg1 user:(id)arg2 publicKeyCredentialParamaters:(id)arg3;
- (id)publicKeyCredentialParamaters;
- (id)relyingParty;
- (void)setAttestation:(long long)arg1;
- (void)setAuthenticatorSelection:(id)arg1;
- (void)setExcludeCredentials:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setExtensionsCBOR:(id)arg1;
- (void)setPublicKeyCredentialParamaters:(id)arg1;
- (void)setRelyingParty:(id)arg1;
- (void)setTimeout:(id)arg1;
- (void)setUser:(id)arg1;
- (id)timeout;
- (id)user;

@end

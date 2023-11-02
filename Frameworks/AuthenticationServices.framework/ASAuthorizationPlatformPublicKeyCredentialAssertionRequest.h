
@interface ASAuthorizationPlatformPublicKeyCredentialAssertionRequest : ASAuthorizationRequest <ASAuthorizationPublicKeyCredentialAssertionRequest, ASAuthorizationWebBrowserExternallyAuthenticatableRequest, ASAuthorizationWebBrowserPlatformPublicKeyCredentialAssertionRequest> {
    NSArray * _allowedCredentials;
    LAContext * _authenticatedContext;
    NSData * _challenge;
    ASPublicKeyCredentialClientData * _clientData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput * _largeBlob;
    NSString * _relyingPartyIdentifier;
    bool  _shouldShowHybridTransport;
    NSString * _userVerificationPreference;
}

@property (nonatomic, copy) NSArray *allowedCredentials;
@property (nonatomic, retain) LAContext *authenticatedContext;
@property (nonatomic, copy) NSData *challenge;
@property (nonatomic, readonly) ASPublicKeyCredentialClientData *clientData;
@property (nonatomic, readonly) ASCPublicKeyCredentialAssertionOptions *coreCredentialAssertionOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput *largeBlob;
@property (nonatomic, copy) NSString *relyingPartyIdentifier;
@property (nonatomic) bool shouldShowHybridTransport;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *userVerificationPreference;

- (void).cxx_destruct;
- (bool)_hasAtLeastOneExtension;
- (id)_initWithProvider:(id)arg1 relyingPartyIdentifier:(id)arg2 challenge:(id)arg3 clientData:(id)arg4;
- (id)allowedCredentials;
- (id)authenticatedContext;
- (id)challenge;
- (id)clientData;
- (id)coreCredentialAssertionOptions;
- (id)encodeExtensionsAsCBORWithError:(id*)arg1;
- (id)largeBlob;
- (id)relyingPartyIdentifier;
- (void)setAllowedCredentials:(id)arg1;
- (void)setAuthenticatedContext:(id)arg1;
- (void)setChallenge:(id)arg1;
- (void)setClientData:(id)arg1;
- (void)setLargeBlob:(id)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setShouldShowHybridTransport:(bool)arg1;
- (void)setUserVerificationPreference:(id)arg1;
- (bool)shouldShowHybridTransport;
- (bool)supportsStyle:(long long)arg1;
- (id)userVerificationPreference;

@end

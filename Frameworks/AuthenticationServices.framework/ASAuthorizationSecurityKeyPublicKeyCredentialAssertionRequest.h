
@interface ASAuthorizationSecurityKeyPublicKeyCredentialAssertionRequest : ASAuthorizationRequest <ASAuthorizationPublicKeyCredentialAssertionRequest> {
    NSArray * _allowedCredentials;
    NSData * _challenge;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    NSString * _relyingPartyIdentifier;
    NSString * _userVerificationPreference;
}

@property (nonatomic, copy) NSArray *allowedCredentials;
@property (nonatomic, copy) NSData *challenge;
@property (nonatomic, readonly) ASCPublicKeyCredentialAssertionOptions *coreCredentialAssertionOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *relyingPartyIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *userVerificationPreference;

- (void).cxx_destruct;
- (id)_initWithProvider:(id)arg1 relyingPartyIdentifier:(id)arg2 challenge:(id)arg3;
- (id)allowedCredentials;
- (id)challenge;
- (id)coreCredentialAssertionOptions;
- (id)relyingPartyIdentifier;
- (void)setAllowedCredentials:(id)arg1;
- (void)setChallenge:(id)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setUserVerificationPreference:(id)arg1;
- (bool)supportsStyle:(long long)arg1;
- (id)userVerificationPreference;

@end

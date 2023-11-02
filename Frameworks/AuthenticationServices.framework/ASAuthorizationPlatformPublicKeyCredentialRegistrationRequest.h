
@interface ASAuthorizationPlatformPublicKeyCredentialRegistrationRequest : ASAuthorizationRequest <ASAuthorizationPublicKeyCredentialRegistrationRequest, ASAuthorizationWebBrowserPlatformPublicKeyCredentialRegistrationRequest> {
    NSString * _attestationPreference;
    NSData * _challenge;
    ASPublicKeyCredentialClientData * _clientData;
    NSString * _displayName;
    NSArray * _excludedCredentials;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput * _largeBlob;
    NSString * _name;
    NSString * _relyingPartyIdentifier;
    bool  _shouldShowHybridTransport;
    NSData * _userID;
    NSString * _userVerificationPreference;
}

@property (nonatomic, retain) NSString *attestationPreference;
@property (nonatomic, copy) NSData *challenge;
@property (nonatomic, readonly) ASPublicKeyCredentialClientData *clientData;
@property (nonatomic, readonly) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSArray *excludedCredentials;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput *largeBlob;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (nonatomic) bool shouldShowHybridTransport;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *userID;
@property (nonatomic, retain) NSString *userVerificationPreference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_hasAtLeastOneExtension;
- (id)_initWithProvider:(id)arg1 relyingPartyIdentifier:(id)arg2 challenge:(id)arg3 name:(id)arg4 userID:(id)arg5 clientData:(id)arg6;
- (id)attestationPreference;
- (id)challenge;
- (id)clientData;
- (id)coreCredentialCreationOptions;
- (id)displayName;
- (id)encodeExtensionsAsCBORWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedCredentials;
- (id)initWithCoder:(id)arg1;
- (id)largeBlob;
- (id)name;
- (id)relyingPartyIdentifier;
- (void)setAttestationPreference:(id)arg1;
- (void)setChallenge:(id)arg1;
- (void)setClientData:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExcludedCredentials:(id)arg1;
- (void)setLargeBlob:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldShowHybridTransport:(bool)arg1;
- (void)setUserID:(id)arg1;
- (void)setUserVerificationPreference:(id)arg1;
- (bool)shouldShowHybridTransport;
- (bool)supportsStyle:(long long)arg1;
- (id)userID;
- (id)userVerificationPreference;

@end

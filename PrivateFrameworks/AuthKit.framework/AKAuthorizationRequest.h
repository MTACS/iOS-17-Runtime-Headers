
@interface AKAuthorizationRequest : AKCredentialRequest {
    NSString * _altDSID;
    NSDictionary * _appProvidedData;
    ACAccount * _authkitAccount;
    bool  _clientAuthenticatedExternallyWithPassword;
    NSString * _clientID;
    long long  _existingStatus;
    NSString * _externalAuthToken;
    bool  _isEligibleForUpgradeFromPassword;
    bool  _isSilentAppTransfer;
    NSString * _nonce;
    NSArray * _requestedScopes;
    NSString * _state;
    NSString * _teamID;
}

@property (nonatomic) bool _clientAuthenticatedExternallyWithPassword;
@property (nonatomic, copy) NSString *_externalAuthToken;
@property (nonatomic) bool _isSilentAppTransfer;
@property (nonatomic, copy) NSDictionary *appProvidedData;
@property (nonatomic, retain) ACAccount *authkitAccount;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic) long long existingStatus;
@property (nonatomic, readonly) ACAccount *internalAuthKitAccount;
@property (nonatomic) bool isEligibleForUpgradeFromPassword;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, copy) NSArray *requestedScopes;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *teamID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_clientAuthenticatedExternallyWithPassword;
- (id)_externalAuthToken;
- (bool)_isSilentAppTransfer;
- (id)_sanitizedCopy;
- (id)altDSID;
- (id)appProvidedData;
- (id)authkitAccount;
- (id)clientID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)existingStatus;
- (id)init;
- (id)initWithAltDSID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)internalAuthKitAccount;
- (bool)isEligibleForUpgradeFromPassword;
- (id)nonce;
- (id)requestedScopes;
- (void)setAppProvidedData:(id)arg1;
- (void)setAuthkitAccount:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setExistingStatus:(long long)arg1;
- (void)setIsEligibleForUpgradeFromPassword:(bool)arg1;
- (void)setNonce:(id)arg1;
- (void)setRequestedScopes:(id)arg1;
- (void)setState:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)set_clientAuthenticatedExternallyWithPassword:(bool)arg1;
- (void)set_externalAuthToken:(id)arg1;
- (void)set_isSilentAppTransfer:(bool)arg1;
- (id)state;
- (id)teamID;

@end

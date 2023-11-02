
@interface OTConfigurationContext : NSObject {
    NSString * _altDSID;
    NSString * _authenticationAppleID;
    CKKSControl * _ckksControl;
    NSString * _containerName;
    NSString * _context;
    NSString * _dsid;
    long long  _escrowFetchSource;
    bool  _octagonCapableRecordsExist;
    OTControl * _otControl;
    bool  _overrideForJoinAfterRestore;
    bool  _overrideForSetupAccountScript;
    NSString * _passwordEquivalentToken;
    id  _sbd;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *authenticationAppleID;
@property (retain) CKKSControl *ckksControl;
@property (nonatomic, copy) NSString *containerName;
@property (nonatomic, copy) NSString *context;
@property (nonatomic, copy) NSString *dsid;
@property (nonatomic, copy) OTEscrowAuthenticationInformation *escrowAuth;
@property (nonatomic) long long escrowFetchSource;
@property (nonatomic) bool octagonCapableRecordsExist;
@property (retain) OTControl *otControl;
@property (nonatomic) bool overrideEscrowCache;
@property (nonatomic) bool overrideForJoinAfterRestore;
@property (nonatomic) bool overrideForSetupAccountScript;
@property (nonatomic, copy) NSString *passwordEquivalentToken;
@property (retain) id sbd;

// Image: /System/Library/Frameworks/Security.framework/Security

- (void).cxx_destruct;
- (id)altDSID;
- (id)authenticationAppleID;
- (id)ckksControl;
- (id)containerName;
- (id)context;
- (id)description;
- (id)dsid;
- (long long)escrowFetchSource;
- (id)init;
- (id)makeCKKSControl:(id*)arg1;
- (id)makeOTControl:(id*)arg1;
- (bool)octagonCapableRecordsExist;
- (id)otControl;
- (bool)overrideEscrowCache;
- (bool)overrideForJoinAfterRestore;
- (bool)overrideForSetupAccountScript;
- (id)passwordEquivalentToken;
- (id)sbd;
- (void)setAltDSID:(id)arg1;
- (void)setAuthenticationAppleID:(id)arg1;
- (void)setCkksControl:(id)arg1;
- (void)setContainerName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setEscrowFetchSource:(long long)arg1;
- (void)setOctagonCapableRecordsExist:(bool)arg1;
- (void)setOtControl:(id)arg1;
- (void)setOverrideEscrowCache:(bool)arg1;
- (void)setOverrideForJoinAfterRestore:(bool)arg1;
- (void)setOverrideForSetupAccountScript:(bool)arg1;
- (void)setPasswordEquivalentToken:(id)arg1;
- (void)setSbd:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust

- (id)escrowAuth;
- (void)setEscrowAuth:(id)arg1;

@end

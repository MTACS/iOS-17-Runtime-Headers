
@interface OTEscrowAuthenticationInformation : PBCodable <NSCopying> {
    NSString * _authenticationAppleid;
    NSString * _authenticationAuthToken;
    NSString * _authenticationDsid;
    NSString * _authenticationEscrowproxyUrl;
    NSString * _authenticationIcloudEnvironment;
    NSString * _authenticationPassword;
    bool  _fmipRecovery;
    NSString * _fmipUuid;
    struct { 
        unsigned int fmipRecovery : 1; 
        unsigned int idmsRecovery : 1; 
    }  _has;
    bool  _idmsRecovery;
}

@property (nonatomic, retain) NSString *authenticationAppleid;
@property (nonatomic, retain) NSString *authenticationAuthToken;
@property (nonatomic, retain) NSString *authenticationDsid;
@property (nonatomic, retain) NSString *authenticationEscrowproxyUrl;
@property (nonatomic, retain) NSString *authenticationIcloudEnvironment;
@property (nonatomic, retain) NSString *authenticationPassword;
@property (nonatomic) bool fmipRecovery;
@property (nonatomic, retain) NSString *fmipUuid;
@property (nonatomic, readonly) bool hasAuthenticationAppleid;
@property (nonatomic, readonly) bool hasAuthenticationAuthToken;
@property (nonatomic, readonly) bool hasAuthenticationDsid;
@property (nonatomic, readonly) bool hasAuthenticationEscrowproxyUrl;
@property (nonatomic, readonly) bool hasAuthenticationIcloudEnvironment;
@property (nonatomic, readonly) bool hasAuthenticationPassword;
@property (nonatomic) bool hasFmipRecovery;
@property (nonatomic, readonly) bool hasFmipUuid;
@property (nonatomic) bool hasIdmsRecovery;
@property (nonatomic) bool idmsRecovery;

- (void).cxx_destruct;
- (id)authenticationAppleid;
- (id)authenticationAuthToken;
- (id)authenticationDsid;
- (id)authenticationEscrowproxyUrl;
- (id)authenticationIcloudEnvironment;
- (id)authenticationPassword;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)fmipRecovery;
- (id)fmipUuid;
- (bool)hasAuthenticationAppleid;
- (bool)hasAuthenticationAuthToken;
- (bool)hasAuthenticationDsid;
- (bool)hasAuthenticationEscrowproxyUrl;
- (bool)hasAuthenticationIcloudEnvironment;
- (bool)hasAuthenticationPassword;
- (bool)hasFmipRecovery;
- (bool)hasFmipUuid;
- (bool)hasIdmsRecovery;
- (unsigned long long)hash;
- (bool)idmsRecovery;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthenticationAppleid:(id)arg1;
- (void)setAuthenticationAuthToken:(id)arg1;
- (void)setAuthenticationDsid:(id)arg1;
- (void)setAuthenticationEscrowproxyUrl:(id)arg1;
- (void)setAuthenticationIcloudEnvironment:(id)arg1;
- (void)setAuthenticationPassword:(id)arg1;
- (void)setFmipRecovery:(bool)arg1;
- (void)setFmipUuid:(id)arg1;
- (void)setHasFmipRecovery:(bool)arg1;
- (void)setHasIdmsRecovery:(bool)arg1;
- (void)setIdmsRecovery:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

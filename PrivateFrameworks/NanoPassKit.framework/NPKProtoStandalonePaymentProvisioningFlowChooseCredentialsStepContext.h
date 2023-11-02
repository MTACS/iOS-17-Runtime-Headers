
@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext : PBCodable <NSCopying> {
    bool  _allowsManualEntry;
    NSMutableArray * _credentials;
    struct { 
        unsigned int allowsManualEntry : 1; 
    }  _has;
    NSMutableArray * _remoteCredentials;
}

@property (nonatomic) bool allowsManualEntry;
@property (nonatomic, retain) NSMutableArray *credentials;
@property (nonatomic) bool hasAllowsManualEntry;
@property (nonatomic, retain) NSMutableArray *remoteCredentials;

+ (Class)credentialsType;
+ (Class)remoteCredentialsType;

- (void).cxx_destruct;
- (void)addCredentials:(id)arg1;
- (void)addRemoteCredentials:(id)arg1;
- (bool)allowsManualEntry;
- (void)clearCredentials;
- (void)clearRemoteCredentials;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentials;
- (id)credentialsAtIndex:(unsigned long long)arg1;
- (unsigned long long)credentialsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowsManualEntry;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)remoteCredentials;
- (id)remoteCredentialsAtIndex:(unsigned long long)arg1;
- (unsigned long long)remoteCredentialsCount;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)setCredentials:(id)arg1;
- (void)setHasAllowsManualEntry:(bool)arg1;
- (void)setRemoteCredentials:(id)arg1;
- (void)writeTo:(id)arg1;

@end

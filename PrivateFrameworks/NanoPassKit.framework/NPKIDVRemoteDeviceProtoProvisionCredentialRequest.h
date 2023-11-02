
@interface NPKIDVRemoteDeviceProtoProvisionCredentialRequest : PBRequest <NSCopying> {
    NSData * _attestationsData;
    NSString * _credentialIdentifier;
    int  _credentialType;
    NSData * _metadataData;
    NSString * _policyIdentifier;
}

@property (nonatomic, retain) NSData *attestationsData;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic) int credentialType;
@property (nonatomic, readonly) bool hasAttestationsData;
@property (nonatomic, readonly) bool hasCredentialIdentifier;
@property (nonatomic, readonly) bool hasMetadataData;
@property (nonatomic, readonly) bool hasPolicyIdentifier;
@property (nonatomic, retain) NSData *metadataData;
@property (nonatomic, retain) NSString *policyIdentifier;

- (void).cxx_destruct;
- (int)StringAsCredentialType:(id)arg1;
- (id)attestationsData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentifier;
- (int)credentialType;
- (id)credentialTypeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAttestationsData;
- (bool)hasCredentialIdentifier;
- (bool)hasMetadataData;
- (bool)hasPolicyIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataData;
- (id)policyIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAttestationsData:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setCredentialType:(int)arg1;
- (void)setMetadataData:(id)arg1;
- (void)setPolicyIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

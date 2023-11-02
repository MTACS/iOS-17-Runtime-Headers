
@interface NPKIDVRemoteDeviceProtoCredentialPropertiesResponse : PBCodable <NSCopying> {
    NSData * _credentialPropertiesData;
    NSData * _errorData;
}

@property (nonatomic, retain) NSData *credentialPropertiesData;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasCredentialPropertiesData;
@property (nonatomic, readonly) bool hasErrorData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialPropertiesData;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasCredentialPropertiesData;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCredentialPropertiesData:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

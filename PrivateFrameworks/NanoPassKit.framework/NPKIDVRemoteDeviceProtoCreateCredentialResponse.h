
@interface NPKIDVRemoteDeviceProtoCreateCredentialResponse : PBCodable <NSCopying> {
    NSString * _credentialIdentifier;
    NSData * _errorData;
}

@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasCredentialIdentifier;
@property (nonatomic, readonly) bool hasErrorData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasCredentialIdentifier;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

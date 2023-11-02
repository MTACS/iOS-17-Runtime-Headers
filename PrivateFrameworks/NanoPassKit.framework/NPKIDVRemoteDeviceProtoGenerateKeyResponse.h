
@interface NPKIDVRemoteDeviceProtoGenerateKeyResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _signingKeyData;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasSigningKeyData;
@property (nonatomic, retain) NSData *signingKeyData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasSigningKeyData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setSigningKeyData:(id)arg1;
- (id)signingKeyData;
- (void)writeTo:(id)arg1;

@end


@interface NPKIDVRemoteDeviceProtoNonceForAuthorizationTokenResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _nonceData;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasNonceData;
@property (nonatomic, retain) NSData *nonceData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasNonceData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nonceData;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setNonceData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

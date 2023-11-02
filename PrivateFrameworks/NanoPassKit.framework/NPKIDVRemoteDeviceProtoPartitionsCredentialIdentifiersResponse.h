
@interface NPKIDVRemoteDeviceProtoPartitionsCredentialIdentifiersResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _partitionsCredentialIdentifiersData;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasPartitionsCredentialIdentifiersData;
@property (nonatomic, retain) NSData *partitionsCredentialIdentifiersData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasPartitionsCredentialIdentifiersData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)partitionsCredentialIdentifiersData;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setPartitionsCredentialIdentifiersData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

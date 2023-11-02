
@interface NPKIDVRemoteDeviceProtoCreateCredentialRequest : PBRequest <NSCopying> {
    NSData * _credentialOptionsData;
    NSString * _partitionIdentifier;
}

@property (nonatomic, retain) NSData *credentialOptionsData;
@property (nonatomic, readonly) bool hasCredentialOptionsData;
@property (nonatomic, readonly) bool hasPartitionIdentifier;
@property (nonatomic, retain) NSString *partitionIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialOptionsData;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCredentialOptionsData;
- (bool)hasPartitionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)partitionIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setCredentialOptionsData:(id)arg1;
- (void)setPartitionIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end


@interface NPKIDVRemoteDeviceProtoEstablishPrearmTrustV2Request : PBRequest <NSCopying> {
    NSData * _trustData;
}

@property (nonatomic, readonly) bool hasTrustData;
@property (nonatomic, retain) NSData *trustData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTrustData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTrustData:(id)arg1;
- (id)trustData;
- (void)writeTo:(id)arg1;

@end

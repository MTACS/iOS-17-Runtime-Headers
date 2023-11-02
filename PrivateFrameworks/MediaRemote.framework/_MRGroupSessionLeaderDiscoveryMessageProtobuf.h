
@interface _MRGroupSessionLeaderDiscoveryMessageProtobuf : PBCodable <NSCopying> {
    NSData * _signature;
}

@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic, retain) NSData *signature;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSignature;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;
- (void)writeTo:(id)arg1;

@end

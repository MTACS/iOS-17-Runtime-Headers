
@interface _MRGroupSessionJoinResponseProtobuf : PBCodable <NSCopying> {
    NSData * _publicSigningKeyData;
}

@property (nonatomic, readonly) bool hasPublicSigningKeyData;
@property (nonatomic, retain) NSData *publicSigningKeyData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPublicSigningKeyData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publicSigningKeyData;
- (bool)readFrom:(id)arg1;
- (void)setPublicSigningKeyData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

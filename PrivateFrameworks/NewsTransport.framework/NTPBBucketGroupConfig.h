
@interface NTPBBucketGroupConfig : PBCodable <NSCopying> {
    long long  _byteCount;
    long long  _numberOfBuckets;
    long long  _validUntilDate;
    int  _version;
}

@property (nonatomic) long long byteCount;
@property (nonatomic) long long numberOfBuckets;
@property (nonatomic) long long validUntilDate;
@property (nonatomic) int version;

- (long long)byteCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)numberOfBuckets;
- (bool)readFrom:(id)arg1;
- (void)setByteCount:(long long)arg1;
- (void)setNumberOfBuckets:(long long)arg1;
- (void)setValidUntilDate:(long long)arg1;
- (void)setVersion:(int)arg1;
- (long long)validUntilDate;
- (int)version;
- (void)writeTo:(id)arg1;

@end

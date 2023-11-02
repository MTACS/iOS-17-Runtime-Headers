
@interface HMPBHomeReference : PBCodable <NSCopying> {
    NSData * _uniqueIdentifier;
}

@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic, retain) NSData *uniqueIdentifier;

+ (id)homeReferenceWithData:(id)arg1;
+ (id)homeReferenceWithHome:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end

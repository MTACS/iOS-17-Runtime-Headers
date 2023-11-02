
@interface HKCodableQueryAnchor : PBCodable <NSCopying> {
    NSData * _encodedQueryAnchorData;
}

@property (nonatomic, retain) NSData *encodedQueryAnchorData;
@property (nonatomic, readonly) bool hasEncodedQueryAnchorData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encodedQueryAnchorData;
- (bool)hasEncodedQueryAnchorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncodedQueryAnchorData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

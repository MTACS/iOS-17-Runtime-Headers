
@interface ModelKeyServerAPISignedKey : PBCodable <NSCopying> {
    NSData * _data;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) bool hasData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

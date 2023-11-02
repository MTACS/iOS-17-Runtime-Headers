
@interface WOHealthBridgeKeyedData : PBCodable <NSCopying> {
    NSString * _key;
    NSData * _ourData;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSData *ourData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (id)ourData;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setOurData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

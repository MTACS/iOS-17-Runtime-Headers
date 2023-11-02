
@interface WOHealthBridgeKeyedString : PBCodable <NSCopying> {
    NSString * _key;
    NSString * _string;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *string;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)writeTo:(id)arg1;

@end

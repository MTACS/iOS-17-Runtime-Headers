
@interface WOHealthBridgeKeyedNumber : PBCodable <NSCopying> {
    NSString * _key;
    double  _number;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic) double number;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (double)number;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setNumber:(double)arg1;
- (void)writeTo:(id)arg1;

@end

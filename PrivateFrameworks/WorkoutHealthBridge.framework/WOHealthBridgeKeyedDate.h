
@interface WOHealthBridgeKeyedDate : PBCodable <NSCopying> {
    NSString * _key;
    double  _timeSinceReferenceDate;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic) double timeSinceReferenceDate;

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
- (void)setTimeSinceReferenceDate:(double)arg1;
- (double)timeSinceReferenceDate;
- (void)writeTo:(id)arg1;

@end

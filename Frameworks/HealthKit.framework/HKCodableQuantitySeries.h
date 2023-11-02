
@interface HKCodableQuantitySeries : PBCodable <NSCopying> {
    NSMutableArray * _values;
}

@property (nonatomic, retain) NSMutableArray *values;

+ (Class)valuesType;

- (void).cxx_destruct;
- (void)addValues:(id)arg1;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;
- (id)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end

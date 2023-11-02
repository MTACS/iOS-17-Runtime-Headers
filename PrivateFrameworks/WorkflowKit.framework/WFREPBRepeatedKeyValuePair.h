
@interface WFREPBRepeatedKeyValuePair : PBCodable <NSCopying> {
    NSString * _key;
    NSMutableArray * _values;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSMutableArray *values;

+ (Class)valueType;

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (void)clearValues;
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
- (void)setValues:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)values;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end

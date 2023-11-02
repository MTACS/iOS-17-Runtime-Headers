
@interface C2MPGenericEventMetric : PBCodable <NSCopying> {
    NSString * _key;
    C2MPGenericEventMetricValue * _value;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) C2MPGenericEventMetricValue *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
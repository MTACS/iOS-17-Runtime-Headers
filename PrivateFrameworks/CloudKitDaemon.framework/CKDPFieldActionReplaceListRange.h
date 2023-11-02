
@interface CKDPFieldActionReplaceListRange : PBCodable <NSCopying> {
    CKDPListRange * _range;
    NSMutableArray * _values;
}

@property (nonatomic, readonly) bool hasRange;
@property (nonatomic, retain) CKDPListRange *range;
@property (nonatomic, retain) NSMutableArray *values;

+ (Class)valueType;

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRange;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)range;
- (bool)readFrom:(id)arg1;
- (void)setRange:(id)arg1;
- (void)setValues:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)values;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end

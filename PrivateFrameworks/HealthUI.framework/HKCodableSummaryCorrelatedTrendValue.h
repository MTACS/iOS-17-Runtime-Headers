
@interface HKCodableSummaryCorrelatedTrendValue : PBCodable <NSCopying> {
    NSString * _objectTypeIdentifier;
    HKCodableSummaryTrendValue * _trendValue;
}

@property (nonatomic, readonly) bool hasObjectTypeIdentifier;
@property (nonatomic, readonly) bool hasTrendValue;
@property (nonatomic, retain) NSString *objectTypeIdentifier;
@property (nonatomic, retain) HKCodableSummaryTrendValue *trendValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasObjectTypeIdentifier;
- (bool)hasTrendValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectTypeIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setObjectTypeIdentifier:(id)arg1;
- (void)setTrendValue:(id)arg1;
- (id)trendValue;
- (void)writeTo:(id)arg1;

@end

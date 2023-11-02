
@interface HKCodableSummaryVisualizationPoint : PBCodable <NSCopying> {
    HKCodableDateInterval * _dateInterval;
    HKCodableQuantity * _value;
    HKCodableQuantity * _value2;
}

@property (nonatomic, retain) HKCodableDateInterval *dateInterval;
@property (nonatomic, readonly) bool hasDateInterval;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) bool hasValue2;
@property (nonatomic, retain) HKCodableQuantity *value;
@property (nonatomic, retain) HKCodableQuantity *value2;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateInterval;
- (bool)hasValue;
- (bool)hasValue2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setValue2:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)value2;
- (void)writeTo:(id)arg1;

@end


@interface HKCodableChartHorizontalTimePeriodDataSourceData : PBCodable <NSCopying> {
    NSMutableArray * _dateIntervalsByValues;
}

@property (nonatomic, retain) NSMutableArray *dateIntervalsByValues;

+ (Class)dateIntervalsByValueType;

- (void).cxx_destruct;
- (void)addDateIntervalsByValue:(id)arg1;
- (void)clearDateIntervalsByValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateIntervalsByValueAtIndex:(unsigned long long)arg1;
- (id)dateIntervalsByValues;
- (unsigned long long)dateIntervalsByValuesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateIntervalsByValues:(id)arg1;
- (void)writeTo:(id)arg1;

@end

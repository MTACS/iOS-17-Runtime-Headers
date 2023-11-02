
@interface HKCodableHorizontalTimePeriodData : PBCodable <NSCopying> {
    NSMutableArray * _dateIntervals;
    struct APPLE_HKCodableHorizontalTimePeriodData_1 { 
        unsigned int value : 1; 
    }  _has;
    long long  _value;
}

@property (nonatomic, retain) NSMutableArray *dateIntervals;
@property (nonatomic) bool hasValue;
@property (nonatomic) long long value;

+ (Class)dateIntervalsType;

- (void).cxx_destruct;
- (void)addDateIntervals:(id)arg1;
- (void)clearDateIntervals;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateIntervals;
- (id)dateIntervalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dateIntervalsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateIntervals:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(long long)arg1;
- (long long)value;
- (void)writeTo:(id)arg1;

@end

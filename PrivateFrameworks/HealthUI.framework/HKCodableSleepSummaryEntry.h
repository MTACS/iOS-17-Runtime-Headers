
@interface HKCodableSleepSummaryEntry : PBCodable <NSCopying> {
    HKCodableDateInterval * _dateInterval;
    NSMutableArray * _periods;
}

@property (nonatomic, retain) HKCodableDateInterval *dateInterval;
@property (nonatomic, readonly) bool hasDateInterval;
@property (nonatomic, retain) NSMutableArray *periods;

+ (Class)periodType;

- (void).cxx_destruct;
- (void)addPeriod:(id)arg1;
- (void)clearPeriods;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateInterval;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)periodAtIndex:(unsigned long long)arg1;
- (id)periods;
- (unsigned long long)periodsCount;
- (bool)readFrom:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setPeriods:(id)arg1;
- (void)writeTo:(id)arg1;

@end


@interface HKCodableSleepPeriodSegment : PBCodable <NSCopying> {
    long long  _category;
    HKCodableDateInterval * _dateInterval;
    struct APPLE_HKCodableSleepPeriodSegment_1 { 
        unsigned int category : 1; 
    }  _has;
    NSMutableArray * _sampleIntervals;
}

@property (nonatomic) long long category;
@property (nonatomic, retain) HKCodableDateInterval *dateInterval;
@property (nonatomic) bool hasCategory;
@property (nonatomic, readonly) bool hasDateInterval;
@property (nonatomic, retain) NSMutableArray *sampleIntervals;

+ (Class)sampleIntervalType;

- (void).cxx_destruct;
- (void)addSampleInterval:(id)arg1;
- (long long)category;
- (void)clearSampleIntervals;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasDateInterval;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sampleIntervalAtIndex:(unsigned long long)arg1;
- (id)sampleIntervals;
- (unsigned long long)sampleIntervalsCount;
- (void)setCategory:(long long)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setSampleIntervals:(id)arg1;
- (void)writeTo:(id)arg1;

@end

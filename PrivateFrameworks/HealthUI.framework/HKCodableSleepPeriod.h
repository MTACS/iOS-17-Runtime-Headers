
@interface HKCodableSleepPeriod : PBCodable <NSCopying> {
    HKCodableDateInterval * _dateInterval;
    NSMutableArray * _segments;
}

@property (nonatomic, retain) HKCodableDateInterval *dateInterval;
@property (nonatomic, readonly) bool hasDateInterval;
@property (nonatomic, retain) NSMutableArray *segments;

+ (Class)segmentType;

- (void).cxx_destruct;
- (void)addSegment:(id)arg1;
- (void)clearSegments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateInterval;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)segmentAtIndex:(unsigned long long)arg1;
- (id)segments;
- (unsigned long long)segmentsCount;
- (void)setDateInterval:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)writeTo:(id)arg1;

@end


@interface BCSHoursMessage : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _days;
    NSMutableArray * _timeRanges;
}

@property (nonatomic, readonly) int*days;
@property (nonatomic, readonly) unsigned long long daysCount;
@property (nonatomic, retain) NSMutableArray *timeRanges;

+ (Class)timeRangeType;

- (void).cxx_destruct;
- (int)StringAsDays:(id)arg1;
- (void)addDay:(int)arg1;
- (void)addTimeRange:(id)arg1;
- (void)clearDays;
- (void)clearTimeRanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dayAtIndex:(unsigned long long)arg1;
- (int*)days;
- (id)daysAsString:(int)arg1;
- (unsigned long long)daysCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDays:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimeRanges:(id)arg1;
- (id)timeRangeAtIndex:(unsigned long long)arg1;
- (id)timeRanges;
- (unsigned long long)timeRangesCount;
- (void)writeTo:(id)arg1;

@end

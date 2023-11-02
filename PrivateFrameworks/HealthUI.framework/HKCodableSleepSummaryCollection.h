
@interface HKCodableSleepSummaryCollection : PBCodable <NSCopying> {
    NSMutableArray * _sleepSummaryEntrys;
}

@property (nonatomic, retain) NSMutableArray *sleepSummaryEntrys;

+ (id)_codableSleepPeriodFromPeriod:(id)arg1;
+ (id)_codableSleepPeriodSegmentFromSegment:(id)arg1;
+ (id)_sleepEntryFromDaySummary:(id)arg1;
+ (id)sleepSummaryCollectionFromDaySummaries:(id)arg1;
+ (Class)sleepSummaryEntryType;

- (void).cxx_destruct;
- (id)_daySummaryFromCodableSummary:(id)arg1 sourceTimeZone:(id)arg2;
- (id)_segmentFromCodableSegment:(id)arg1 sourceTimeZone:(id)arg2;
- (id)_sleepPeriodFromCodablePeriod:(id)arg1 sourceTimeZone:(id)arg2;
- (void)addSleepSummaryEntry:(id)arg1;
- (void)clearSleepSummaryEntrys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daySummariesWithSourceTimeZone:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSleepSummaryEntrys:(id)arg1;
- (id)sleepSummaryEntryAtIndex:(unsigned long long)arg1;
- (id)sleepSummaryEntrys;
- (unsigned long long)sleepSummaryEntrysCount;
- (void)writeTo:(id)arg1;

@end

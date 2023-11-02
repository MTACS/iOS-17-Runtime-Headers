
@interface HKCodableActivitySummaryCollection : PBCodable <NSCopying> {
    NSMutableArray * _activitySummaryEntrys;
}

@property (nonatomic, retain) NSMutableArray *activitySummaryEntrys;

+ (Class)activitySummaryEntryType;

- (void).cxx_destruct;
- (id)activitySummaryEntryAtIndex:(unsigned long long)arg1;
- (id)activitySummaryEntrys;
- (unsigned long long)activitySummaryEntrysCount;
- (void)addActivitySummaryEntry:(id)arg1;
- (void)clearActivitySummaryEntrys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivitySummaryEntrys:(id)arg1;
- (void)writeTo:(id)arg1;

@end


@interface ATXTimelineRelevancePBTimelineRelevanceSuggestion : PBCodable <NSCopying> {
    NSMutableArray * _abuseControlOutcomes;
    NSString * _suggestionID;
    NSMutableArray * _timelineRelevanceScoreEntrys;
}

@property (nonatomic, retain) NSMutableArray *abuseControlOutcomes;
@property (nonatomic, readonly) bool hasSuggestionID;
@property (nonatomic, retain) NSString *suggestionID;
@property (nonatomic, retain) NSMutableArray *timelineRelevanceScoreEntrys;

+ (Class)abuseControlOutcomeType;
+ (Class)timelineRelevanceScoreEntryType;

- (void).cxx_destruct;
- (id)abuseControlOutcomeAtIndex:(unsigned long long)arg1;
- (id)abuseControlOutcomes;
- (unsigned long long)abuseControlOutcomesCount;
- (void)addAbuseControlOutcome:(id)arg1;
- (void)addTimelineRelevanceScoreEntry:(id)arg1;
- (void)clearAbuseControlOutcomes;
- (void)clearTimelineRelevanceScoreEntrys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSuggestionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbuseControlOutcomes:(id)arg1;
- (void)setSuggestionID:(id)arg1;
- (void)setTimelineRelevanceScoreEntrys:(id)arg1;
- (id)suggestionID;
- (id)timelineRelevanceScoreEntryAtIndex:(unsigned long long)arg1;
- (id)timelineRelevanceScoreEntrys;
- (unsigned long long)timelineRelevanceScoreEntrysCount;
- (void)writeTo:(id)arg1;

@end

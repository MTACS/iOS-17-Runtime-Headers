
@interface FCNewsPersonalizationTrainingFeatureFlags : NSObject {
    bool  _enableSingleLifetimeSeenEventPerArticle;
    bool  _enableSyntheticTagFollowEvents;
    NSNumber * _eventLimit;
    long long  _readingHistoryItemCountToProcess;
    NSNumber * _uniqueAggregateLimit;
}

@property (nonatomic) bool enableSingleLifetimeSeenEventPerArticle;
@property (nonatomic) bool enableSyntheticTagFollowEvents;
@property (nonatomic, retain) NSNumber *eventLimit;
@property (nonatomic) long long readingHistoryItemCountToProcess;
@property (nonatomic, retain) NSNumber *uniqueAggregateLimit;

- (void).cxx_destruct;
- (id)description;
- (bool)enableSingleLifetimeSeenEventPerArticle;
- (bool)enableSyntheticTagFollowEvents;
- (id)eventLimit;
- (id)initWithDictionary:(id)arg1;
- (long long)readingHistoryItemCountToProcess;
- (void)setEnableSingleLifetimeSeenEventPerArticle:(bool)arg1;
- (void)setEnableSyntheticTagFollowEvents:(bool)arg1;
- (void)setEventLimit:(id)arg1;
- (void)setReadingHistoryItemCountToProcess:(long long)arg1;
- (void)setUniqueAggregateLimit:(id)arg1;
- (id)uniqueAggregateLimit;

@end

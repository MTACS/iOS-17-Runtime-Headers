
@protocol _CPVisibleResultsFeedback <NSObject>

@required

- (void)addResults:(_CPSearchResultForFeedback *)arg1;
- (void)addUniqueIdentifiersOfVisibleCardSections:(NSString *)arg1;
- (void)addUniqueIdsOfVisibleButtons:(unsigned long long)arg1;
- (void)clearResults;
- (void)clearUniqueIdentifiersOfVisibleCardSections;
- (void)clearUniqueIdsOfVisibleButtons;
- (_CPSearchResultForFeedback *)goTakeoverResult;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)results;
- (_CPSearchResultForFeedback *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setGoTakeoverResult:(_CPSearchResultForFeedback *)arg1;
- (void)setResults:(NSArray *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUniqueIdentifiersOfVisibleCardSections:(NSArray *)arg1;
- (void)setUniqueIdsOfVisibleButtons:(NSArray *)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (NSArray *)uniqueIdentifiersOfVisibleCardSections;
- (NSString *)uniqueIdentifiersOfVisibleCardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uniqueIdentifiersOfVisibleCardSectionsCount;
- (NSArray *)uniqueIdsOfVisibleButtons;
- (unsigned long long)uniqueIdsOfVisibleButtonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uniqueIdsOfVisibleButtonsCount;

@end

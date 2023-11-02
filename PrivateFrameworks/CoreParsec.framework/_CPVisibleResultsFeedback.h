
@interface _CPVisibleResultsFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPVisibleResultsFeedback> {
    _CPSearchResultForFeedback * _goTakeoverResult;
    NSArray * _results;
    unsigned long long  _timestamp;
    int  _triggerEvent;
    NSArray * _uniqueIdentifiersOfVisibleCardSections;
    NSArray * _uniqueIdsOfVisibleButtons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _CPSearchResultForFeedback *goTakeoverResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;
@property (nonatomic, copy) NSArray *uniqueIdentifiersOfVisibleCardSections;
@property (nonatomic, copy) NSArray *uniqueIdsOfVisibleButtons;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)addUniqueIdentifiersOfVisibleCardSections:(id)arg1;
- (void)addUniqueIdsOfVisibleButtons:(unsigned long long)arg1;
- (void)clearResults;
- (void)clearUniqueIdentifiersOfVisibleCardSections;
- (void)clearUniqueIdsOfVisibleButtons;
- (id)goTakeoverResult;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setGoTakeoverResult:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUniqueIdentifiersOfVisibleCardSections:(id)arg1;
- (void)setUniqueIdsOfVisibleButtons:(id)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (id)uniqueIdentifiersOfVisibleCardSections;
- (id)uniqueIdentifiersOfVisibleCardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uniqueIdentifiersOfVisibleCardSectionsCount;
- (id)uniqueIdsOfVisibleButtons;
- (unsigned long long)uniqueIdsOfVisibleButtonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uniqueIdsOfVisibleButtonsCount;
- (void)writeTo:(id)arg1;

@end

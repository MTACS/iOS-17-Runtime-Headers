
@interface ICRankingQueriesDefinition : NSObject {
    NSArray * _expandedTokens;
    NSMutableDictionary * _matchingDescriptorsCache;
    NSArray * _rankingQueries;
    NSArray * _rankingQueryDescriptors;
    NSString * _rankingQueryFlags;
    long long  _rankingQueryType;
}

@property (nonatomic, retain) NSArray *expandedTokens;
@property (nonatomic, retain) NSMutableDictionary *matchingDescriptorsCache;
@property (nonatomic, readonly) NSArray *rankingQueries;
@property (nonatomic, readonly) NSArray *rankingQueryDescriptors;
@property (nonatomic, retain) NSString *rankingQueryFlags;
@property (nonatomic) long long rankingQueryType;

+ (unsigned long long)bucketOfTimeInterval:(double)arg1;
+ (unsigned long long)maxCountOfVariantsForCountOfTokens:(unsigned long long)arg1;
+ (unsigned long long)modificationDateBucketForSearchableItem:(id)arg1;
+ (unsigned long long)relevanceBitFieldForSearchableItem:(id)arg1;

- (void).cxx_destruct;
- (void)addDescriptor:(id)arg1 intoSearchResultHighlightInfoFieldElement:(id)arg2;
- (id)expandedTokens;
- (id)highlightInfoForSearchableItem:(id)arg1;
- (id)initWithExpandedTokens:(id)arg1 rankingQueryType:(long long)arg2 rankingQueryFlags:(id)arg3;
- (id)initWithSearchString:(id)arg1 rankingQueryType:(long long)arg2 rankingQueryFlags:(id)arg3;
- (id)matchingDescriptorsCache;
- (id)matchingDescriptorsForBitFields:(unsigned long long)arg1;
- (id)rankingQueries;
- (id)rankingQueryDescriptors;
- (id)rankingQueryFlags;
- (long long)rankingQueryType;
- (double)rankingScoreForSearchableItem:(id)arg1;
- (void)setExpandedTokens:(id)arg1;
- (void)setMatchingDescriptorsCache:(id)arg1;
- (void)setRankingQueryFlags:(id)arg1;
- (void)setRankingQueryType:(long long)arg1;

@end

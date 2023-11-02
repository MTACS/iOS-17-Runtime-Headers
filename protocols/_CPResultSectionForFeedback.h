
@protocol _CPResultSectionForFeedback <NSObject>

@required

- (void)addResults:(_CPSearchResultForFeedback *)arg1;
- (NSString *)bundleIdentifier;
- (void)clearResults;
- (NSData *)fallbackResultSection;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isInitiallyHidden;
- (NSData *)jsonData;
- (int)knownBundleIdentifier;
- (double)rankingScore;
- (NSArray *)results;
- (_CPSearchResultForFeedback *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setFallbackResultSection:(NSData *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setIsInitiallyHidden:(bool)arg1;
- (void)setKnownBundleIdentifier:(int)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setResults:(NSArray *)arg1;
- (void)setTitleButtonItem:(_CPButtonForFeedback *)arg1;
- (void)setTotalAvailableResults:(unsigned int)arg1;
- (_CPButtonForFeedback *)titleButtonItem;
- (unsigned int)totalAvailableResults;
- (unsigned long long)whichBundleid;

@end

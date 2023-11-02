
@interface _CPResultSectionForFeedback : PBCodable <NSSecureCoding, _CPResultSectionForFeedback> {
    NSString * _bundleIdentifier;
    NSData * _fallbackResultSection;
    NSString * _identifier;
    bool  _isInitiallyHidden;
    int  _knownBundleIdentifier;
    double  _rankingScore;
    NSArray * _results;
    _CPButtonForFeedback * _titleButtonItem;
    unsigned int  _totalAvailableResults;
    unsigned long long  _whichBundleid;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *fallbackResultSection;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isInitiallyHidden;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int knownBundleIdentifier;
@property (nonatomic) double rankingScore;
@property (nonatomic, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic, retain) _CPButtonForFeedback *titleButtonItem;
@property (nonatomic) unsigned int totalAvailableResults;
@property (nonatomic, readonly) unsigned long long whichBundleid;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (id)bundleIdentifier;
- (void)clearBundleid;
- (void)clearResults;
- (id)fallbackResultSection;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInitiallyHidden;
- (int)knownBundleIdentifier;
- (double)rankingScore;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setBundleIdentifier:(id)arg1;
- (void)setFallbackResultSection:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsInitiallyHidden:(bool)arg1;
- (void)setKnownBundleIdentifier:(int)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setResults:(id)arg1;
- (void)setTitleButtonItem:(id)arg1;
- (void)setTotalAvailableResults:(unsigned int)arg1;
- (id)titleButtonItem;
- (unsigned int)totalAvailableResults;
- (unsigned long long)whichBundleid;
- (void)writeTo:(id)arg1;

@end


@interface PRSRankingItemRelativeFeatureContext : NSObject {
    unsigned short  _absRankFeature;
    id /* block */  _comparator;
    NSPredicate * _predicate;
    unsigned short  _relRankFeature;
}

@property (nonatomic) unsigned short absRankFeature;
@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) unsigned short relRankFeature;

+ (void)_associatedPRSL2FeatureFromRelativeFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short*)arg2 relRankFeatureOut:(unsigned short*)arg3;
+ (id)_predicateForRelativeFeature:(unsigned long long)arg1 currentTime:(double)arg2;
+ (id)_relativeContextsForFeatures:(id)arg1 currentTime:(double)arg2;
+ (id /* block */)_resultComparatorForRelativeFeature:(unsigned long long)arg1;
+ (id)relativeContextsForBundle:(id)arg1 currentTime:(double)arg2;
+ (id)relativeContextsForResultSetWithCurrentTime:(double)arg1;

- (void).cxx_destruct;
- (unsigned short)absRankFeature;
- (id /* block */)comparator;
- (id)initWithFeature:(unsigned long long)arg1 currentTime:(double)arg2;
- (id)predicate;
- (unsigned short)relRankFeature;
- (void)setAbsRankFeature:(unsigned short)arg1;
- (void)setComparator:(id /* block */)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRelRankFeature:(unsigned short)arg1;

@end

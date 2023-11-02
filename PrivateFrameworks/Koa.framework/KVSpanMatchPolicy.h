
@interface KVSpanMatchPolicy : NSObject {
    unsigned int  _options;
}

- (float)absoluteThreshold;
- (bool)allowAliasMatch;
- (bool)allowApproxMatch;
- (bool)allowPartialMatch;
- (id)description;
- (bool)enableRankingWithPriors;
- (float)globalRelativeThreshold;
- (id)init;
- (id)initWithOptions:(unsigned int)arg1;
- (float)matchScoreWeight;
- (float)priorScoreWeight;
- (bool)prioritizeExactMatch;
- (float)regionalRelativeThreshold;
- (bool)useTopFive;

@end

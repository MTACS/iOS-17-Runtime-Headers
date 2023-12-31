
@interface _RERuleMLElementComparator : REMLElementComparator {
    NSArray * _comparisonRankingEvaluators;
    NSArray * _filteringEvaluators;
    NSArray * _filteringRules;
    NSArray * _leftRankingEvaluators;
    NSArray * _rankingRules;
    NSArray * _rightRankingEvaluators;
}

+ (id)comparatorWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3;

- (void).cxx_destruct;
- (float)_relevanceForElement:(id)arg1;
- (long long)compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3;
- (unsigned long long)comparisonLevels;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3;
- (bool)shouldHideElement:(id)arg1;

@end

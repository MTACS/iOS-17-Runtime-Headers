
@interface KVSpanMatchResultInterpreter : NSObject {
    KVSpanMatchPolicy * _exactPolicy;
    KVSpanMatchPolicy * _exactWithAliasPolicy;
    KVSpanMatchPolicy * _fuzzyPolicy;
    KVSpanMatchPolicy * _fuzzyWithAliasPolicy;
    NSMutableDictionary * _policyOverrides;
    NSObject<KVPriorRetriever> * _priorRetriever;
}

@property (nonatomic, readonly) KVSpanMatchPolicy *exactPolicy;
@property (nonatomic, readonly) KVSpanMatchPolicy *exactWithAliasPolicy;
@property (nonatomic, readonly) KVSpanMatchPolicy *fuzzyPolicy;
@property (nonatomic, readonly) KVSpanMatchPolicy *fuzzyWithAliasPolicy;

- (void).cxx_destruct;
- (void)_addScoredMatch:(id)arg1 toSortedArray:(id)arg2;
- (id)_applyRegionalSpanRankingToSortedGroupMatches:(id)arg1 regionalThresholdScalar:(float)arg2 globalThresholdScalar:(float)arg3 maximalScore:(float)arg4;
- (bool)_checkEligibilityOfSpanMatch:(id)arg1 allowPartialMatch:(bool)arg2 allowApproxMatch:(bool)arg3 allowAliasMatch:(bool)arg4 query:(id)arg5;
- (id)_filterRankAndThresholdCandidates:(id)arg1 ofQuery:(id)arg2 withPolicy:(id)arg3;
- (id)_groupKeyForFieldMatches:(id)arg1 itemType:(long long)arg2;
- (id)_rankerPolicyForGroupKey:(id)arg1;
- (float)_scoreSpanMatch:(id)arg1 policy:(id)arg2;
- (id)_sortCandidates:(id)arg1;
- (void)addPolicyOverride:(id)arg1 forItemType:(long long)arg2;
- (id)exactPolicy;
- (id)exactWithAliasPolicy;
- (id)fuzzyPolicy;
- (id)fuzzyWithAliasPolicy;
- (id)init;
- (id)initWithPriorRetriever:(id)arg1;
- (id)interpretSpanMatchResults:(id)arg1 ofQuery:(id)arg2;

@end

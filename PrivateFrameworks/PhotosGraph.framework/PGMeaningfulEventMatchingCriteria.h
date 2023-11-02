
@interface PGMeaningfulEventMatchingCriteria : PGMeaningfulEventCriteria {
    PGMeaningfulEventProcessorCache * _cache;
    bool  _interestingForMeaningInference;
    PGGraphMomentNode * _momentNode;
}

@property (nonatomic) bool interestingForMeaningInference;
@property (nonatomic, readonly) PGGraphMomentNode *momentNode;

- (void).cxx_destruct;
- (void)_calculateMatchingScoreForLocationsWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(id /* block */)arg3;
- (void)_calculateMatchingScoreForPOIROIWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(id /* block */)arg3;
- (double)_calculateMatchingScoreForPartOfDayWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 requiresStrictMatching:(bool)arg3;
- (void)_calculateMatchingScoreForScenesWithRequiredCriteria:(id)arg1 result:(id /* block */)arg2;
- (id)debugDescription;
- (id)initWithMoment:(id)arg1 cache:(id)arg2;
- (bool)interestingForMeaningInference;
- (id)matchingResultWithCriteria:(id)arg1;
- (double)matchingScoreWithCriteria:(id)arg1 failed:(bool*)arg2 isReliable:(bool*)arg3;
- (id)momentNode;
- (void)setInterestingForMeaningInference:(bool)arg1;

@end

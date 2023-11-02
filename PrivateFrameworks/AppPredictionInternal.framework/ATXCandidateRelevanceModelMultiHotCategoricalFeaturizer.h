
@interface ATXCandidateRelevanceModelMultiHotCategoricalFeaturizer : ATXCandidateRelevanceModelFeaturizer {
    unsigned long long  _maxCategoricalFeaturesCount;
    NSMutableDictionary * _observedFeatureValueCounts;
}

- (void).cxx_destruct;
- (id)categoricalFeatureValuesForContext:(id)arg1 candidate:(id)arg2;
- (id)computeFeatureValueNames;
- (id)featureVectorForContext:(id)arg1 candidate:(id)arg2;
- (id)immutableCopy;
- (id)init;
- (id)initWithObservedFeatureValueCounts:(id)arg1;
- (id)initWithObservedFeatureValueCounts:(id)arg1 maxCategoricalFeaturesCount:(unsigned long long)arg2;
- (void)observeContext:(id)arg1 candidate:(id)arg2;

@end

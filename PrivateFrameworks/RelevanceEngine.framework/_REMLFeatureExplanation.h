
@interface _REMLFeatureExplanation : REMLExplanation {
    REFeatureSet * _features;
    float  _mean;
    float  _variance;
}

+ (id)combinedExplanationsFromExplanations:(id)arg1;

- (void).cxx_destruct;
- (bool)_canCombineWithSimilarExplanation:(id)arg1;
- (long long)_rankExplanationToSimilarExplanation:(id)arg1;
- (id)explanationByCombiningWithExplanation:(id)arg1;
- (id)explanationWithStyle:(unsigned long long)arg1;
- (id)initWithFeature:(id)arg1 mean:(float)arg2 variance:(float)arg3;
- (bool)shouldProvideExplanation;

@end

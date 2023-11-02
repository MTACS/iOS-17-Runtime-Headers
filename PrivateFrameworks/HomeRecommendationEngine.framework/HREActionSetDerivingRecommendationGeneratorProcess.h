
@interface HREActionSetDerivingRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess {
    NSDictionary * _sourceCharacteristics;
}

@property (nonatomic, retain) NSDictionary *sourceCharacteristics;

- (void).cxx_destruct;
- (id)_createRecommendationWithActionSet:(id)arg1 trigger:(id)arg2;
- (id)_recommendationForActionSet:(id)arg1 trigger:(id)arg2;
- (id)generateRecommendations;
- (void)setSourceCharacteristics:(id)arg1;
- (bool)shouldGenerateRecommendations;
- (id)sourceCharacteristics;

@end


@interface ATXFeaturizedInfoSuggestion : NSObject {
    ATXInformationFeatureSet * _featureSet;
    ATXInfoSuggestion * _suggestion;
}

@property (nonatomic, readonly) ATXInformationFeatureSet *featureSet;
@property (nonatomic, readonly) ATXInfoSuggestion *suggestion;

- (void).cxx_destruct;
- (id)featureSet;
- (id)init;
- (id)initWithSuggestion:(id)arg1 featureSet:(id)arg2;
- (double)scoreWithFeatureWeights:(id)arg1;
- (id)suggestion;

@end

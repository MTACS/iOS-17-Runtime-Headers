
@interface FCNewsPersonalizationTrainingConfiguration : NSObject {
    FCNewsPersonalizationAggregateModificationConfigurations * _aggregateModificationConfigurations;
    FCNewsPersonalizationTrainingBiases * _biases;
    double  _decayRate;
    FCNewsPersonalizationEventConditionalsConfigurations * _eventConditionalsConfigurations;
    FCNewsPersonalizationTrainingFeatureFlags * _featureFlags;
    FCNewsPersonalizationFeaturePriorsConfiguration * _priorsConfiguration;
}

@property (nonatomic, retain) FCNewsPersonalizationAggregateModificationConfigurations *aggregateModificationConfigurations;
@property (nonatomic, retain) FCNewsPersonalizationTrainingBiases *biases;
@property (nonatomic) double decayRate;
@property (nonatomic, retain) FCNewsPersonalizationEventConditionalsConfigurations *eventConditionalsConfigurations;
@property (nonatomic, retain) FCNewsPersonalizationTrainingFeatureFlags *featureFlags;
@property (nonatomic, retain) FCNewsPersonalizationFeaturePriorsConfiguration *priorsConfiguration;

- (void).cxx_destruct;
- (id)aggregateModificationConfigurations;
- (id)biases;
- (double)decayRate;
- (id)description;
- (id)eventConditionalsConfigurations;
- (id)featureFlags;
- (id)initWithDictionary:(id)arg1;
- (id)priorsConfiguration;
- (void)setAggregateModificationConfigurations:(id)arg1;
- (void)setBiases:(id)arg1;
- (void)setDecayRate:(double)arg1;
- (void)setEventConditionalsConfigurations:(id)arg1;
- (void)setFeatureFlags:(id)arg1;
- (void)setPriorsConfiguration:(id)arg1;

@end

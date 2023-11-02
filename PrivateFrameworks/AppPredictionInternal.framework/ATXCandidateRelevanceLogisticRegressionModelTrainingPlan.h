
@interface ATXCandidateRelevanceLogisticRegressionModelTrainingPlan : NSObject <ATXCandidateRelevanceModelTrainingPlanProtocol> {
    bool  _intercept;
    float  _learningRate;
    unsigned long long  _minIterations;
    float  _regularizationL1Ratio;
    float  _regularizationRate;
    unsigned long long  _regularizationStrategy;
    float  _stoppingThreshold;
    float  _weightTruncationThreshold;
}

@property (nonatomic, readonly) bool intercept;
@property (nonatomic, readonly) float learningRate;
@property (nonatomic, readonly) unsigned long long minIterations;
@property (nonatomic, readonly) float regularizationL1Ratio;
@property (nonatomic, readonly) float regularizationRate;
@property (nonatomic, readonly) unsigned long long regularizationStrategy;
@property (nonatomic, readonly) float stoppingThreshold;
@property (nonatomic, readonly) float weightTruncationThreshold;

+ (unsigned long long)regularizationStrategyForString:(id)arg1;
+ (id)stringForPMLRegularizationStrategy:(unsigned long long)arg1;

- (id)init;
- (id)initWithIntercept:(bool)arg1 learningRate:(float)arg2 minIterations:(unsigned long long)arg3 stoppingThreshold:(float)arg4 regularizationStrategy:(unsigned long long)arg5 regularizationRate:(float)arg6 regularizationL1Ratio:(float)arg7 weightTruncationThreshold:(float)arg8;
- (id)initWithParameters:(id)arg1;
- (bool)intercept;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXCandidateRelevanceLogisticRegressionModelTrainingPlan:(id)arg1;
- (float)learningRate;
- (unsigned long long)minIterations;
- (float)regularizationL1Ratio;
- (float)regularizationRate;
- (unsigned long long)regularizationStrategy;
- (float)stoppingThreshold;
- (id)trainModelForDataPoints:(id)arg1 candidate:(id)arg2 featurizationManager:(id)arg3;
- (id)truncatedWeightsForWeights:(id)arg1;
- (float)weightTruncationThreshold;

@end

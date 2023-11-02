
@interface MLProgramTrainer : NSObject {
    MLProgramContext * _context;
    <MLFeatureProvider> * _currentUpdatedWeights;
    MLProgramEvaluator * _evaluator;
    double  _learningRate;
    <MLProgramInternal> * _program;
}

@property (nonatomic, retain) MLProgramContext *context;
@property (nonatomic, retain) <MLFeatureProvider> *currentUpdatedWeights;
@property (nonatomic, retain) MLProgramEvaluator *evaluator;
@property (readonly, copy) <MLModeling> *inferenceModel;
@property (nonatomic) double learningRate;
@property (nonatomic, retain) <MLProgramInternal> *program;

- (void).cxx_destruct;
- (id)attachLearningRateToFeatures:(id)arg1;
- (id)context;
- (id)copyCurrentTrainingDelta;
- (id)currentUpdatedWeights;
- (id)evaluateUsingTestData:(id)arg1 error:(id*)arg2;
- (id)evaluateUsingTestData:(id)arg1 evaluationMetricNames:(id)arg2 error:(id*)arg3;
- (id)evaluateUsingTestData:(id)arg1 evaluationMetricNames:(id)arg2 evaluateOnTrainFunction:(bool)arg3 error:(id*)arg4;
- (id)evaluator;
- (id)flattenFeatures:(id)arg1 orderedFeatures:(id)arg2;
- (id)inferenceModel;
- (id)initWithProgram:(id)arg1 learningRate:(double)arg2 error:(id*)arg3;
- (double)learningRate;
- (id)orderedTrainableWeightsNames;
- (id)program;
- (void)setContext:(id)arg1;
- (void)setCurrentUpdatedWeights:(id)arg1;
- (void)setEvaluator:(id)arg1;
- (void)setLearningRate:(double)arg1;
- (void)setProgram:(id)arg1;
- (id)trainUsingTrainingData:(id)arg1 error:(id*)arg2;
- (id)trainUsingTrainingData:(id)arg1 evaluationMetricNames:(id)arg2 error:(id*)arg3;

@end

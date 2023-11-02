
@interface MLProgramEvaluationResult : NSObject {
    <MLBatchProvider> * _evaluationMetrics;
    double  _loss;
}

@property (retain) <MLBatchProvider> *evaluationMetrics;
@property double loss;

- (void).cxx_destruct;
- (id)evaluationMetrics;
- (id)init;
- (double)loss;
- (void)setEvaluationMetrics:(id)arg1;
- (void)setLoss:(double)arg1;

@end

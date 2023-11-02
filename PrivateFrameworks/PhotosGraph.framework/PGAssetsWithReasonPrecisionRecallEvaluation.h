
@interface PGAssetsWithReasonPrecisionRecallEvaluation : PGPrecisionRecallEvaluation {
    NSMutableDictionary * _evaluationByReason;
}

@property (nonatomic, retain) NSMutableDictionary *evaluationByReason;

- (void).cxx_destruct;
- (void)evaluateWithGroundTruthResults:(id)arg1 inferenceResults:(id)arg2 reasonResultByAssetIdentifier:(id)arg3;
- (id)evaluationByReason;
- (id)initWithIdentifier:(id)arg1 category:(id)arg2;
- (void)setEvaluationByReason:(id)arg1;

@end

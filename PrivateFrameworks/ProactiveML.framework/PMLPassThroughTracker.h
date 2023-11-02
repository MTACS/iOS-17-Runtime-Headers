
@interface PMLPassThroughTracker : NSObject <PMLEvaluationTrackerProtocol, PMLLogRegTrackerProtocol> {
    NSString * _planId;
    unsigned long long  _quantizationNumberOfBuckets;
    NSMutableArray * _results;
    NSLock * _resultsLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlanId:(id)arg1 numberOfBuckets:(unsigned long long)arg2;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2;
- (id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5;
- (id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4;

@end

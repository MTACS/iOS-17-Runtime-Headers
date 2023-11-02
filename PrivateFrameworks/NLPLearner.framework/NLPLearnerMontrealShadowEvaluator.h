
@interface NLPLearnerMontrealShadowEvaluator : NLPLearnerShadowEvaluator

+ (void)initialize;
+ (bool)isInTopKPredictions:(unsigned long long)arg1 scores:(float*)arg2 total:(unsigned long long)arg3 topK:(unsigned long long)arg4;

- (id)evaluateModel:(struct MontrealNeuralNetwork { }*)arg1 onData:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)evaluateModel:(id)arg1 onRecords:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4 error:(id*)arg5;
- (id)prepareDataFromRecords:(id)arg1 modelBundle:(id)arg2 error:(id*)arg3;

@end

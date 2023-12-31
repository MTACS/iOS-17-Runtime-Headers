
@protocol PMLLogRegTrackerProtocol <PMLPlistAndChunksSerializableProtocol>

@required

- (NSDictionary *)trackGradient:(PMLDenseVector *)arg1 scaleFactor:(float)arg2 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg3 evaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg4 serverIteration:(unsigned long long)arg5;
- (NSDictionary *)trackWeights:(PMLDenseVector *)arg1 scaleFactor:(float)arg2 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg3 evaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg4;

@end

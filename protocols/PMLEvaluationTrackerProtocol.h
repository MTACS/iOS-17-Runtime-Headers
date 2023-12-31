
@protocol PMLEvaluationTrackerProtocol <PMLPlistAndChunksSerializableProtocol>

@required

- (NSDictionary *)trackEvaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg1 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg2;

@end

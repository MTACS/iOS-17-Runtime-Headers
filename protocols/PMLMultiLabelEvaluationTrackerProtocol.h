
@protocol PMLMultiLabelEvaluationTrackerProtocol <PMLPlistAndChunksSerializableProtocol>

@required

- (NSDictionary *)trackPrecisionAtK:(NSDictionary *)arg1;
- (NSDictionary *)trackPrecisionAtK:(NSDictionary *)arg1 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg2;

@end

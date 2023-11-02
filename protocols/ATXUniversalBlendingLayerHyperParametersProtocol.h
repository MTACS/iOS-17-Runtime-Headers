
@protocol ATXUniversalBlendingLayerHyperParametersProtocol <NSObject>

@required

- (NSString *)abGroup;
- (NSArray *)clientModelPriorityOrder;
- (NSDictionary *)clientModelsToConsiderForConsumerSubType;
- (NSSet *)clientModelsToConsiderForConsumerSubType:(unsigned char)arg1;
- (NSSet *)consumerSubTypesToConsiderForClientModelIds:(NSSet *)arg1;
- (NSSet *)executableTypesToConsiderForConsumerSubType:(unsigned char)arg1;
- (NSArray *)layoutsToConsiderForConsumerSubType:(unsigned char)arg1;
- (long long)minConfidenceCategoryToConsider;
- (double)sessionLogSamplingRate;
- (bool)uiSupportsSuggestion:(ATXProactiveSuggestion *)arg1 consumerSubType:(unsigned char)arg2;

@end

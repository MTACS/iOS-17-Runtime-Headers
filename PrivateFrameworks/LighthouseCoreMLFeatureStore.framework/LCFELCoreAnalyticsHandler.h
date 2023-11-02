
@interface LCFELCoreAnalyticsHandler : NSObject

+ (bool)emitChangePointDetectionEvent:(id)arg1;
+ (bool)emitFeatureImportanceEvent:(id)arg1;
+ (bool)emitFeatureStatisticEvents:(id)arg1 usageType:(long long)arg2 batchProviderInfo:(id)arg3;
+ (bool)emitModelTrainingEvent:(id)arg1;
+ (bool)emitShadowEvaluationEvent:(id)arg1;
+ (void)myAnalyticsSendEvent:(id)arg1 eventPayload:(id)arg2;

@end

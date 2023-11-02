
@interface LCFELEventLogging : NSObject

+ (bool)emitChangePointDetectionEvent:(id)arg1;
+ (bool)emitFeatureImportanceEvent:(id)arg1;
+ (bool)emitModelTrainingEvent:(id)arg1;
+ (bool)emitShadowEvaluationEvent:(id)arg1;

@end

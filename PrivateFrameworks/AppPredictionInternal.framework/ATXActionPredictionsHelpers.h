
@interface ATXActionPredictionsHelpers : NSObject

+ (void)applyJointLogProbabilityToActionPredictions:(id)arg1 withAppActionTypePredictionScore:(double)arg2;
+ (void)applyLogOfLinearProbabilityTransformationToPredictions:(id)arg1;
+ (void)applyLogSoftmaxToPredictions:(id)arg1;
+ (void)applyNormalizationToPredictions:(id)arg1;
+ (void)keepRandomPredictionItems:(id)arg1 limit:(unsigned long long)arg2 predictionItemsToKeep:(void*)arg3;
+ (id)limitTheNumberOfPredictions:(id)arg1 withLimit:(int)arg2;
+ (id)processCandidateActionPredictions:(id)arg1 limit:(int)arg2 predictionItemsToKeep:(void*)arg3;
+ (void)sortPredictions:(id)arg1;
+ (id)sortedPredictions:(id)arg1;

@end

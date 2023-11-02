
@interface ATXAnchorModelPredictionScorer : NSObject

+ (double)normalizeValue:(double)arg1 parameterKey:(id)arg2;
+ (double)predictedProbabilityFromNormalizedClassConditionalProbability:(double)arg1 posteriorProbability:(double)arg2 minutesAfterAnchor:(double)arg3 standardDeviation:(double)arg4 uniqueOccurrences:(double)arg5;

- (double)scoreForTrainingResult:(id)arg1;

@end

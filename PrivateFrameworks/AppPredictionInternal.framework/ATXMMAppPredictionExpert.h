
@interface ATXMMAppPredictionExpert : NSObject

+ (id)anchorTypeForExpert;
+ (void)broadcastMMPredictionsForEvent:(id)arg1 predictions:(id)arg2;
+ (id)correlateTriggerEvents:(id)arg1 withAppLaunches:(id)arg2;
+ (id)createTrainingDataForSubExpertsWithCorrelatedEvents:(id)arg1;
+ (long long)dateBufferForTriggerEvent;
+ (id)fetchAnchorOccurrences;
+ (void)fetchAndHandleTriggerEvent;
+ (id)fetchPredictionsForTriggerEvent:(id)arg1;
+ (bool)isExpertEnabledForPredictions;
+ (void)logPredictedCountMMMetricsEntryForAnchorType:(long long)arg1 numPredictions:(int)arg2;
+ (void)logPredictedScoreMMMetricsEntryForBundle:(id)arg1 anchorType:(long long)arg2 score:(double)arg3;
+ (void)logTriggeredMMMetricsEntryForAnchorType:(long long)arg1;
+ (int)mmAnchorTypeToMMProtobufAnchor:(long long)arg1;
+ (id)notificationIdentifier;
+ (id)pathToPredictionTable;
+ (unsigned int)predictionReasonForExpert;
+ (id)predictionTable;
+ (id)predictionTableFromCache;
+ (id)sampleEventForExpert;
+ (void)serializeAndWritePredictionTable:(id)arg1;
+ (void)setupEventListenerForInferenceWithContext:(id)arg1 rateLimiter:(id)arg2;
+ (bool)shouldHandleTriggerEventWithRateLimiter:(id)arg1;
+ (bool)shouldPredicateOnStartDateForTrigger;
+ (Class)supportedAnchorClass;
+ (void)tagEventWithLOIForEvent:(id)arg1;
+ (void)trainExpertWithAppLaunchEvents:(id)arg1 appLaunchCountedSet:(id)arg2;
+ (id)trainSubExpertWithCorrelatedEvents:(id)arg1 appLaunchCountedSet:(id)arg2;
+ (void)trainSubExpertWithCorrelatedEvents:(id)arg1 indices:(id)arg2 predicates:(id)arg3 appLaunchCountedSet:(id)arg4 predictionTable:(id)arg5;
+ (void)trainSubExpertsWithTrainingData:(id)arg1 correlatedEvents:(id)arg2 appLaunchCountedSet:(id)arg3;

- (id)init;

@end

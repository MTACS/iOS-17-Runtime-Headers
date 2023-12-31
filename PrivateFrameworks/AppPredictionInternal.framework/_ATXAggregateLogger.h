
@interface _ATXAggregateLogger : NSObject {
    long long  _buildType;
    _ATXBundleIdSet * _bundleIdSet;
}

+ (long long)getBuildType;
+ (bool)isConversionOutcome:(unsigned long long)arg1;
+ (id)notificationOutcomesMapping;
+ (id)predictedItemOutcomesMapping;
+ (id)predictionOutcomesMapping;
+ (id)propertyStringForLaunchReason:(id)arg1;
+ (id)quietingSuggestionOutcomesMapping;
+ (id)sharedInstance;
+ (id)stringForPredictedItemOutcome:(unsigned long long)arg1;
+ (id)stringForPredictionOutcome:(unsigned long long)arg1;
+ (id)suggestionCountsArray;
+ (bool)yesWithProbability:(double)arg1;
+ (void)yesWithProbabilityAlwaysSays:(bool)arg1;
+ (void)yesWithProbabilityStopMocking;

- (void).cxx_destruct;
- (id)init;
- (void)logAppLaunch:(id)arg1 bundleId:(id)arg2;
- (void)logInputs:(const float*)arg1 andScore:(float)arg2 withOutcome:(unsigned long long)arg3;
- (void)logLaunchEventWithLaunchReason:(id)arg1 predicted:(bool)arg2 position:(long long)arg3;
- (void)logNotificationInteraction:(long long)arg1 orbed:(bool)arg2 onscreen:(bool)arg3;
- (void)logPredictUninstalledApps:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2;
- (void)logPredictionEventWith:(id)arg1 outcome:(unsigned long long)arg2 forABGroup:(id)arg3 consumerType:(unsigned long long)arg4 andSubType:(unsigned char)arg5;
- (void)logPredictionOfAppWithBundleId:(id)arg1 inputs:(const float*)arg2 outcome:(unsigned long long)arg3 rank:(unsigned long long)arg4 score:(float)arg5 forABGroup:(id)arg6;
- (void)logPromotingSuggestionOutcome:(long long)arg1;
- (void)logQuietingSuggestionOutcome:(long long)arg1;
- (void)logSuggestionCounts:(id)arg1;

@end

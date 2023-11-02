
@interface ATXAppPredictorFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol> {
    _ATXAggregateLogger * _aggregateLogger;
    _ATXFeedback * _feedbackInstance;
    <ATXPETEventTracker2Protocol> * _petTracker;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_appDictionaryForFeedbackItem:(id)arg1;
+ (double)_bucketize:(double)arg1 bucketSize:(double)arg2;
+ (id)_getLastAppIntentsWithEngagedAction:(id)arg1 limit:(int)arg2;
+ (id)_getLastAppsWithEngagedApp:(id)arg1 limit:(int)arg2;
+ (unsigned long long)_outcomeForEngagementType:(unsigned long long)arg1;
+ (void)_sessionObjectLoggingForFeedbackItems:(id)arg1 engagedBundleId:(id)arg2 shownBundleIdIndexes:(id)arg3 consumerType:(unsigned long long)arg4 consumerSubType:(unsigned char)arg5 outcome:(unsigned long long)arg6 context:(id)arg7;
+ (void)_tryLogInstalledAppClipSessionEngagementMetricWithConsumerSubType:(unsigned char)arg1 engagedBundleId:(id)arg2 bundleIdsShown:(id)arg3 explicitlyRejectedBundleIds:(id)arg4 abGroupIdentifier:(id)arg5 tracker:(id)arg6;
+ (void)checkFeedbackContainsUninstalledApps:(id)arg1 consumerSubType:(unsigned char)arg2 aggregateLogger:(id)arg3;
+ (id)constructFeatureDictionaryWithFeedbackItems:(id)arg1 engagedItem:(id)arg2 shownItemIndexes:(id)arg3 consumerType:(unsigned long long)arg4 histogramBundleIdTable:(id)arg5;
+ (id)constructSessionLogDictionaryWithFeedbackItems:(id)arg1 engagedBundleId:(id)arg2 shownBundleIdIndexes:(id)arg3 consumerType:(unsigned long long)arg4 consumerSubType:(unsigned char)arg5 outcome:(unsigned long long)arg6 annotation:(id)arg7 context:(id)arg8;
+ (long long)getEngagedItemIndexWithFeedbackItems:(id)arg1 engagedItem:(id)arg2;
+ (void)logEngagedMMMetricsEntryForBundle:(id)arg1 anchorType:(long long)arg2 consumerSubType:(unsigned char)arg3 score:(double)arg4;
+ (void)logShownMMMetricsEntryForBundle:(id)arg1 anchorType:(long long)arg2 consumerSubType:(unsigned char)arg3 score:(double)arg4;
+ (void)receiveFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 feedbackItemsForResponse:(id)arg3 engagementType:(unsigned long long)arg4 engagedBundleId:(id)arg5 bundleIdsShown:(id)arg6 explicitlyRejectedBundleIds:(id)arg7 abGroupIdentifier:(id)arg8 context:(id)arg9;
+ (void)receiveFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 feedbackItemsForResponse:(id)arg3 engagementType:(unsigned long long)arg4 engagedBundleId:(id)arg5 bundleIdsShown:(id)arg6 explicitlyRejectedBundleIds:(id)arg7 abGroupIdentifier:(id)arg8 context:(id)arg9 feedbackInstance:(id)arg10 aggregateLogger:(id)arg11 petTracker:(id)arg12;

- (void).cxx_destruct;
- (id)_bundleIdsFromProactiveSuggestions:(id)arg1;
- (id)_engagedBundleIdFromEngagedSuggestion:(id)arg1 feedbackSession:(id)arg2;
- (unsigned long long)_engagementTypeFromEngagedSuggestion:(id)arg1 engagedBundleId:(id)arg2 shownBundleIds:(id)arg3 didSearchDuringSession:(bool)arg4;
- (unsigned long long)_engagementTypeFromUIFeedbackResult:(id)arg1 engagedSuggestion:(id)arg2 engagedBundleId:(id)arg3 shownBundleIds:(id)arg4;
- (void)_syncForTests;
- (id)clientModelIds;
- (id)init;
- (id)initWithPredictionContextBuilder:(id)arg1 feedbackInstance:(id)arg2 aggregateLogger:(id)arg3 petTracker:(id)arg4;
- (void)receiveUIFeedbackResult:(id)arg1;

@end

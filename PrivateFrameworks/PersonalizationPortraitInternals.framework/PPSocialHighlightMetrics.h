
@interface PPSocialHighlightMetrics : NSObject

+ (id)SMSBucketDescriptionWithShouldContinueBlock:(id /* block */)arg1;
+ (id)_countSentMessagesInLastWeekMatchingChatType:(id)arg1 shouldContinueBlock:(id /* block */)arg2;
+ (id)_loggableToggleStatus:(unsigned char)arg1;
+ (bool)_queryLinksWithFetchAttributes:(id)arg1 interval:(double)arg2 handler:(id /* block */)arg3;
+ (void)_recordTipsContentEvent:(id)arg1;
+ (id)allHighlightIdentifiersReceivedWithShouldContinueBlock:(id /* block */)arg1;
+ (unsigned long long)countAllLinksReceivedInMessages;
+ (id)countIMessagesSentInPastWeekWithShouldContinueBlock:(id /* block */)arg1;
+ (id)countSMSSentInPastWeekWithShouldContinueBlock:(id /* block */)arg1;
+ (id)feedbackTypeCountsByHighlightIdentifierInInterval:(double)arg1 forTVOS:(bool)arg2;
+ (id)hasSentIMessageWithShouldContinueBlock:(id /* block */)arg1;
+ (id)hasSentSMSWithShouldContinueBlock:(id /* block */)arg1;
+ (id)highlightsReceivedInInterval:(double)arg1 shouldContinueBlock:(id /* block */)arg2;
+ (double)hoursFromSeconds:(double)arg1;
+ (id)iMessageBucketDescriptionWithShouldContinueBlock:(id /* block */)arg1;
+ (void)logConsumptionByClientWithShouldContinueBlock:(id /* block */)arg1;
+ (id)logExpiredLinkStatsWithHighlights:(id)arg1 shouldContinueBlock:(id /* block */)arg2;
+ (void)logFeedbackForAttribution:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3;
+ (void)logFeedbackForHighlight:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3;
+ (void)logLinkExpiredMetricsForHighlight:(id)arg1 feedbackCountsByClient:(id)arg2 forTVOS:(bool)arg3;
+ (void)logMatchedFeedbackForHighlightMatches:(id)arg1 batchSize:(unsigned long long)arg2 type:(int)arg3 client:(id)arg4;
+ (void)logMetricsForExpiringFeedback:(id)arg1;
+ (void)registerCTSDataCollection;
+ (void)registerClientLinkStatus;
+ (void)registerCountLinks;
+ (void)registerDeviceSettingsCollection;
+ (void)registerExpiredLinkReview;
+ (void)registerLogConsumedByClient;
+ (void)registerSampledUnsupportedClientLogging;
+ (id)sendLinkExpiredMessagesForFeedbackCountsByHighlightId:(id)arg1 tvFeedbackCountsByHighlightId:(id)arg2 highlights:(id)arg3;
+ (id)unsupportedClientsFromPastDayWithShouldContinueBlock:(id /* block */)arg1;

@end

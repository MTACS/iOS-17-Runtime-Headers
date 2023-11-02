
@interface APOdmlAnalyticsModelTraining : APOdmlAnalytics

+ (void)_analyticsSendEvent:(id)arg1 eventPayload:(id)arg2;
+ (id)_versionAndIdentifiersFromRecordInfo:(id)arg1 isCounterfactual:(bool)arg2;
+ (id)eventName;
+ (void)sendEvent:(id)arg1 additionalDetails:(id)arg2 info:(id)arg3 isCounterfactual:(bool)arg4 numOfRows:(unsigned long long)arg5 normDelta:(double)arg6;

@end

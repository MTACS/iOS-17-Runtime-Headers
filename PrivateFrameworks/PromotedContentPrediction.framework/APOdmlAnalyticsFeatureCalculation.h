
@interface APOdmlAnalyticsFeatureCalculation : APOdmlAnalytics

+ (void)_analyticsSendEvent:(id)arg1 eventPayload:(id)arg2;
+ (id)_versionAndIdentifiersForNamespace:(id)arg1;
+ (id)eventName;
+ (void)sendEvent:(id)arg1 additionalDetails:(id)arg2 isCounterfactual:(bool)arg3;

@end

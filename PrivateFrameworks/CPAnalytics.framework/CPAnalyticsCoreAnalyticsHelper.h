
@interface CPAnalyticsCoreAnalyticsHelper : NSObject

+ (void)analyticsSendEventLazy:(id)arg1 payload:(id /* block */)arg2;
+ (id)buildCACompatiblePayload:(id)arg1;
+ (id)caCompatiblePayloadKey:(id)arg1;
+ (bool)isValidCoreAnalyticsValueType:(id)arg1;
+ (void)sendCoreAnalyticsEvent:(id)arg1 withPayload:(id)arg2 shouldSanitize:(bool)arg3;

@end

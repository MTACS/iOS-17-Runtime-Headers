
@interface APOdmlAnalytics : NSObject

+ (void)_analyticsSendEvent:(id)arg1 eventPayload:(id)arg2;
+ (id)_versionAndIdentifiers;
+ (id)eventName;
+ (void)sendEvent:(id)arg1 additionalDetails:(id)arg2;
+ (void)sendTimedEvent:(id)arg1 statusSuccess:(bool)arg2 additionalDetails:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;

@end


@interface APAnalytics : NSObject

+ (void)_analyticsSendEvent:(id)arg1 eventPayload:(id)arg2;
+ (void)_sendEvent:(id)arg1 payload:(id)arg2;
+ (bool)_validatePayload:(id)arg1;
+ (void)sendEvent:(id)arg1;
+ (void)sendEvent:(id)arg1 customPayload:(id)arg2;
+ (void)sendEvent:(id)arg1 statusDetail:(id)arg2 startDate:(id)arg3 error:(id)arg4;
+ (void)sendEvent:(id)arg1 valueFloat:(float)arg2;
+ (void)sendEvent:(id)arg1 valueInt:(long long)arg2;
+ (void)sendEventError:(long long)arg1 message:(id)arg2;
+ (void)sendEventLazy:(id)arg1 eventPayloadBuilder:(id /* block */)arg2;
+ (void)sendEventTimed:(long long)arg1 roundtrip:(double)arg2 message:(id)arg3;
+ (void)sendEventTimed:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 message:(id)arg4;

@end

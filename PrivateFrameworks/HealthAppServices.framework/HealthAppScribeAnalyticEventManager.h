
@interface HealthAppScribeAnalyticEventManager : NSObject

- (id)createEventPayloadWithDataType:(id)arg1 requestCategory:(id)arg2 requestType:(long long)arg3 requestInterval:(id)arg4 hourOfDay:(id)arg5 userAction:(id)arg6 hasHealthDataAuthorization:(bool)arg7 isFirstInvocation:(bool)arg8;
- (id)createHealthEventPayloadWithDescription:(id)arg1 requestInterval:(id)arg2;
- (bool)isImproveHealthAndActivityEnabled;
- (void)submitEventWithDataType:(id)arg1 requestCategory:(id)arg2 requestType:(long long)arg3 requestInterval:(id)arg4 hourOfDay:(id)arg5 userAction:(id)arg6 hasHealthDataAuthorization:(bool)arg7 isFirstInvocation:(bool)arg8;
- (void)submitHealthEventWithDescription:(id)arg1 requestInterval:(id)arg2;

@end

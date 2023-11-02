
@interface ATXAppIntentDuetDataProvider : ATXDuetDataProvider

+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

- (id)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3;

@end


@interface ATXLocationVisitDuetDataProvider : ATXDuetDataProvider

+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

- (id)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3 limit:(unsigned long long)arg4 ascending:(bool)arg5;

@end

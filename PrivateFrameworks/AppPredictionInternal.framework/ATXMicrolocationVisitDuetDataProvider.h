
@interface ATXMicrolocationVisitDuetDataProvider : ATXDuetDataProvider

+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

- (void)adjustDatesForMicrolocationEvents:(id)arg1;
- (id)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3;

@end

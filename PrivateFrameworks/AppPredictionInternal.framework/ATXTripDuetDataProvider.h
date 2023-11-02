
@interface ATXTripDuetDataProvider : ATXDuetDataProvider

+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

- (id)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3 limit:(unsigned long long)arg4 ascending:(bool)arg5;
- (id)groupTripsFromPublisher:(id)arg1 startTimestamp:(double)arg2 endTimestamp:(double)arg3;

@end

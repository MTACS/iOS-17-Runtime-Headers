
@interface ATXMagicalMomentsContexts : NSObject

+ (id)eventIdentifierPredicateForValue:(id)arg1;
+ (id)getCurrentLOI;
+ (unsigned long long)getMinTemporalDistanceFromDate:(id)arg1 toVisitsToLOI:(id)arg2;
+ (id)locationOfInterestForDate:(id)arg1 dateIntervalForSearch:(id)arg2;
+ (id)loiPredicateForUUIDString:(id)arg1;
+ (unsigned long long)minDistanceFromDate:(id)arg1 toDateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)partOfWeekPredicatesUsingStartDate:(bool)arg1;
+ (id)timeOfDayPredicatesWithRequestedDurationInHours:(unsigned long long)arg1 shouldPredicateOnStartDate:(bool)arg2;

@end

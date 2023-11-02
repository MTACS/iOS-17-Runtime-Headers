
@interface HKMobilityAnalyticsUtilities : NSObject

+ (id)activeWatchProductType;
+ (id)ageWithHealthStore:(id)arg1 error:(id*)arg2;
+ (id)biologicalSexWithHealthStore:(id)arg1 error:(id*)arg2;
+ (id)numberOfDaysBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)payloadStringForBiologicalSex:(id)arg1;
+ (id)payloadValueForAge:(id)arg1;
+ (id)yearsBetweenStartDateComponents:(id)arg1 endDate:(id)arg2;

@end

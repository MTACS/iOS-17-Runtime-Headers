
@interface PPRoutineSupport : NSObject

+ (id)fetchLocationOfInterestByType:(long long)arg1;
+ (bool)importCoreRoutineDataWithError:(id*)arg1 shouldContinueBlock:(id /* block */)arg2;
+ (id)locationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2;

@end

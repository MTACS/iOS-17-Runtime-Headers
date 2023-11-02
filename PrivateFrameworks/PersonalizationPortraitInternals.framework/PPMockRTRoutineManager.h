
@interface PPMockRTRoutineManager : NSObject

+ (id)defaultManager;
+ (void)initialize;
+ (void)setMockLocationsOfInterest:(id)arg1;

- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(id /* block */)arg3;
- (id)init;

@end

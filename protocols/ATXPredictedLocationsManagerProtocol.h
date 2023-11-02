
@protocol ATXPredictedLocationsManagerProtocol

@required

- (NSArray *)getPredictedExitTimesFromLOIName:(NSString *)arg1 startDate:(NSDate *)arg2;
- (NSArray *)getPredictedLocationsOfInterestFromLOIName:(NSString *)arg1 startDate:(NSDate *)arg2;
- (NSArray *)predictedExitTimes;
- (NSArray *)predictedLocationsOfInterest;

@end

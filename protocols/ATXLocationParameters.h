
@protocol ATXLocationParameters

@required

- (int)currentLocationUpdateInterval;
- (int)frequentLOIMinimumVisits;
- (int)homeLOISearchRadius;
- (int)locationOfInterestSearchRadius;
- (int)locationOfInterestUpdateInterval;
- (int)predictedExitTimesUpdateInterval;
- (int)predictedLocationsOfInterestUpdateInterval;
- (int)previousLOIExpirationTime;
- (int)workLOISearchRadius;

@end

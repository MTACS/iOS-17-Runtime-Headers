
@protocol ATXLocationManagerProtocol

@required

+ (NSString *)stringForLOIType:(long long)arg1;

- (void)beginMonitoringRegion:(CLRegion *)arg1;
- (ATXLocationOfInterest *)cachedLocationOfInterestAtCurrentLocation;
- (void)clearLocationOfInterest;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (void)fetchAllLocationsOfInterest:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchLocationsOfInterestVisitedDuring:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (CLLocation *)getCurrentLocation;
- (CLLocation *)getCurrentPreciseLocation;
- (void)invalidateLocationOfInterestCache;
- (bool)isNearFrequentLocationOfInterest;
- (bool)isNearKnownTypeLocationOfInterest;
- (bool)isNearKnownTypeOrFrequentLocationOfInterest;
- (bool)isTourist;
- (bool)isTouristWithCurrentDate:(NSDate *)arg1;
- (ATXLocationOfInterest *)locationOfInterestAtCurrentLocation;
- (void)locationOfInterestAtCurrentLocationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXLocationOfInterest *, NSError *, void*
- (long long)stateForRegion:(CLRegion *)arg1 withTimeout:(double)arg2;
- (void)stopMonitoringRegionWithIdentifier:(NSString *)arg1;

@end


@interface NTKSiderealDataSource : NSObject {
    NTKPromise * _currentData;
    NSDate * _currentReferenceDate;
    CLLocation * _currentReferenceLocation;
    long long  _locationManagerRefCount;
    NSString * _locationManagerToken;
    NSHashTable * _observers;
    bool  _useXR;
}

+ (bool)_date:(id)arg1 isBetweenDate:(id)arg2 andDate:(id)arg3;
+ (id)_dayEventsFromEvents:(id)arg1;
+ (long long)_endOfDayEventFollowingSolarEvent:(long long)arg1;
+ (id)_eventWithType:(long long)arg1 time:(id)arg2;
+ (struct { double x1; double x2; })_geoLocationForLocation:(id)arg1;
+ (id)_solarEventsForLocation:(struct { double x1; double x2; })arg1 atDate:(id)arg2;
+ (double)_solarPercentageToDegree:(double)arg1;
+ (id)_solarSectorsForEvents:(id)arg1;
+ (long long)_startOfDayEventPreceedingFirstSolarEvent:(long long)arg1;
+ (id)_waypointsForTransitInfo:(id)arg1 andEvents:(id)arg2;
+ (double)reverseInterpolateBetweenCalendricalMidnights:(id)arg1;
+ (id)siderealDataForLocation:(id)arg1 atDate:(id)arg2 useXR:(bool)arg3;

- (void).cxx_destruct;
- (bool)_didLocationChangeSignificantlyFromOldLocation:(id)arg1 toNewLocation:(id)arg2;
- (void)_locationManagerUpdatedLocation:(id)arg1 error:(id)arg2;
- (void)_notifySiderealDataDidUpdate:(id)arg1;
- (void)_updateData;
- (void)_updateDataIfNeededToDate:(id)arg1 atLocation:(id)arg2;
- (void)_updateForSignificantTimeChange:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)ensureLocation:(id)arg1;
- (id)initWithXR:(bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)startLocationUpdates;
- (void)stopLocationUpdates;
- (void)updateModelWithDate:(id)arg1;

@end

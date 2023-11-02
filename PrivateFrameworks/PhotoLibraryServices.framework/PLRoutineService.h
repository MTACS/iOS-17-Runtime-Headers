
@interface PLRoutineService : NSObject {
    NSDateInterval * _fetchDateInterval;
    NSMutableSet * _pendingPinningVisitIdentifiers;
    bool  _routineIsAvailable;
    PLLocationOfInterestCache * _visitsCache;
}

@property (nonatomic, readonly) NSSet *allLocationsOfInterest;
@property (nonatomic, retain) NSDateInterval *fetchDateInterval;
@property (nonatomic, readonly) NSSet *homeLocations;
@property (nonatomic, retain) NSMutableSet *pendingPinningVisitIdentifiers;
@property (nonatomic, readonly) bool routineIsAvailable;
@property (nonatomic, retain) PLLocationOfInterestCache *visitsCache;
@property (nonatomic, readonly) NSSet *workLocations;

- (void).cxx_destruct;
- (void)_buildLocationsOfInterestCache;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2;
- (void)_invalidateLocationsOfInterest;
- (void)_pinPendingVisits;
- (id)allLocationsOfInterest;
- (id)fetchDateInterval;
- (void)fetchLocationsOfInterestIfNeeded;
- (bool)hasLocationsOfInterestInformation;
- (id)homeLocations;
- (id)initWithFetchDateInterval:(id)arg1;
- (void)invalidateLocationsOfInterest;
- (bool)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)lastLocationOfInterestVisit;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationsOfInterestOfType:(long long)arg1;
- (id)pendingPinningVisitIdentifiers;
- (void)postProcessLocationsOfInterest;
- (bool)routineIsAvailable;
- (void)setFetchDateInterval:(id)arg1;
- (void)setPendingPinningVisitIdentifiers:(id)arg1;
- (void)setVisitsCache:(id)arg1;
- (id)visitsCache;
- (id)workLocations;

@end

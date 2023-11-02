
@interface CLSLocationOfInterestCache : NSObject {
    NSMutableSet * _allLocationsOfInterest;
    NSMutableSet * _allLocationsOfInterestTransitionIdentifiers;
    NSDate * _earliestVisitStartDate;
    NSMutableSet * _homeLocations;
    CLSLocationOfInterestVisit * _lastLocationOfInterestVisit;
    unsigned long long  _numberOfLocationsOfInterestVisits;
    NSMutableDictionary * _transitionsCache;
    NSMutableDictionary * _visitsCache;
    NSMutableSet * _workLocations;
}

@property (nonatomic, retain) NSMutableSet *allLocationsOfInterest;
@property (nonatomic, retain) NSMutableSet *allLocationsOfInterestTransitionIdentifiers;
@property (readonly) NSDate *earliestVisitStartDate;
@property (nonatomic, retain) NSMutableSet *homeLocations;
@property (readonly) CLSLocationOfInterestVisit *lastLocationOfInterestVisit;
@property (readonly) unsigned long long numberOfLocationsOfInterest;
@property (readonly) unsigned long long numberOfLocationsOfInterestTransitions;
@property (readonly) unsigned long long numberOfLocationsOfInterestVisits;
@property (nonatomic, retain) NSMutableDictionary *transitionsCache;
@property (nonatomic, retain) NSMutableDictionary *visitsCache;
@property (nonatomic, retain) NSMutableSet *workLocations;

- (void).cxx_destruct;
- (void)addLocationOfInterest:(id)arg1;
- (void)addLocationOfInterestTransition:(id)arg1;
- (id)allLocationsOfInterest;
- (id)allLocationsOfInterestTransitionIdentifiers;
- (id)closestLocationOfInterestVisitToLocation:(id)arg1 withinDistance:(double)arg2 inDateInterval:(id)arg3;
- (id)earliestVisitStartDate;
- (id)homeLocations;
- (id)init;
- (id)lastLocationOfInterestVisit;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)locationsOfInterestOfType:(long long)arg1;
- (id)locationsOfInterestTransitionInDateInterval:(id)arg1;
- (id)locationsOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationsOfInterestVisitsInDateInterval:(id)arg1;
- (unsigned long long)numberOfLocationsOfInterest;
- (unsigned long long)numberOfLocationsOfInterestTransitions;
- (unsigned long long)numberOfLocationsOfInterestVisits;
- (void)setAllLocationsOfInterest:(id)arg1;
- (void)setAllLocationsOfInterestTransitionIdentifiers:(id)arg1;
- (void)setHomeLocations:(id)arg1;
- (void)setTransitionsCache:(id)arg1;
- (void)setVisitsCache:(id)arg1;
- (void)setWorkLocations:(id)arg1;
- (id)transitionsCache;
- (id)visitsCache;
- (id)workLocations;

@end

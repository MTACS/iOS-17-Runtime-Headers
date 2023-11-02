
@interface PLLocationOfInterestCache : NSObject {
    NSMutableSet * _allLocationsOfInterest;
    NSDate * _earliestVisitStartDate;
    NSMutableSet * _homeLocations;
    PLLocationOfInterestVisit * _lastLocationOfInterestVisit;
    unsigned long long  _numberOfLocationsOfInterestTransitions;
    unsigned long long  _numberOfLocationsOfInterestVisits;
    NSMutableDictionary * _visitsCache;
    NSMutableSet * _workLocations;
}

@property (nonatomic, retain) NSMutableSet *allLocationsOfInterest;
@property (readonly) NSDate *earliestVisitStartDate;
@property (nonatomic, retain) NSMutableSet *homeLocations;
@property (readonly) PLLocationOfInterestVisit *lastLocationOfInterestVisit;
@property (readonly) unsigned long long numberOfLocationsOfInterest;
@property (readonly) unsigned long long numberOfLocationsOfInterestTransitions;
@property (readonly) unsigned long long numberOfLocationsOfInterestVisits;
@property (nonatomic, retain) NSMutableDictionary *visitsCache;
@property (nonatomic, retain) NSMutableSet *workLocations;

- (void).cxx_destruct;
- (void)addLocationOfInterest:(id)arg1;
- (id)allLocationsOfInterest;
- (id)closestLocationOfInterestVisitToLocation:(id)arg1 withinDistance:(double)arg2 inDateInterval:(id)arg3;
- (id)earliestVisitStartDate;
- (id)homeLocations;
- (id)init;
- (id)lastLocationOfInterestVisit;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)locationsOfInterestOfType:(long long)arg1;
- (id)locationsOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationsOfInterestVisitsInDateInterval:(id)arg1;
- (unsigned long long)numberOfLocationsOfInterest;
- (unsigned long long)numberOfLocationsOfInterestTransitions;
- (unsigned long long)numberOfLocationsOfInterestVisits;
- (void)setAllLocationsOfInterest:(id)arg1;
- (void)setHomeLocations:(id)arg1;
- (void)setVisitsCache:(id)arg1;
- (void)setWorkLocations:(id)arg1;
- (id)visitsCache;
- (id)workLocations;

@end

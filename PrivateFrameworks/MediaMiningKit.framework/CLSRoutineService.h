
@interface CLSRoutineService : NSObject {
    NSDateInterval * _fetchDateInterval;
    NSMutableSet * _pendingPinningVisitIdentifiers;
    bool  _routineIsAvailable;
    struct CLSRoutineServiceStatisticsStruct { 
        bool routineAvailable; 
        unsigned long long numberOfLocationsOfInterest; 
        unsigned long long numberOfVisits; 
        unsigned long long numberOfTransitions; 
        unsigned long long numberOfTimeMatches; 
        unsigned long long numberOfCloseByLocationMatches; 
        unsigned long long numberOfRemoteLocationMatches; 
        unsigned long long numberOfMatchRequests; 
        double pinningVisitsRatio; 
    }  _statistics;
    CLSLocationOfInterestCache * _visitsCache;
}

@property (nonatomic, retain) NSDateInterval *fetchDateInterval;
@property (nonatomic, retain) NSMutableSet *pendingPinningVisitIdentifiers;
@property (nonatomic) bool routineIsAvailable;
@property (readonly) struct CLSRoutineServiceStatisticsStruct { bool x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; double x9; } statistics;
@property (nonatomic, readonly) CLSLocationOfInterestCache *visitsCache;

- (void).cxx_destruct;
- (void)_buildLocationsOfInterestCache;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1;
- (id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)arg1 routineManager:(id)arg2;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2;
- (void)_pinPendingVisits;
- (id)_placemarksFromLocationsOfInterest:(id)arg1;
- (id)fetchDateInterval;
- (bool)hasLocationsOfInterestInformation;
- (id)initWithFetchDateInterval:(id)arg1;
- (void)invalidateLocationsOfInterest;
- (bool)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestVisitsInDateInterval:(id)arg1;
- (id)locationsOfInterestOfType:(long long)arg1;
- (id)pendingPinningVisitIdentifiers;
- (id)placemarksOfInterestOfType:(long long)arg1;
- (void)postProcessLocationsOfInterest;
- (long long)predominantTransportationModeForDateInterval:(id)arg1 confidence:(double*)arg2;
- (bool)routineIsAvailable;
- (void)setFetchDateInterval:(id)arg1;
- (void)setPendingPinningVisitIdentifiers:(id)arg1;
- (void)setRoutineIsAvailable:(bool)arg1;
- (struct CLSRoutineServiceStatisticsStruct { bool x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; double x9; })statistics;
- (id)visitsCache;

@end

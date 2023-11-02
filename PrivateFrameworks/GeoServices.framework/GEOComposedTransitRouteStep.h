
@interface GEOComposedTransitRouteStep : GEOComposedRouteStep {
    NSArray * _advisories;
    GEOPBTransitHall * _destinationHall;
    GEOPBTransitStop * _destinationStop;
    unsigned int  _duration;
    int  _maneuver;
    GEOPBTransitHall * _originHall;
    GEOPBTransitStop * _originStop;
    NSArray * _routeDetailsPrimaryArtwork;
    <GEOTransitArtworkDataSource> * _routeDetailsSecondaryArtwork;
    unsigned int  _startTime;
    NSArray * _steppingArtwork;
    NSArray * _transitIncidents;
    GEOTransitStep * _transitStep;
}

@property (nonatomic, readonly) GEOPBTransitHall *destinationHall;
@property (nonatomic, readonly) GEOPBTransitStop *destinationStop;
@property (nonatomic, readonly) NSString *destinationStopIntermediateListName;
@property (nonatomic, readonly) unsigned long long destinationTransitEntityMuid;
@property (nonatomic, readonly) int maneuver;
@property (nonatomic, readonly) GEOComposedTransitRouteStep *nextTransitStep;
@property (nonatomic, readonly) GEOPBTransitHall *originHall;
@property (nonatomic, readonly) GEOPBTransitStop *originStop;
@property (nonatomic, readonly) NSString *originStopIntermediateListName;
@property (nonatomic, readonly) unsigned long long originTransitEntityMuid;
@property (nonatomic, readonly) GEOComposedTransitRouteStep *previousTransitStep;
@property (nonatomic, readonly) NSArray *regionAlerts;
@property (nonatomic, readonly) GEOTransitScheduleInfo *scheduleInfo;
@property (nonatomic, readonly) GEOTransitStep *transitStep;
@property (nonatomic, readonly) <GEOTransitVehicleEntries> *vehicleEntries;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_intermediateListNameForStop:(id)arg1;
- (id)_largestEntityAtStop:(id)arg1 passingTest:(id /* block */)arg2;
- (unsigned long long)_muidForStop:(id)arg1;
- (void)_populateArtworksWithDecoderData:(id)arg1;
- (void)_populateIncidentsWithDecoderData:(id)arg1;
- (id)advisories;
- (id)description;
- (id)destinationHall;
- (id)destinationStop;
- (id)destinationStopIntermediateListName;
- (unsigned long long)destinationTransitEntityMuid;
- (double)distance;
- (unsigned int)duration;
- (void)encodeWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; })endGeoCoordinate;
- (id)endingStop;
- (bool)hasDuration;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 routeSegmentType:(long long)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 duration:(unsigned int)arg6 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7;
- (id)instructions;
- (bool)isArrivalStep;
- (bool)isStartOrResumeStep;
- (int)maneuver;
- (id)nextAlightingStep;
- (id)nextBoardingStep;
- (id)nextStop;
- (id)nextTransitStep;
- (id)originHall;
- (id)originStop;
- (id)originStopIntermediateListName;
- (unsigned long long)originTransitEntityMuid;
- (id)previousAlightingStep;
- (id)previousBoardingStep;
- (id)previousStop;
- (id)previousTransitStep;
- (id)regionAlerts;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (id)scheduleInfo;
- (struct { double x1; double x2; double x3; })startGeoCoordinate;
- (unsigned int)startTime;
- (id)startingStop;
- (id)steppingArtwork;
- (id)transitIncidents;
- (id)transitStep;
- (id)vehicleEntries;

@end

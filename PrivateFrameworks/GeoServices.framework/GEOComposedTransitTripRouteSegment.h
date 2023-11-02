
@interface GEOComposedTransitTripRouteSegment : GEOComposedTransitBaseRouteSegment {
    NSArray * _actionSheetDescriptions;
    NSArray * _actionSheetOptionsArtwork;
    NSArray * _alightNotifications;
    unsigned long long  _alightStepIndex;
    unsigned long long  _blockTransferStepIndex;
    unsigned long long  _boardStepIndex;
    unsigned long long  _numberOfTransitStops;
    NSArray * _routeDetailsOptionsArtwork;
    unsigned long long  _selectedRideOptionIndex;
    NSArray * _transitLineOptions;
}

@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *alightStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *boardStep;
@property (nonatomic, readonly) double departureFrequencyMax;
@property (nonatomic, readonly) double departureFrequencyMin;
@property (nonatomic, readonly) NSDate *departureTime;
@property (nonatomic, readonly) NSTimeZone *departureTimeZone;
@property (nonatomic, readonly) NSArray *departureTimes;
@property (nonatomic, readonly) NSDate *lastStepArrivalDate;
@property (nonatomic, readonly) bool notifyBeforeAlightStep;
@property (nonatomic, readonly) unsigned long long rideOptionsCount;
@property (nonatomic, readonly) NSArray *routeLineArtwork;
@property (nonatomic) unsigned long long selectedRideOptionIndex;
@property (nonatomic, readonly) <GEOTransitLine> *transitLine;
@property (nonatomic, readonly) NSArray *transitLineOptions;
@property (nonatomic, readonly) <GEOTransitSystem> *transitSystem;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cacheStepData;
- (bool)_needsStepData;
- (id)actionSheetArtworkForRideOption:(unsigned long long)arg1;
- (id)actionSheetDescriptionForRideOption:(unsigned long long)arg1;
- (id)alightStep;
- (id)blockTransferStep;
- (id)boardStep;
- (double)departureFrequencyMax;
- (double)departureFrequencyMin;
- (id)departureTime;
- (id)departureTimeZone;
- (id)departureTimes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 rideSelections:(id)arg2 sectionOptions:(id)arg3 decoderData:(id)arg4 tripIndex:(unsigned long long)arg5 stepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 transitStepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8 segmentIndex:(unsigned long long)arg9;
- (id)lastStepArrivalDate;
- (bool)notifyBeforeAlightStep;
- (unsigned long long)numberOfTransitStops;
- (unsigned long long)rideOptionsCount;
- (id)routeDetailsPrimaryArtworkForRideOption:(unsigned long long)arg1;
- (id)routeLineArtwork;
- (unsigned long long)selectedRideOptionIndex;
- (void)setSelectedRideOptionIndex:(unsigned long long)arg1;
- (id)transitLine;
- (id)transitLineForRideOption:(unsigned long long)arg1;
- (id)transitLineOptions;
- (id)transitSystem;
- (long long)type;

@end

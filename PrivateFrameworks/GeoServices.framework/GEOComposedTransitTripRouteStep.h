
@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep {
    NSArray * _arrivalTimes;
    NSArray * _arrivalTimesAtOrigin;
    bool  _canPreloadTiles;
    double  _departureTimeIntervalMax;
    double  _departureTimeIntervalMin;
    NSArray * _departureTimes;
    bool  _isBus;
    bool  _isRail;
    NSArray * _routeLineArtwork;
    <GEOTransitLine> * _transitLine;
    <GEOTransitSystem> * _transitSystem;
    GEOTransitVehicleInfo * _transitVehicle;
}

@property (nonatomic, readonly) NSDate *arrivalTime;
@property (nonatomic, readonly) NSDate *arrivalTimeAtOrigin;
@property (nonatomic, readonly) NSTimeZone *arrivalTimeZone;
@property (nonatomic, readonly) NSArray *arrivalTimes;
@property (nonatomic, readonly) NSArray *arrivalTimesAtOrigin;
@property (nonatomic, readonly) GEOTransitBoardingInfo *boardingInfo;
@property (nonatomic, readonly) bool canPreloadTilesForThisStep;
@property (nonatomic, readonly) NSDate *departureTime;
@property (nonatomic, readonly) double departureTimeIntervalMax;
@property (nonatomic, readonly) double departureTimeIntervalMin;
@property (nonatomic, readonly) NSTimeZone *departureTimeZone;
@property (nonatomic, readonly) NSArray *departureTimes;
@property (nonatomic, readonly) bool isBus;
@property (nonatomic, readonly) bool isRail;
@property (nonatomic, readonly) NSArray *routeLineArtwork;
@property (nonatomic, readonly) <GEOTransitLine> *transitLine;
@property (nonatomic, readonly) <GEOTransitSystem> *transitSystem;
@property (nonatomic, readonly) GEOTransitVehicleInfo *transitVehicle;
@property (nonatomic, readonly) GEOComposedTransitTripRouteSegment *tripSegment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalTime;
- (id)arrivalTimeAtOrigin;
- (id)arrivalTimeZone;
- (id)arrivalTimes;
- (id)arrivalTimesAtOrigin;
- (id)boardingInfo;
- (bool)canPreloadTilesForThisStep;
- (id)departureTime;
- (double)departureTimeIntervalMax;
- (double)departureTimeIntervalMin;
- (id)departureTimeZone;
- (id)departureTimes;
- (id)description;
- (unsigned int)duration;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDuration;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)initWithComposedRoute:(id)arg1 routeSegmentType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 line:(id)arg5 maneuverType:(int)arg6 significance:(int)arg7;
- (bool)isBus;
- (bool)isRail;
- (id)routeLineArtwork;
- (id)transitLine;
- (id)transitSystem;
- (id)transitVehicle;
- (id)tripSegment;

@end

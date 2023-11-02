
@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep {
    NSArray * _advisories;
    struct { 
        double latitude; 
        double longitude; 
    }  _endCoordinate;
    NSArray * _routeDetailsPrimaryArtwork;
    <GEOTransitArtworkDataSource> * _routeDetailsSecondaryArtwork;
    struct { 
        double latitude; 
        double longitude; 
    }  _startCoordinate;
    NSArray * _steppingArtwork;
    NSArray * _transitIncidents;
    GEOTransitStep * _transitStep;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitWithDecoderData:(id)arg1;
- (id)advisories;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; })endGeoCoordinate;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 transitStep:(id)arg3 stepIndex:(unsigned long long)arg4 geoStep:(id)arg5 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 maneuverPointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 transitStep:(id)arg3 stepIndex:(unsigned long long)arg4 startCoordinate:(struct { double x1; double x2; })arg5 endCoordinate:(struct { double x1; double x2; })arg6 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7;
- (id)instructions;
- (bool)isArrivalStep;
- (bool)isStartOrResumeStep;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (struct { double x1; double x2; double x3; })startGeoCoordinate;
- (id)steppingArtwork;
- (id)transitIncidents;
- (id)transitStep;

@end

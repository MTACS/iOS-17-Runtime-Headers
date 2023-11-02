
@interface GEOComposedRouteSegment : NSObject <NSSecureCoding> {
    GEOComposedRoute * _composedRoute;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _pointRange;
    unsigned long long  _segmentIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _stepRange;
}

@property (nonatomic) GEOComposedRoute *composedRoute;
@property (nonatomic, readonly) unsigned int endPointIndex;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } endRouteCoordinate;
@property (nonatomic, readonly) unsigned long long endStepIndex;
@property (nonatomic, readonly) GEOPBTransitStop *endingTransitStop;
@property (nonatomic, readonly) double expectedTime;
@property (nonatomic, readonly) unsigned long long numberOfTransitStops;
@property (nonatomic, readonly) unsigned long long pointCount;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } pointRange;
@property (nonatomic, readonly) unsigned long long segmentIndex;
@property (nonatomic, readonly) unsigned int startPointIndex;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } startRouteCoordinate;
@property (nonatomic, readonly) unsigned long long startStepIndex;
@property (nonatomic, readonly) GEOPBTransitStop *startingTransitStop;
@property (nonatomic, readonly) unsigned long long stepCount;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } stepRange;
@property (nonatomic, readonly) NSArray *steps;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } transitStepRange;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)composedRoute;
- (bool)contains:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)endPointIndex;
- (struct { unsigned int x1; float x2; })endRouteCoordinate;
- (unsigned long long)endStepIndex;
- (id)endingTransitStop;
- (double)expectedTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 stepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 segmentIndex:(unsigned long long)arg4;
- (unsigned long long)numberOfTransitStops;
- (unsigned long long)pointCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pointRange;
- (double)remainingDistanceAlongSegmentFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingTimeAlongSegmentFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (unsigned long long)segmentIndex;
- (void)setComposedRoute:(id)arg1;
- (unsigned int)startPointIndex;
- (struct { unsigned int x1; float x2; })startRouteCoordinate;
- (unsigned long long)startStepIndex;
- (id)startingTransitStop;
- (unsigned long long)stepCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })stepRange;
- (id)steps;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })transitStepRange;
- (int)transportType;
- (long long)type;

@end

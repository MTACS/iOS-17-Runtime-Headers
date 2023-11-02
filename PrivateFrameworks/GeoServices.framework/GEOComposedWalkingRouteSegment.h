
@interface GEOComposedWalkingRouteSegment : GEOComposedRouteSegment {
    unsigned long long  _transitIncidentMessageStepIndex;
}

@property (nonatomic, readonly) GEOComposedTransitWalkingRouteStep *arrivalStep;
@property (nonatomic, readonly) GEOComposedWalkingRouteStep *lastWalkingStep;
@property (nonatomic, readonly) unsigned long long transitIncidentMessageStepIndex;

+ (bool)supportsSecureCoding;

- (id)_transitIncidentMessageStep;
- (id)arrivalStep;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 stepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 segmentIndex:(unsigned long long)arg4 transitIncidentMessageStepIndex:(unsigned long long)arg5;
- (id)lastWalkingStep;
- (unsigned long long)transitIncidentMessageStepIndex;
- (long long)type;

@end

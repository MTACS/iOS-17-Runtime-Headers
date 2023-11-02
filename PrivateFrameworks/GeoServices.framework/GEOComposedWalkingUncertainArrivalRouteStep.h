
@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep {
    NSArray * _aggregatedGEOSteps;
    double  _aggregatedStepsDistance;
    unsigned int  _aggregatedStepsDuration;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_calculateAggregatedStepsDistance;
- (unsigned int)_calculateAggregatedStepsDuration;
- (double)distance;
- (unsigned int)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 aggregatedGEOSteps:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 maneuverPointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (bool)isUncertainArrival;

@end

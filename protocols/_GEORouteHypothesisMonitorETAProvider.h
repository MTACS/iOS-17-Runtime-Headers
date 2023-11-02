
@protocol _GEORouteHypothesisMonitorETAProvider

@required

- (double)_hypothesis_travelDuration;
- (double)_hypothesis_travelDurationAggressiveEstimate;
- (double)_hypothesis_travelDurationConservativeEstimate;
- (double)_hypothesis_travelDurationFromStep:(GEOComposedRouteStep *)arg1 stepRemainingDistance:(double)arg2;

@end

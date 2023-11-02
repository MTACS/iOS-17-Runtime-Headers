
@protocol CALNTravelAdvisoryAuthority <NSObject>

@required

- (bool)doesHypothesisSatisfyMinimumAllowableTravelTime:(EKTravelEngineHypothesis *)arg1;
- (double)maximumAllowableTravelTime;
- (double)minimumAllowableTravelTime;
- (bool)travelStateIndicatesTravelingTowardDestination:(long long)arg1;

@end

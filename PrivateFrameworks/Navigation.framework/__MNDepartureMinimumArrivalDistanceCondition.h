
@interface __MNDepartureMinimumArrivalDistanceCondition : NSObject <__MNDepartureCondition> {
    double  _closestDistanceToWaypoint;
    double  _threshold;
    MNDepartureUpdater * _updater;
}

- (void).cxx_destruct;
- (id)initWithUpdater:(id)arg1 distanceThreshold:(double)arg2;
- (double)scoreForLocation:(id)arg1;

@end


@interface __MNDepartureMinimumDepartureDistanceCondition : NSObject <__MNDepartureCondition> {
    NSArray * _arrivalPoints;
    double  _closestDistanceToWaypoint;
    double  _threshold;
    MNDepartureUpdater * _updater;
}

- (void).cxx_destruct;
- (id)initWithUpdater:(id)arg1 arrivalPoints:(id)arg2 distanceThreshold:(double)arg3;
- (id)initWithUpdater:(id)arg1 distanceThreshold:(double)arg2;
- (double)scoreForLocation:(id)arg1;

@end

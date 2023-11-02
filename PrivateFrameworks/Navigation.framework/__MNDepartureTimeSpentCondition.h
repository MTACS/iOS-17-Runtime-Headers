
@interface __MNDepartureTimeSpentCondition : NSObject <__MNDepartureCondition> {
    NSDate * _initialDate;
    double  _threshold;
    MNDepartureUpdater * _updater;
}

- (void).cxx_destruct;
- (id)initWithUpdater:(id)arg1 timeThreshold:(double)arg2;
- (double)scoreForLocation:(id)arg1;

@end

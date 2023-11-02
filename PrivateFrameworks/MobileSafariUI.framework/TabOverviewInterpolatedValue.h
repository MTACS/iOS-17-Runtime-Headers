
@interface TabOverviewInterpolatedValue : NSObject {
    double  _decelerationFactor;
    NSHashTable * _dependants;
    NSHashTable * _dependencies;
    double  _epsilon;
    double  _instantaneousTargetValue;
    double  _lastRenderedValue;
    double  _targetValue;
    double  _value;
}

- (void).cxx_destruct;
- (id)description;

@end

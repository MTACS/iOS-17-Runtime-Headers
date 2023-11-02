
@interface QLPXVelocityNumberFilter : QLPXNumberFilter {
    double  _filteredVelocity;
    double  _lastTime;
    double  _lastValue;
    double  _minimumSampleInterval;
    double  _previousVelocity;
    double  _previousVelocityWeight;
    double  _velocity;
}

+ (id)gestureVelocityFilter;

- (id)initWithInput:(double)arg1;
- (double)updatedOutput;

@end

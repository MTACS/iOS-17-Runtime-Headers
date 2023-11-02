
@interface ARCoachingHeuristicDelay : ARCoachingHeuristic {
    double  _duration;
    double  _endTime;
}

- (id)initWithDuration:(double)arg1;
- (long long)requirements;
- (void)updateWithFrame:(id)arg1 cache:(id)arg2;

@end

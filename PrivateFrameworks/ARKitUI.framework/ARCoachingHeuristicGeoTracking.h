
@interface ARCoachingHeuristicGeoTracking : ARCoachingHeuristic {
    long long  _requirements;
}

- (long long)requirements;
- (bool)satisfied;
- (void)updateWithFrame:(id)arg1 cache:(id)arg2;

@end

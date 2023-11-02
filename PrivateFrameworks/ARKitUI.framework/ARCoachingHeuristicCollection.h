
@interface ARCoachingHeuristicCollection : ARCoachingHeuristic {
    NSMutableArray * _heuristics;
}

- (void).cxx_destruct;
- (void)addHeuristic:(id)arg1;
- (void)clear;
- (id)init;
- (long long)requirements;
- (void)updateWithFrame:(id)arg1 cache:(id)arg2;

@end

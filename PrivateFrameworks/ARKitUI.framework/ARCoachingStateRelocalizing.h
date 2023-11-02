
@interface ARCoachingStateRelocalizing : ARCoachingState {
    ARCoachingHeuristicCollection * _heuristics;
    ARCoachingState * _nextState;
}

- (void).cxx_destruct;
- (id)doAction:(long long)arg1;
- (void)enter;
- (id)initWithView:(id)arg1;
- (long long)requirements;

@end

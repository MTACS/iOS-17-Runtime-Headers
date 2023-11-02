
@interface ARCoachingStateDeactivating : ARCoachingState {
    ARCoachingState * _nextState;
}

- (void).cxx_destruct;
- (id)doAction:(long long)arg1;
- (void)enter;
- (bool)isViewActiveForState;

@end

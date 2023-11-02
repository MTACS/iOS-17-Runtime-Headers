
@interface ARCoachingStateHidden : ARCoachingState {
    double  _autoActivateTime;
    bool  _minimumWaitComplete;
}

- (id)doAction:(long long)arg1;
- (void)enter;
- (void)exit;
- (bool)isViewActiveForState;

@end

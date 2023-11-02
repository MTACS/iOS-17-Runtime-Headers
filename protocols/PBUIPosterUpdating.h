
@protocol PBUIPosterUpdating

@required

- (long long)activeStyleForVariant:(long long)arg1;
- (long long)activeVariant;
- (bool)activelyRequired;
- (bool)landscapeBlurEnabled;
- (void)setActiveStyle:(long long)arg1 forVariant:(long long)arg2;
- (void)setActiveVariant:(long long)arg1;
- (void)setActivelyRequired:(bool)arg1;
- (void)setLandscapeBlurEnabled:(bool)arg1;
- (void)setUnlockProgress:(double)arg1;
- (void)setWakeSourceIsSwipeToUnlock:(bool)arg1;
- (double)unlockProgress;
- (bool)wakeSourceIsSwipeToUnlock;

@end

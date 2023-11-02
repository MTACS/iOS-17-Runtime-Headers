
@protocol SBIdleTimerActivation <SBIdleTimer>

@required

- (void)conformsToSBIdleTimerActivation;
- (bool)isActivated;
- (void)setActivated:(bool)arg1;

@end

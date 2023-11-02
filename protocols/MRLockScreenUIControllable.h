
@protocol MRLockScreenUIControllable <MRRouteRecommendationUIControllable>

@required

- (void)acquireLockScreenControlsAssertion;
- (void)releaseLockScreenControlsAssertion;

@end

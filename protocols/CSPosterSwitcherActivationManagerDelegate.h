
@protocol CSPosterSwitcherActivationManagerDelegate <NSObject>

@required

- (void)posterSwitcherActivationManager:(CSPosterSwitcherActivationManager *)arg1 didChangeToCoachingText:(NSString *)arg2;
- (bool)userPresenceDetectedSinceWake;

@end

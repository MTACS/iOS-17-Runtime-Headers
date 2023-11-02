
@interface SBHomeScreenReturnToSpotlightPolicy : NSObject {
    double  _anchorTimeForReactivationWindow;
    UIApplicationSceneDeactivationAssertion * _homeScreenInactiveReason;
    long long  _lastKnownActivationState;
    double  _reactivationWindowDuration;
    bool  _shouldAnimateReactivation;
    bool  _shouldReactivateSpotlight;
    UIApplicationSceneDeactivationAssertion * _spotlightSceneDeactivationAssertion;
}

@property (nonatomic) double reactivationWindowDuration;
@property (nonatomic) bool shouldAnimateReactivation;

+ (bool)areSpotlightBreadcrumbsEnabled;

- (void).cxx_destruct;
- (double)_elapsedTime;
- (unsigned long long)homeScreenZStackParticipantDidChange:(id)arg1 launchingForSpotlight:(bool)arg2;
- (id)init;
- (double)reactivationWindowDuration;
- (void)setReactivationWindowDuration:(double)arg1;
- (void)setShouldAnimateReactivation:(bool)arg1;
- (bool)shouldAnimateReactivation;
- (void)willReactivateSpotlight;

@end


@interface SBHungApplicationTransitionObserver : NSObject {
    unsigned long long  _previousLockState;
}

- (void)_lockStateDidChange:(id)arg1;
- (void)_notifyUserSwitchedAwayFromApplicationSceneEntities:(id)arg1 withTransitionType:(long long)arg2;
- (bool)_transitionContextRepresentsActivatingAppFromAppSwitcher:(id)arg1;
- (bool)_transitionContextRepresentsActivatingDynamicIslandApp:(id)arg1;
- (bool)_transitionContextRepresentsActivatingHomeScreen:(id)arg1;
- (bool)_transitionContextRepresentsArcSwipingToPreviousApp:(id)arg1;
- (bool)_transitionContextRepresentsTappingBreadcrumbToPreviousApp:(id)arg1;
- (void)activate;
- (void)observeBackgroundingApplicationSceneEntities:(id)arg1 withTransitionContext:(id)arg2;

@end

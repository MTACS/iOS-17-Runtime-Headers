
@interface UIApplicationSceneDeactivationManager : NSObject <BSDescriptionProviding> {
    NSHashTable * _assertions;
    NSMutableSet * _eligibleScenes;
    FBScene * _updatingScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_areEligibleSettings:(id)arg1;
- (unsigned long long)_deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2;
- (bool)_isEligibleScene:(id)arg1;
- (bool)_isEligibleScene:(id)arg1 withSettings:(id)arg2;
- (void)_setDeactivationReasons:(unsigned long long)arg1 onScene:(id)arg2 withSettings:(id)arg3 reason:(id)arg4;
- (void)_trackScene:(id)arg1;
- (void)_untrackScene:(id)arg1;
- (void)_updateScenesWithTransitionContext:(id)arg1 reason:(id)arg2;
- (void)addAssertion:(id)arg1 withTransitionContext:(id)arg2;
- (void)amendSceneSettings:(id)arg1 forScene:(id)arg2;
- (id)assertions;
- (void)beginTrackingScene:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)eligibleScenes;
- (void)endTrackingScene:(id)arg1;
- (id)init;
- (id)newAssertionWithReason:(long long)arg1;
- (void)removeAssertion:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

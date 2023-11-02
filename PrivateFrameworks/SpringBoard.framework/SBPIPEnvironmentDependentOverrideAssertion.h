
@interface SBPIPEnvironmentDependentOverrideAssertion : SBPIPBehaviorOverrideAssertion <SBLayoutStateTransitionObserver> {
    NSSet * _allowedEnvironmentModes;
    bool  _invalidatesEarly;
    SBWindowScene * _windowScene;
}

@property (nonatomic, copy) NSSet *allowedEnvironmentModes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidatesEarly;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_environmentModeForLayoutState:(id)arg1;
- (id)_layoutCoordinator;
- (void)_updateStateForTransitionWithContext:(id)arg1;
- (id)allowedEnvironmentModes;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithReason:(long long)arg1 identifier:(id)arg2 windowScene:(id)arg3 invalidationBlock:(id /* block */)arg4;
- (bool)invalidatesEarly;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)setAllowedEnvironmentModes:(id)arg1;
- (void)setInvalidatesEarly:(bool)arg1;

@end

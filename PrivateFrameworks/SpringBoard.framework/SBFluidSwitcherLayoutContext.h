
@interface SBFluidSwitcherLayoutContext : NSObject <BSDescriptionProviding, SBAppInteractionEventSourceObserving> {
    SBFluidSwitcherGesture * _activeGesture;
    SBWorkspaceApplicationSceneTransitionContext * _activeTransitionContext;
    SBAppLayout * _currentAppLayout;
    SBMainDisplayLayoutState * _currentLayoutState;
    bool  _hasUserInteractedWithActiveApplication;
    SBHomeGestureSettings * _homeGestureSettings;
    NSDate * _lastTransitionCompletionDate;
    long long  _previousInterfaceOrientation;
    SBMainDisplayLayoutState * _previousLayoutState;
    SBAppLayout * _transitioningFromAppLayout;
    SBAppLayout * _transitioningToAppLayout;
}

@property (nonatomic, retain) SBFluidSwitcherGesture *activeGesture;
@property (nonatomic, readonly) SBWorkspaceApplicationSceneTransitionContext *activeTransitionContext;
@property (nonatomic, retain) SBAppLayout *currentAppLayout;
@property (nonatomic, retain) SBMainDisplayLayoutState *currentLayoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasUserInteractedWithActiveApplication;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGestureSettings *homeGestureSettings;
@property (nonatomic, retain) NSDate *lastTransitionCompletionDate;
@property (nonatomic, readonly) SBMainDisplayLayoutState *layoutState;
@property (nonatomic) long long previousInterfaceOrientation;
@property (nonatomic, retain) SBMainDisplayLayoutState *previousLayoutState;
@property (nonatomic, readonly) double secondsSinceLastTransitionCompletion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedOrientationsForGesture;
@property (nonatomic, retain) SBAppLayout *transitioningFromAppLayout;
@property (nonatomic, readonly) SBMainDisplayLayoutState *transitioningFromLayoutState;
@property (nonatomic, retain) SBAppLayout *transitioningToAppLayout;
@property (nonatomic, readonly) SBMainDisplayLayoutState *transitioningToLayoutState;

- (void).cxx_destruct;
- (bool)_shouldUpdateSwitcherModelBasedOnTimeOrUserInteraction;
- (id)activeGesture;
- (id)activeTransitionContext;
- (id)currentAppLayout;
- (id)currentLayoutState;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didEndTransitioningToLayoutStateWithContext:(id)arg1;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (bool)hasUserInteractedWithActiveApplication;
- (id)homeGestureSettings;
- (id)initWithLayoutState:(id)arg1;
- (id)lastTransitionCompletionDate;
- (id)layoutState;
- (long long)previousInterfaceOrientation;
- (id)previousLayoutState;
- (double)secondsSinceLastTransitionCompletion;
- (void)setActiveGesture:(id)arg1;
- (void)setCurrentAppLayout:(id)arg1;
- (void)setCurrentLayoutState:(id)arg1;
- (void)setHasUserInteractedWithActiveApplication:(bool)arg1;
- (void)setHomeGestureSettings:(id)arg1;
- (void)setLastTransitionCompletionDate:(id)arg1;
- (void)setPreviousInterfaceOrientation:(long long)arg1;
- (void)setPreviousLayoutState:(id)arg1;
- (void)setTransitioningFromAppLayout:(id)arg1;
- (void)setTransitioningToAppLayout:(id)arg1;
- (bool)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 recentAppLayouts:(id)arg3 transitionCompleted:(bool)arg4;
- (bool)shouldAddAppLayoutToFront:(id)arg1 whenBeginningGestureOfType:(long long)arg2 layoutContext:(id)arg3;
- (bool)shouldAddAppLayoutToFront:(id)arg1 whenEndingGestureOfType:(long long)arg2 layoutContext:(id)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedOrientationsForGesture;
- (id)transitioningFromAppLayout;
- (id)transitioningFromLayoutState;
- (id)transitioningToAppLayout;
- (id)transitioningToLayoutState;
- (void)willBeginTransitioningToLayoutStateWithContext:(id)arg1;

@end

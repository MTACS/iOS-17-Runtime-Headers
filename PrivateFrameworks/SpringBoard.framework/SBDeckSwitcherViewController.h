
@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate> {
    SBSwitcherAppSuggestionViewController * _appSuggestionController;
    SBAppSuggestionManager * _appSuggestionManager;
}

@property (nonatomic, retain) SBSwitcherAppSuggestionViewController *appSuggestionController;
@property (nonatomic) SBAppSuggestionManager *appSuggestionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assertionReason;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(id /* block */)arg2;
- (id)appSuggestionController;
- (id)appSuggestionManager;
- (id)bestAppSuggestion;
- (void)handleFluidSwitcherGestureManager:(id)arg1 didBeginGesture:(id)arg2;
- (id)initWithSwitcherController:(id)arg1 rootModifier:(id)arg2 liveContentOverlayCoordinator:(id)arg3 delegate:(id)arg4 dataSource:(id)arg5 shouldObserveChamoisWindowingChanges:(bool)arg6 debugName:(id)arg7;
- (void)invalidate;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (long long)orientationForSuggestionViewController:(id)arg1;
- (void)performTransitionWithContext:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setAppSuggestionController:(id)arg1;
- (void)setAppSuggestionManager:(id)arg1;
- (void)setBestAppSuggestion:(id)arg1;
- (void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2;
- (void)viewWillLayoutSubviews;

@end

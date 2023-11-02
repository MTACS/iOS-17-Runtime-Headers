
@interface SBPIPPegasusContainerAdapter : NSObject <PGPictureInPictureViewControllerContentContainer, SBPIPContainerViewControllerAdapter, SBPIPInteractionControllerDataSource, SBPIPStashTabSuppressionPolicyProviderObserver> {
    SBPIPContainerViewController<SBPIPContainerViewControllerAdapterContextProviding> * _containerViewController;
    bool  _invalidated;
    bool  _isAnyInteractionGestureActive;
    bool  _isChangingSize;
    UIButton * _menuButton;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumStashTabSize;
    NSArray * _offScreenHyperregionComposers;
    PGPictureInPictureViewController * _pictureInPictureViewController;
    SBPIPMultidisplayHyperregionComposer * _pipPositionHyperregionComposer;
    SBPIPStashTabSuppressionPolicyProvider * _stashTabVisibilityPolicyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *overrideResourcesUsageReductionTimeout;
@property (nonatomic, readonly) PGPictureInPictureViewController *pictureInPictureViewController;
@property (nonatomic, readonly) bool shouldSuppressAssociatedElementsInSystemAperture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createOrInvalidateStashTabVisibilityPolicyProvider;
- (void)_performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)_reloadMenuButton;
- (void)acquireInterfaceOrientationLock;
- (id)bundleIdentifierForContainerViewController:(id)arg1;
- (void)containerViewController:(id)arg1 didUpdateContentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 reason:(id)arg3;
- (void)containerViewController:(id)arg1 didUpdateStashProgress:(double)arg2;
- (void)containerViewController:(id)arg1 didUpdateStashState:(bool)arg2 springSettings:(id)arg3;
- (void)containerViewController:(id)arg1 wantsStashTabHidden:(bool)arg2 left:(bool)arg3 springSettings:(id)arg4 completion:(id /* block */)arg5;
- (void)containerViewController:(id)arg1 willBeginInteractionWithGestureRecognizer:(id)arg2;
- (void)containerViewControllerDidEndInteraction:(id)arg1;
- (void)containerViewControllerDidEndSizeChange:(id)arg1;
- (void)containerViewControllerStartReducingResourcesUsage:(id)arg1;
- (void)containerViewControllerStopReducingResourcesUsage:(id)arg1;
- (void)containerViewControllerWillBeginSizeChange:(id)arg1 behavior:(int)arg2;
- (id)contentViewControllerForContainerViewController:(id)arg1;
- (double)currentCornerRadiusForInteractionController:(id)arg1;
- (void)dealloc;
- (id)debugName;
- (id)defaultPositionHyperregionComposers;
- (bool)handleDoubleTapGesture;
- (bool)handleTapWhileStashedGesture;
- (id)initWithPictureInPictureViewController:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })interactionController:(id)arg1 edgeInsetsForWindowScene:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })interactionController:(id)arg1 stashedPaddingForWindowScene:(id)arg2;
- (void)interactionController:(id)arg1 updateScaleInteractor:(id)arg2 pipSize:(struct CGSize { double x1; double x2; })arg3 forPanGesture:(id)arg4;
- (id)interactionControllerConnectedWindowScenes:(id)arg1;
- (bool)interactionControllerScalesDuringPanGesture:(id)arg1;
- (void)invalidate;
- (bool)isStashTabHiddenForContainerViewController:(id)arg1;
- (id)layoutSettings;
- (void)layoutSubviewsForContainerViewController:(id)arg1;
- (void)loadSubviewsForContainerViewController:(id)arg1;
- (id)morphAnimatorTargetContainerViewForContainerViewController:(id)arg1;
- (id)morphAnimatorTargetViewForContainerViewController:(id)arg1;
- (void)notePictureInPictureViewControllerPrefersHiddenFromClonedDisplayDidChange;
- (void)notePictureInPictureViewControllerTetheringDidUpdate;
- (id)overrideResourcesUsageReductionTimeout;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)performStartAnimationWithCompletionHandler:(id /* block */)arg1;
- (void)performStartInIsolationWithCompletionHandler:(id /* block */)arg1;
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)performStopInIsolationWithCompletionHandler:(id /* block */)arg1;
- (void)pictureInPictureClientDidRequestStashing;
- (id)pictureInPictureViewController;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completionHandler:(id /* block */)arg3;
- (int)processIdentifierForContainerViewController:(id)arg1;
- (void)relinquishInterfaceOrientationLock;
- (id)scenePersistenceIdentifierForContainerViewController:(id)arg1;
- (void)setContainerViewController:(id)arg1;
- (bool)shouldDisableIdleTimerForContainerViewController:(id)arg1;
- (bool)shouldPointerInteractionBeginForInteractionController:(id)arg1;
- (bool)shouldSuppressAssociatedElementsInSystemAperture;
- (void)stashTabVisibilityPolicyProviderDidUpdatePolicy:(id)arg1;
- (id)systemGestureManagerForInteractionControllerResizing:(id)arg1;
- (id)systemPointerInteractionManagerForInteractionController:(id)arg1;
- (void)transitionAnimationDidEndForContainerViewController:(id)arg1;
- (void)transitionAnimationWillBeginForContainerViewController:(id)arg1;
- (void)updateMenuItems;

@end

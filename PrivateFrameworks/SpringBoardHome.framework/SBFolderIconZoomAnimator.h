
@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator <SBHSearchPresenterObserver, SBSearchGestureObserver> {
    SBFFluidBehaviorSettings * _dockAnimationSettings;
    SBFolderController * _innerFolderController;
    SBFloatyFolderView * _innerFolderView;
    _SBInnerFolderIconZoomAnimator * _innerZoomAnimator;
    bool  _isAnimatingInFloatingDock;
    SBSearchGesture * _searchGesture;
    <SBHSearchPresenting> * _searchPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBFFluidBehaviorSettings *dockAnimationSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimatingInFloatingDock;
@property (nonatomic, retain) SBSearchGesture *searchGesture;
@property (nonatomic, retain) <SBHSearchPresenting> *searchPresenter;
@property (nonatomic, retain) SBHFolderZoomSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBFolderIcon *targetIcon;
@property (nonatomic, readonly) SBIconView *targetIconView;

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (bool)_forceSquareZoomDimension;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(bool)arg4 sharedCompletion:(id /* block */)arg5;
- (void)_prepareAnimation;
- (id)_referenceFolderIconView;
- (void)_setAnimationFraction:(double)arg1;
- (void)_setupCounterDockMatchMoveAnimationWithOffset:(double)arg1 layer:(id)arg2 additive:(bool)arg3;
- (void)_setupMatchMoveAnimation;
- (void)_setupMatchMoveWithDock;
- (void)_setupMatchMoveWithDockWithTargetIconCenter:(struct CGPoint { double x1; double x2; })arg1 targetIconAnchor:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateDockMatchMoveWithFraction:(double)arg1;
- (void)_visuallyCompleteAnimationImmediately;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_zoomedFrame;
- (void)dealloc;
- (id)defaultTargetIconContainerView;
- (id)dockAnimationSettings;
- (id)initWithAnimationContainer:(id)arg1 innerFolderController:(id)arg2 folderIcon:(id)arg3;
- (bool)isAnimatingInFloatingDock;
- (id)searchGesture;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)searchGesture:(id)arg1 startedShowing:(bool)arg2;
- (id)searchPresenter;
- (void)searchPresenterWillPresentSearch:(id)arg1 animated:(bool)arg2;
- (void)setDockAnimationSettings:(id)arg1;
- (void)setIsAnimatingInFloatingDock:(bool)arg1;
- (void)setSearchGesture:(id)arg1;
- (void)setSearchPresenter:(id)arg1;
- (bool)shouldMatchMoveWithDock;
- (id)targetIconView;

@end

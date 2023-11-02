
@interface SBHLibraryPodIconZoomAnimator : SBIconZoomAnimator <SBHLibraryViewControllerObserver> {
    bool  _animationComplete;
    UIView * _folderClippingView;
    SBFolderController * _folderController;
    UIView * _folderScalingView;
    SBHLibraryPodFolderView * _folderView;
    UIView * _libraryScalingView;
    SBHLibraryViewController * _libraryViewController;
    UIView * _matchMoveWrapperView;
    NSArray * _miniPodIconViews;
    UIView * _searchBar;
    SBFolderIcon * _targetIcon;
    SBIconView * _targetIconView;
    NSArray * _visibleIconViews;
}

@property (nonatomic, readonly) <SBHLibraryPodIconZoomAnimationContaining> *animationContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHLibraryPodZoomSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBFolderIcon *targetIcon;
@property (nonatomic, readonly) SBIconView *targetIconView;

- (void).cxx_destruct;
- (void)_animateIconViewTransformsAndAlphaForZoomFraction:(double)arg1 withAnimationSettings:(id)arg2 delay:(double)arg3 completion:(id /* block */)arg4;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id /* block */)arg3;
- (void)_cancelAnimationForIconViewClippedOrObscured;
- (void)_captureVisibleAndMiniPodIconViews;
- (struct CGPoint { double x1; double x2; })_centerOfMiniPodIconViews;
- (void)_cleanupAnimation;
- (void)_cleanupMiniPodIconViewsAfterCrossfade;
- (void)_handleIconViewClippedNotification:(id)arg1;
- (void)_handleIconZoomNotification:(id)arg1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(bool)arg4 sharedCompletion:(id /* block */)arg5;
- (void)_prepareAnimation;
- (void)_prepareToCrossfadeMiniPodIconViews;
- (void)_removeMatchMoveAnimation;
- (void)_returnFolderAndLibraryScalingViews;
- (double)_scaleForZoomFraction:(double)arg1;
- (void)_setAnimationFraction:(double)arg1;
- (void)_setupFolderAndLibraryScalingViews;
- (void)_setupMatchMoveAnimation;
- (void)_updateFolderNavigationBarAlphaForZoomFraction:(double)arg1;
- (void)_updateFolderViewFramesForZoomFraction:(double)arg1;
- (void)_updateIconCrossfadeForZoomFraction:(double)arg1;
- (void)_updateLibraryAlphaForZoomFraction:(double)arg1;
- (void)_updateLibraryScaleForZoomFraction:(double)arg1;
- (void)_updateSearchBarAlphaForZoomFraction:(double)arg1;
- (void)_updateSearchBarForZoomFraction:(double)arg1;
- (void)_updateVisibleIconViewsPointerAllowed:(bool)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithAnimationContainer:(id)arg1 innerFolderController:(id)arg2 folderIcon:(id)arg3 searchBar:(id)arg4 libraryViewController:(id)arg5;
- (void)libraryViewController:(id)arg1 willPresentSearchController:(id)arg2;
- (id)referenceIconView;
- (id)targetIcon;
- (id)targetIconView;

@end

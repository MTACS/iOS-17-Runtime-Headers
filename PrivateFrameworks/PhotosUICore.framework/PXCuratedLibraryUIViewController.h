
@interface PXCuratedLibraryUIViewController : UIViewController <PXActionManagerProvider, PXBannerViewDelegate, PXBarsControllerDelegate, PXChangeObserver, PXCuratedLibraryActionPerformerDelegate, PXCuratedLibraryFilterTipControllerDelegate, PXCuratedLibraryFooterControllerDelegate, PXCuratedLibrarySkimmingControllerDelegate, PXCuratedLibraryZoomLevelControlDelegate, PXGAXResponder, PXOneUpPresentationDelegate, PXPhotosDragControllerDelegate, PXPhotosGlobalFooterViewDelegate, PXPhotosPointerControllerDelegate, PXScrollViewControllerObserver, PXSelectionContainerProvider, PXSplitViewControllerChangeObserver, PXStatusControllerDelegate, PXSwipeSelectionManagerDelegate, PXTouchingUIGestureRecognizerDelegate, PXUserInterfaceFeatureViewController, UIActivityItemsConfigurationProviding, UIGestureRecognizerDelegate> {
    PXChangeDirectionNumberFilter * _backNavigationGestureDirectionFilter;
    PXGTransition * _backNavigationTransition;
    PXBannerView * _bannerView;
    PXCuratedLibraryBarsController * _barsController;
    PXBoopableItemsProvider * _boopableItemsProvider;
    bool  _canShowFooter;
    PXCPLUIStatusProvider * _cplUIStatusProvider;
    <PXCuratedLibraryViewDelegate> * _delegate;
    PXPhotosDragController * _dragController;
    PXPhotosDragController * _emptyPlaceholderDragController;
    PXStatusController * _emptyPlaceholderStatusController;
    UIBarButtonItem * _emptyPlaceholderSwitchLibraryBarButtonItem;
    UIButton * _emptyPlaceholderSwitchLibraryButton;
    NSLayoutConstraint * _emptyPlaceholderSwitchLibraryButtonBottomConstraint;
    NSLayoutConstraint * _emptyPlaceholderSwitchLibraryButtonTrailingConstraint;
    PXCuratedLibraryFilterTipController * _filterTipController;
    UIHoverGestureRecognizer * _hoverGesture;
    PXProgrammaticNavigationRequest * _initialNavigationRequest;
    bool  _isGridViewReady;
    bool  _isInUnselectedTab;
    PXLibraryFilterState * _libraryFilterState;
    PXMoviePresenter * _moviePresenter;
    PXAssetReference * _navigatedAssetReference;
    UIPanGestureRecognizer * _panGesture;
    PHPhotoLibrary * _photoLibrary;
    UIPinchGestureRecognizer * _pinchGesture;
    PXPhotosPointerController * _pointerController;
    PXAssetReference * _preferredFocusAssetReference;
    UITapGestureRecognizer * _pressGesture;
    PXRelaxedScreenEdgePanGestureRecognizer * _screenEdgePanGestureRecognizer;
    PXCuratedLibrarySecondaryToolbarController * _secondaryToolbarController;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    PXCuratedLibrarySkimmingController * _skimmingController;
    PXTouchingUIGestureRecognizer * _skimmingTouchGesture;
    PXCPLStatusController * _statusController;
    PXSwipeSelectionManager * _swipeSelectionManager;
    UITapGestureRecognizer * _tapGesture;
    struct { 
        long long zoomLevel; 
        long long scrollRegime; 
    }  _trackedScrollContext;
    PXAssetSelectionUserActivityController * _userActivityController;
    PXCuratedLibraryViewProvider * _viewProvider;
    long long  _zoomLevelBeforeBackNavigationTransition;
    PXCuratedLibraryZoomLevelControl * _zoomLevelControl;
    PXCuratedLibraryZoomLevelPinchFilter * _zoomLevelPinchFilter;
    <PXGAXResponder> * axNextResponder;
}

@property (nonatomic, readonly) <UIActivityItemsConfigurationReading> *activityItemsConfiguration;
@property (nonatomic, readonly) PXActionManager *assetActionManager;
@property (nonatomic) <PXGAXResponder> *axNextResponder;
@property (nonatomic, retain) PXChangeDirectionNumberFilter *backNavigationGestureDirectionFilter;
@property (nonatomic, retain) PXGTransition *backNavigationTransition;
@property (nonatomic, readonly) PXBannerView *bannerView;
@property (nonatomic, readonly) PXCuratedLibraryBarsController *barsController;
@property (nonatomic, retain) PXBoopableItemsProvider *boopableItemsProvider;
@property (nonatomic) bool canShowFooter;
@property (nonatomic, retain) PXCPLUIStatusProvider *cplUIStatusProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCuratedLibraryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXPhotosDragController *dragController;
@property (nonatomic, retain) PXPhotosDragController *emptyPlaceholderDragController;
@property (nonatomic, retain) PXStatusController *emptyPlaceholderStatusController;
@property (nonatomic, retain) UIBarButtonItem *emptyPlaceholderSwitchLibraryBarButtonItem;
@property (nonatomic, retain) UIButton *emptyPlaceholderSwitchLibraryButton;
@property (nonatomic, retain) NSLayoutConstraint *emptyPlaceholderSwitchLibraryButtonBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *emptyPlaceholderSwitchLibraryButtonTrailingConstraint;
@property (nonatomic, readonly) PXCuratedLibraryFilterTipController *filterTipController;
@property (nonatomic, readonly) PXGView *gridView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIHoverGestureRecognizer *hoverGesture;
@property (nonatomic, retain) PXProgrammaticNavigationRequest *initialNavigationRequest;
@property (nonatomic) bool isGridViewReady;
@property (nonatomic) bool isInUnselectedTab;
@property (nonatomic, retain) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, retain) PXMoviePresenter *moviePresenter;
@property (nonatomic, retain) PXAssetReference *navigatedAssetReference;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGesture;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGesture;
@property (nonatomic, readonly) PXPhotosPointerController *pointerController;
@property (nonatomic, retain) PXAssetReference *preferredFocusAssetReference;
@property (nonatomic, readonly) UITapGestureRecognizer *pressGesture;
@property (nonatomic, readonly) PXRelaxedScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;
@property (nonatomic, readonly) PXCuratedLibrarySecondaryToolbarController *secondaryToolbarController;
@property (nonatomic, readonly) PXSelectionContainer *selectionContainer;
@property (nonatomic, retain) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (nonatomic, readonly) PXCuratedLibrarySkimmingController *skimmingController;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *skimmingTouchGesture;
@property (nonatomic, retain) PXCPLStatusController *statusController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSwipeSelectionManager *swipeSelectionManager;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGesture;
@property (nonatomic) struct { long long x1; long long x2; } trackedScrollContext;
@property (nonatomic, readonly) PXAssetSelectionUserActivityController *userActivityController;
@property (nonatomic, readonly) long long userInterfaceFeature;
@property (nonatomic, readonly) PXCuratedLibraryViewProvider *viewProvider;
@property (nonatomic, readonly) PXCuratedLibraryViewProvider *viewProviderIfLoaded;
@property (nonatomic) long long zoomLevelBeforeBackNavigationTransition;
@property (nonatomic, readonly) PXCuratedLibraryZoomLevelControl *zoomLevelControl;
@property (nonatomic, readonly) PXCuratedLibraryZoomLevelPinchFilter *zoomLevelPinchFilter;

- (void).cxx_destruct;
- (bool)_actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)_addContentView:(id)arg1;
- (void)_addEmptyPlaceholderSwitchLibraryButtonForCompactSizeClass;
- (void)_addEmptyPlaceholderSwitchLibraryButtonForRegularSizeClass;
- (id)_assetCollectionReferenceForGroup:(id)arg1;
- (id)_bestHitTestResultForCursorAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_buttonForEllipsisButtonAction;
- (id)_buttonHitTestResultAtPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)_conditionallyUpdateEmptyPlaceholder;
- (void)_createAnimationForSkimmingWithDuration:(double)arg1 indicatorsDidChangeVisibility:(bool)arg2;
- (id)_createPreviewViewForAssetReference:(id)arg1;
- (id)_createPreviewViewForHitTestResult:(id)arg1;
- (id)_dominantAssetCollectionReferenceForSkimming;
- (id)_emptyPlaceholderMessageTextAttributesFromTextProperties:(id)arg1;
- (double)_emptyPlaceholderswitchLibraryButtonTrailingInset;
- (double)_emptyPlaceholderswitchLibraryButtonVerticalSpacing;
- (bool)_handleGestureForFilterTipController;
- (void)_handleHover:(id)arg1;
- (bool)_handleHoverWithHitTestResult:(id)arg1;
- (void)_handleHoverWithHitTestResults:(id)arg1 hoverGesture:(id)arg2;
- (void)_handleNavigationRequestConditionCompletionForNavigationRequest:(id)arg1 withAssetReference:(id)arg2;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handleScreenEdgePan:(id)arg1;
- (void)_handleScrollToRevealInfo:(id)arg1 inGroup:(id)arg2;
- (void)_handleShowAlternateUIForGroup:(id)arg1;
- (void)_handleShowDefaultUIForGroup:(id)arg1;
- (void)_handleTap:(id)arg1;
- (bool)_handleTapOnTitleWithHitTestResult:(id)arg1;
- (bool)_handleTapToToggleChromeWithGestureRecognizer:(id)arg1;
- (bool)_handleTapWithHitTestResult:(id)arg1 keyModifierFlags:(long long)arg2;
- (void)_handleTapWithHitTestResults:(id)arg1 tapGesture:(id)arg2;
- (void)_hideNavigationBarItems:(bool)arg1;
- (id)_hitTestAssetReferenceAtLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)_hitTestResultAtLocation:(struct CGPoint { double x1; double x2; })arg1 withPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 swipeSelectionManager:(id)arg3;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_indexPathForAssetAtLocation:(struct CGPoint { double x1; double x2; })arg1 withPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 forSwipeSelectionManager:(id)arg3;
- (void)_invalidateBannerView;
- (void)_invalidateEmptyPlaceholder;
- (void)_invalidateSecondaryToolbar;
- (void)_navigateToInitialScrollPositionForNavigationRequest:(id)arg1;
- (void)_navigateToRevealAssetForNavigationRequest:(id)arg1;
- (void)_navigateToZoomLevelForNavigationRequest:(id)arg1 successHandler:(id /* block */)arg2;
- (void)_prepareGestureRecognizers;
- (bool)_presentOneUpForAssetReference:(id)arg1 configurationHandler:(id /* block */)arg2;
- (void)_presentOneUpForSingleSelectedAssetWithActivity:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForEllipsisActionPerformerButton;
- (id)_regionOfInterestForAssetReference:(id)arg1 image:(id*)arg2;
- (void)_removeEmptyPlaceholderSwitchLibraryButton;
- (void)_requestFocusUpdateForCursorAsset;
- (void)_requestFocusUpdateWithAssetReference:(id)arg1;
- (void)_rescheduleNavigationRequest:(id)arg1;
- (void)_saveCurrentAllPhotosScrollPosition;
- (void)_scrollLibraryViewToInitialPositionWithCompletionHandler:(id /* block */)arg1;
- (void)_scrollToBottomAnimated:(bool)arg1;
- (bool)_scrollToNextSectionInDirection:(long long)arg1 animated:(bool)arg2;
- (id)_scrollView;
- (void)_setWantsOptionalChromeVisible:(bool)arg1 changeReason:(long long)arg2;
- (bool)_shouldExposeCursorAnimations;
- (void)_updateBannerView;
- (void)_updateDrawerButtonVisibility;
- (void)_updateEmptyPlaceholder;
- (void)_updateEmptyPlaceholderSwitchLibraryButtonPosition;
- (void)_updateSecondaryToolbar;
- (void)_updateSkimmingSlideshowEnabled;
- (void)_updateStatusBarStyle;
- (void)_updateTrackedScrollLevelIfNeeded;
- (void)_updateViewLayoutMarginsForEmptyPlaceholder;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;
- (id)activityItemsConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchorViewRectForController:(id)arg1;
- (id)assetActionManager;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (id)assetCollectionReferenceForSkimmingSlideshow:(id)arg1;
- (id)assetCollectionReferenceToShowSkimmingHints:(id)arg1;
- (id)assetReferenceForIndexPath:(id)arg1;
- (id)axContainingScrollViewForAXGroup:(id)arg1;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;
- (id)axNextResponder;
- (id)backNavigationGestureDirectionFilter;
- (id)backNavigationTransition;
- (id)bannerView;
- (id)barsController;
- (id)barsControllerActionsForSelectionContextMenu:(id)arg1;
- (id)boopableItemsProvider;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canShowFooter;
- (void)cancelSelectMode:(id)arg1;
- (id)cplUIStatusProvider;
- (void)curatedLibraryActionPerformer:(id)arg1 contentFilterStateChanged:(id)arg2;
- (void)curatedLibraryActionPerformer:(id)arg1 libraryFilterStateChanged:(id)arg2;
- (void)curatedLibraryActionPerformer:(id)arg1 presentContextMenuActionsWithPerformers:(id)arg2;
- (void)curatedLibraryActionPerformer:(id)arg1 presentShareSheetWithSharingContext:(id)arg2;
- (id)delegate;
- (void)deselectAll:(id)arg1;
- (void)didDismissTipForController:(id)arg1;
- (id)dragController;
- (id)dragController:(id)arg1 draggableAssetReferenceAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)dragController:(id)arg1 draggedAssetReferencesDidChange:(id)arg2;
- (void)dragController:(id)arg1 dropTargetAssetReferenceDidChange:(id)arg2;
- (id)dragController:(id)arg1 dropTargetAssetReferenceForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)dragController:(id)arg1 isDragSessionActiveDidChange:(bool)arg2;
- (id)dragController:(id)arg1 regionOfInterestForAssetReference:(id)arg2 image:(id*)arg3;
- (id)dragController:(id)arg1 scrollViewForAssetReference:(id)arg2;
- (bool)dragController:(id)arg1 shouldResizeCancelledPreviewForAssetReference:(id)arg2;
- (bool)dragController:(id)arg1 shouldSelectRearrangedAssetReferences:(id)arg2;
- (id)dragControllerAssetReferenceForBeginningSession:(id)arg1;
- (id)dragControllerUndoManager:(id)arg1;
- (id)dragControllerViewControllerForPresentation:(id)arg1;
- (id)emptyPlaceholderDragController;
- (id)emptyPlaceholderStatusController;
- (id)emptyPlaceholderSwitchLibraryBarButtonItem;
- (id)emptyPlaceholderSwitchLibraryButton;
- (id)emptyPlaceholderSwitchLibraryButtonBottomConstraint;
- (id)emptyPlaceholderSwitchLibraryButtonTrailingConstraint;
- (id)filterTipController;
- (void)footerControllerRevealFooter:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gridView;
- (id)hoverGesture;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initialNavigationRequest;
- (void)invalidateBoopableItemsProvider;
- (bool)isGridViewReady;
- (bool)isInUnselectedTab;
- (id)libraryFilterState;
- (id)moviePresenter;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)navigateToSegment:(id)arg1;
- (id)navigatedAssetReference;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (bool)oneUpPresentation:(id)arg1 allowsActionsForContextMenuInteraction:(id)arg2;
- (bool)oneUpPresentation:(id)arg1 allowsMultiSelectMenuForInteraction:(id)arg2;
- (bool)oneUpPresentation:(id)arg1 canStartPreviewingForContextMenuInteraction:(id)arg2;
- (bool)oneUpPresentation:(id)arg1 commitPreviewForContextMenuInteraction:(id)arg2;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 previewForDismissingToSecondaryItemWithIdentifier:(id)arg2 configuration:(id)arg3;
- (id)oneUpPresentation:(id)arg1 previewForHighlightingSecondaryItemWithIdentifier:(id)arg2 configuration:(id)arg3;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (id)oneUpPresentation:(id)arg1 secondaryIdentifiersForConfiguration:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (void)oneUpPresentation:(id)arg1 willEndPreviewingForContextMenuInteraction:(id)arg2 configuration:(id)arg3;
- (void)oneUpPresentation:(id)arg1 willStartPreviewingForContextMenuInteraction:(id)arg2;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationHelperScrollView:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (bool)oneUpPresentationShouldPreventShowInAllPhotosAction:(id)arg1;
- (void)openParentWithCommandUpArrow:(id)arg1;
- (void)openSelectionWithCommandDownArrow:(id)arg1;
- (id)panGesture;
- (id)passthroughViewsForTipForController:(id)arg1;
- (id)photoLibrary;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (id)pinchGesture;
- (id)pointerController;
- (void)pointerController:(id)arg1 didExitRegionWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inCoordinateSpace:(id)arg3;
- (id)pointerController:(id)arg1 identifierForRegionAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;
- (long long)pointerController:(id)arg1 interactionOptionsForRegionAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;
- (id)pointerController:(id)arg1 regionOfInterestForCursorAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;
- (id)pointerController:(id)arg1 viewForCursorInteractionAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;
- (void)pointerController:(id)arg1 willEnterRegionWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inCoordinateSpace:(id)arg3;
- (id)preferredFocusAssetReference;
- (id)preferredFocusEnvironments;
- (long long)preferredStatusBarStyle;
- (void)preparePresentationEnvironmentForBannerView:(id)arg1 actionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)presentationEnvironmentForStatusController:(id)arg1;
- (id)presentingViewControllerForFooterController:(id)arg1;
- (id)pressGesture;
- (id)pu_debugCurrentlySelectedAssets;
- (bool)pu_handleSecondTabTap;
- (bool)pu_scrollToInitialPositionAnimated:(bool)arg1;
- (bool)pu_shouldOptOutFromChromelessBars;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)px_didTransitionBars;
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)px_navigationDestination;
- (void)px_willTransitionBars;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
- (id)screenEdgePanGestureRecognizer;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (bool)scrollViewControllerShouldScrollToTop:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3 currentContentOffset:(struct CGPoint { double x1; double x2; })arg4;
- (id)secondaryToolbarController;
- (id)selectionContainer;
- (void)setAxNextResponder:(id)arg1;
- (void)setBackNavigationGestureDirectionFilter:(id)arg1;
- (void)setBackNavigationTransition:(id)arg1;
- (void)setBoopableItemsProvider:(id)arg1;
- (void)setCanShowFooter:(bool)arg1;
- (void)setCplUIStatusProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmptyPlaceholderDragController:(id)arg1;
- (void)setEmptyPlaceholderStatusController:(id)arg1;
- (void)setEmptyPlaceholderSwitchLibraryBarButtonItem:(id)arg1;
- (void)setEmptyPlaceholderSwitchLibraryButton:(id)arg1;
- (void)setEmptyPlaceholderSwitchLibraryButtonBottomConstraint:(id)arg1;
- (void)setEmptyPlaceholderSwitchLibraryButtonTrailingConstraint:(id)arg1;
- (void)setInitialNavigationRequest:(id)arg1;
- (void)setIsGridViewReady:(bool)arg1;
- (void)setIsInUnselectedTab:(bool)arg1;
- (void)setLibraryFilterState:(id)arg1;
- (void)setMoviePresenter:(id)arg1;
- (void)setNavigatedAssetReference:(id)arg1;
- (void)setPreferredFocusAssetReference:(id)arg1;
- (void)setSharedLibraryStatusProvider:(id)arg1;
- (void)setStatusController:(id)arg1;
- (void)setTrackedScrollContext:(struct { long long x1; long long x2; })arg1;
- (void)setZoomLevelBeforeBackNavigationTransition:(long long)arg1;
- (id)sharedLibraryStatusProvider;
- (id)skimmingController;
- (void)skimmingController:(id)arg1 willHideSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(id)arg1 willShowSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(id)arg1 willStartSkimmingAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
- (void)skimmingControllerDidStopSkimming:(id)arg1 animationDuration:(double)arg2;
- (id)skimmingTouchGesture;
- (void)splitViewController:(id)arg1 didChangeSidebarVisibility:(bool)arg2;
- (void)splitViewController:(id)arg1 willChangeSidebarVisibility:(bool)arg2;
- (id)statusController;
- (void)statusController:(id)arg1 configurationDidChange:(id)arg2;
- (id)swipeSelectionManager;
- (void)swipeSelectionManager:(id)arg1 extendSelectionInDirection:(unsigned long long)arg2;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeSelectionManager:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (void)swipeSelectionManagerDidAutoScroll:(id)arg1;
- (bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (id)tapGesture;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)targetedPreviewForAssetReference:(id)arg1;
- (void)toggleEditMode:(id)arg1;
- (void)toggleFilter:(id)arg1;
- (void)toggleViewMode:(id)arg1;
- (void)toggleViewer:(id)arg1;
- (void)touchingUIGestureRecognizerDidBeginTouching:(id)arg1;
- (void)touchingUIGestureRecognizerDidEndTouching:(id)arg1;
- (struct { long long x1; long long x2; })trackedScrollContext;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoManagerForActionPerformer:(id)arg1;
- (id)userActivityController;
- (long long)userInterfaceFeature;
- (void)validateCommand:(id)arg1;
- (id)viewControllerToPresentTipForController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (id)viewProvider;
- (id)viewProviderIfLoaded;
- (id)viewToPresentTipForController:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willPresentTipForController:(id)arg1;
- (void)zoomIn:(id)arg1;
- (long long)zoomLevelBeforeBackNavigationTransition;
- (id)zoomLevelControl;
- (void)zoomLevelControl:(id)arg1 didTapOnAlreadySelectedZoomLevel:(long long)arg2;
- (id)zoomLevelPinchFilter;
- (void)zoomOut:(id)arg1;

@end

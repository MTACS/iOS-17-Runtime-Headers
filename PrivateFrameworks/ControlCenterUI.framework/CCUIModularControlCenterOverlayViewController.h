
@interface CCUIModularControlCenterOverlayViewController : UIViewController <CCUIContentModuleContextDelegate, CCUIHeaderPocketViewSensorAttributionDelegate, CCUIModuleCollectionViewControllerDelegate, CCUIModuleInstanceManagerObserver, CCUIOverlayMetricsProvider, CCUIOverlayViewProvider, CCUIPPTSignpostListener, CCUIScrollViewDelegate, CCUIStatusBarDelegate, CCUIStatusLabelViewControllerDelegate, UIGestureRecognizerDelegate> {
    bool  _active;
    <SFAskToAirDropReceiverControllerProtocol> * _askToAirDropController;
    MTMaterialView * _backgroundView;
    NSHashTable * _blockingGestureRecognizers;
    CCUIFlickGestureRecognizer * _collectionViewDismissalFlickGesture;
    UIPanGestureRecognizer * _collectionViewDismissalPanGesture;
    UITapGestureRecognizer * _collectionViewDismissalTapGesture;
    UIPanGestureRecognizer * _collectionViewScrollPanGesture;
    UIStatusBar * _compactLeadingStatusBar;
    UIView * _containerView;
    NSUUID * _currentTransitionUUID;
    <CCUIModularControlCenterOverlayViewControllerDelegate> * _delegate;
    CCUIHeaderPocketView * _headerPocketView;
    UIPanGestureRecognizer * _headerPocketViewDismissalPanGesture;
    UITapGestureRecognizer * _headerPocketViewDismissalTapGesture;
    <CCUIHostStatusBarStyleProvider> * _hostStatusBarStyleProvider;
    CCUIStatusBarStyleSnapshot * _hostStatusBarStyleSnapshot;
    bool  _hostedInTestApp;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    CCUIModuleInstanceManager * _moduleInstanceManager;
    CCUIModuleInstanceManager * _moduleManager;
    bool  _presentationPanGestureActive;
    <CCUIOverlayPresentationProvider> * _presentationProvider;
    unsigned long long  _presentationState;
    CCUIOverlayTransitionState * _previousTransitionState;
    CCUIAnimationRunner * _primaryAnimationRunner;
    bool  _reachabilityActive;
    CCUIScrollView * _scrollView;
    CCUIAnimationRunner * _secondaryAnimationRunner;
    CCUISensorActivityDataProvider * _sensorActivityDataProvider;
    bool  _showHotPocket;
    bool  _showingRootView;
    CCUIStatusLabelViewController * _statusLabelViewController;
    unsigned long long  _transitionState;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) <SFAskToAirDropReceiverControllerProtocol> *askToAirDropController;
@property (nonatomic, copy) NSUUID *currentTransitionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIModularControlCenterOverlayViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHomeGestureDismissalAllowed, nonatomic, readonly) bool homeGestureDismissalAllowed;
@property (nonatomic) <CCUIHostStatusBarStyleProvider> *hostStatusBarStyleProvider;
@property (getter=isHostedInTestApp, nonatomic) bool hostedInTestApp;
@property (nonatomic, readonly) CCUIModuleCollectionViewController *moduleCollectionViewController;
@property (nonatomic, readonly) CCUIModuleInstanceManager *moduleInstanceManager;
@property (nonatomic, readonly) unsigned long long moduleRowCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } overlayBackgroundFrame;
@property (nonatomic, readonly) MTMaterialView *overlayBackgroundView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } overlayContainerFrame;
@property (nonatomic, readonly) UIView *overlayContainerView;
@property (nonatomic, readonly) CCUIHeaderPocketView *overlayHeaderView;
@property (nonatomic, readonly) long long overlayInterfaceOrientation;
@property (nonatomic, readonly) UIStatusBar *overlayLeadingStatusBar;
@property (nonatomic, readonly) CCUIModuleCollectionView *overlayModuleCollectionView;
@property (nonatomic, readonly) double overlayReachabilityHeight;
@property (nonatomic, readonly) UIScrollView *overlayScrollView;
@property (nonatomic, readonly, copy) CCUIStatusBarStyleSnapshot *overlayStatusBarStyle;
@property (nonatomic, readonly) CCUIStatusLabelViewController *overlayStatusLabelViewController;
@property (nonatomic) unsigned long long presentationState;
@property (getter=isReachabilityActive, nonatomic) bool reachabilityActive;
@property (nonatomic, retain) CCUISensorActivityDataProvider *sensorActivityDataProvider;
@property (getter=isShowingRootView, nonatomic, readonly) bool showingRootView;
@property (nonatomic, readonly) CCUIStatusLabelViewController *statusLabelViewController;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transitionState;

+ (void)_addBlockForSignpost:(unsigned long long)arg1 block:(id /* block */)arg2;
+ (id)_blocksBySignpost;
+ (id)_controlCenterBringupEventStream;
+ (id)_controlCenterDismissEventStream;
+ (id)_controlCenterDismissOrbActionsEventStream;
+ (void)_executeAndCleanupBlocksForAllSignposts;
+ (void)_executeBlocksForSignpost:(unsigned long long)arg1;
+ (void)_playEventStream:(id)arg1 withCompletion:(id /* block */)arg2;
+ (id)_presentationProviderForDevice;
+ (id)_sharedCollectionViewController;

- (void).cxx_destruct;
- (unsigned long long)__supportedInterfaceOrientations;
- (void)_askToAirDropPendingOrActiveConnectionsDidChange;
- (id)_beginDismissalAnimated:(bool)arg1 interactive:(bool)arg2;
- (id)_beginPresentationAnimated:(bool)arg1 interactive:(bool)arg2;
- (bool)_canShowWhileLocked;
- (void)_cancelDismissalPanGestures;
- (struct CGPoint { double x1; double x2; })_centerPointOfModuleWithIdentifier:(id)arg1;
- (id)_controlCenterShowOrbActionsEventStream:(id)arg1;
- (void)_disableModule:(id)arg1;
- (bool)_dismissalFlickGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)_dismissalFlickGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)_dismissalFlickGestureRecognizerShouldBegin:(id)arg1;
- (void)_dismissalPanGestureRecognizerBegan:(id)arg1;
- (void)_dismissalPanGestureRecognizerCancelled:(id)arg1;
- (void)_dismissalPanGestureRecognizerChanged:(id)arg1;
- (void)_dismissalPanGestureRecognizerEnded:(id)arg1;
- (void)_dismissalPanGestureRecognizerFailed:(id)arg1;
- (bool)_dismissalPanGestureRecognizerShouldBegin:(id)arg1;
- (bool)_dismissalTapGestureRecognizerShouldBegin:(id)arg1;
- (void)_endDismissalWithUUID:(id)arg1 animated:(bool)arg2;
- (void)_endPresentationWithUUID:(id)arg1;
- (unsigned long long)_fetchModuleEnabledState:(id)arg1;
- (bool)_forceModuleEnabled:(id)arg1;
- (bool)_gestureRecognizerIsActive:(id)arg1;
- (void)_handleDismissalFlickGestureRecognizer:(id)arg1;
- (void)_handleDismissalPanGestureRecognizer:(id)arg1;
- (void)_handleDismissalTapGestureRecognizer:(id)arg1;
- (bool)_includesModuleWithIdentifier:(id)arg1 consideringObscureness:(bool)arg2;
- (id)_initWithSystemAgent:(id)arg1 presentationProvider:(id)arg2;
- (long long)_interfaceOrientation;
- (id)_moduleCollectionViewContainerView;
- (void)_reparent;
- (void)_reparentAndBecomeActive;
- (void)_reparentCollectionViewController;
- (void)_replaceBackgroundViewContentsWithSnapshotIfNecessary:(bool)arg1;
- (void)_resignActive;
- (id)_safeModuleCollectionViewContainerView;
- (id)_safeStatusLabelViewContainerView;
- (bool)_scrollPanGestureRecognizerCanBeginForGestureVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_scrollPanGestureRecognizerShouldBegin:(id)arg1;
- (bool)_scrollViewCanAcceptDownwardsPan;
- (bool)_scrollViewIsScrollable;
- (void)_setupPanGestureFailureRequirements;
- (id)_statusLabelViewContainerView;
- (void)_updateAskToAirDropModuleVisibility;
- (void)_updateChevronStateForTransitionState:(id)arg1;
- (void)_updateHotPocket:(bool)arg1 animated:(bool)arg2;
- (void)_updateHotPocketAnimated:(bool)arg1;
- (void)_updatePresentationForTransitionState:(id)arg1 withCompletionHander:(id /* block */)arg2;
- (void)_updatePresentationForTransitionType:(unsigned long long)arg1 translation:(struct CGPoint { double x1; double x2; })arg2 interactive:(bool)arg3;
- (void)_updateSensorActivityStatusForHeaderPocketView;
- (void)_willDismissModuleContainedInCollectionView;
- (void)_willPresentModuleContainedInCollectionView;
- (id)askToAirDropController;
- (void)beginPresentationWithLocation:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 velocity:(struct CGPoint { double x1; double x2; })arg3;
- (bool)canDismissPresentedContent;
- (void)cancelPresentationWithLocation:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 velocity:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })compactAvoidanceFrameForStatusBar:(id)arg1;
- (id)compactTrailingStyleRequestForStatusBar:(id)arg1;
- (void)contentModuleContext:(id)arg1 didUpdateHomeGestureDismissalAllowed:(bool)arg2;
- (void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2;
- (id)contentModuleContext:(id)arg1 requestsSensorActivityDataForActiveSensorType:(unsigned long long)arg2;
- (id)currentTransitionUUID;
- (id)delegate;
- (void)didCloseExpandedSensorAttributionViewController;
- (void)didReceiveSignpost:(unsigned long long)arg1;
- (void)dismissAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)dismissControlCenterForContentModuleContext:(id)arg1;
- (void)dismissExpandedModuleAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissExpandedViewForContentModuleContext:(id)arg1;
- (void)dismissPresentedContent;
- (void)dismissPresentedContentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)arg1;
- (void)displayWillTurnOff;
- (void)endPresentationWithLocation:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 velocity:(struct CGPoint { double x1; double x2; })arg3;
- (void)expandModuleWithIdentifier:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hostStatusBarStyleProvider;
- (bool)includesModuleWithIdentifier:(id)arg1;
- (bool)includesVisiblyUnobscuredModuleWithIdentifier:(id)arg1;
- (id)initWithSystemAgent:(id)arg1;
- (long long)interfaceOrientationForModuleCollectionViewController:(id)arg1;
- (bool)isActive;
- (bool)isHomeGestureDismissalAllowed;
- (bool)isHostedInTestApp;
- (bool)isReachabilityActive;
- (bool)isSensorAttributionViewControllerExpanded;
- (bool)isShowingRootView;
- (id)moduleCollectionViewController;
- (void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didUpdateHomeGestureDismissalAllowed:(bool)arg2;
- (void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willRemoveModuleContainerViewController:(id)arg2;
- (void)moduleCollectionViewControllerDidUpdateModules:(id)arg1;
- (id)moduleInstanceManager;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (void)moduleInstancesLayoutChangedForModuleInstanceManager:(id)arg1;
- (struct CCUIModuleLayoutSize { unsigned long long x1; unsigned long long x2; })moduleLayoutSizeForContentModuleContext:(id)arg1 forOrientation:(long long)arg2;
- (unsigned long long)moduleRowCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overlayAdditionalEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overlayBackgroundFrame;
- (id)overlayBackgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overlayContainerFrame;
- (id)overlayContainerView;
- (id)overlayHeaderView;
- (long long)overlayInterfaceOrientation;
- (id)overlayLeadingStatusBar;
- (id)overlayModuleCollectionView;
- (double)overlayReachabilityHeight;
- (id)overlayScrollView;
- (id)overlayStatusBarStyle;
- (id)overlayStatusLabelViewController;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)presentAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (unsigned long long)presentationState;
- (void)reachabilityAnimationDidEnd;
- (void)requestExpandModuleForContentModuleContext:(id)arg1;
- (void)requestModuleLayoutSizeUpdateForContentModuleContext:(id)arg1;
- (bool)runTest:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)runTest:(id)arg1 subtests:(id)arg2 eventStream:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)scrollView:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)sensorActivityDataProvider;
- (void)setCurrentTransitionUUID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostStatusBarStyleProvider:(id)arg1;
- (void)setHostedInTestApp:(bool)arg1;
- (void)setOverlayStatusBarHidden:(bool)arg1;
- (void)setPresentationState:(unsigned long long)arg1;
- (void)setReachabilityActive:(bool)arg1;
- (void)setSensorActivityDataProvider:(id)arg1;
- (void)setTransitionState:(unsigned long long)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)statusLabelViewController;
- (void)statusLabelViewControllerDidFinishStatusUpdates:(id)arg1;
- (void)statusLabelViewControllerWillBeginStatusUpdates:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)transitionState;
- (void)updatePresentationWithLocation:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 velocity:(struct CGPoint { double x1; double x2; })arg3;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willOpenExpandedSensorAttributionViewController;

@end

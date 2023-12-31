
@interface SBFloatingDockController : NSObject <BSDescriptionProviding, SBAssistantSceneControllingObserver, SBFZStackParticipantDelegate, SBFloatingDockRootViewControllerDelegate, SBFolderPresentationObserver, SBIconLocationPresenting, SBIconViewProviding, SBIconViewQuerying, SBLayoutStateTransitionObserver, SBReusableViewMapDelegate, SBRootFolderPageStateObserver, SBSystemGestureRecognizerDelegate> {
    SBFloatingDockBehaviorAssertion * _activeAssertion;
    SBFloatingDockBehaviorAssertion * _activeGestureFloatingDockBehaviorAssertion;
    SBFAnalyticsClient * _analyticsClient;
    SBFloatingDockBehaviorAssertion * _assistantFloatingDockBehaviorAssertion;
    <SBFloatingDockControllerDelegate> * _delegate;
    UIHoverGestureRecognizer * _dismissFloatingDockHoverGestureRecognizer;
    SBFailingSystemGestureRecognizer * _dismissFloatingDockSystemGestureRecognizer;
    NSPointerArray * _floatingDockBehaviorAssertionsByLevel;
    <BSInvalidatable> * _floatingDockRecursiveHitTestingStateDumpHandle;
    <BSInvalidatable> * _floatingDockStateDumpHandle;
    SBWindow * _floatingDockWindow;
    NSPointerArray * _floatingDockWindowLevelAssertionsByPriority;
    <BSInvalidatable> * _focusAssertion;
    bool  _homeScreenTodayViewTransitioning;
    bool  _homeScreenTransitioningToTodayView;
    SBIconController * _iconController;
    SBFloatingDockBehaviorAssertion * _iconPullSearchGestureShowingFloatingDockBehaviorAssertion;
    SBReusableViewMap * _iconViewMap;
    SBLayoutStateTransitionCoordinator * _layoutStateTransitionCoordinator;
    SBFloatingDockBehaviorAssertion * _openFolderOverHomeScreenFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion * _openFolderOverSceneLayoutFloatingDockBehaviorAssertion;
    SBIndirectPanGestureRecognizer * _presentFloatingDockIndirectPanGestureRecognizer;
    NSHashTable * _rootViewControllerOrderingAssertions;
    PTToggleTestRecipe * _testRecipe;
    SBFloatingDockBehaviorAssertion * _todayViewFloatingDockBehaviorAssertion;
    SBFloatingDockRootViewController * _viewController;
    bool  _wasFloatingDockPresentedByPointer;
    SBWindowScene * _windowScene;
    SBFZStackParticipant * _zStackParticipant;
}

@property (nonatomic) SBFloatingDockBehaviorAssertion *activeAssertion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFloatingDockControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIHoverGestureRecognizer *dismissFloatingDockHoverGestureRecognizer;
@property (nonatomic, readonly) SBFailingSystemGestureRecognizer *dismissFloatingDockSystemGestureRecognizer;
@property (nonatomic, readonly) double effectiveFloatingDockHeight;
@property (getter=isFloatingDockFullyPresented, nonatomic, readonly) bool floatingDockFullyPresented;
@property (nonatomic, readonly) double floatingDockHeight;
@property (getter=isFloatingDockPresented, nonatomic, readonly) bool floatingDockPresented;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } floatingDockScreenFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } floatingDockScreenPresentationFrame;
@property (nonatomic, readonly) SBFloatingDockViewController *floatingDockViewController;
@property (nonatomic, readonly) double floatingDockViewTopMargin;
@property (nonatomic, readonly) SBWindow *floatingDockWindow;
@property (getter=isGesturePossible, nonatomic, readonly) bool gesturePossible;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (getter=isLibraryPodIconEnabled, nonatomic, readonly) bool libraryPodIconEnabled;
@property (nonatomic, readonly) double maximumDockContinuousCornerRadius;
@property (nonatomic, readonly) double maximumFloatingDockHeight;
@property (nonatomic, readonly) double preferredVerticalMargin;
@property (nonatomic, readonly) SBIndirectPanGestureRecognizer *presentFloatingDockIndirectPanGestureRecognizer;
@property (nonatomic, readonly) SBFolderController *presentedFolderController;
@property (nonatomic, readonly, copy) NSSet *presentedIconLocations;
@property (getter=isPresentingFolder, nonatomic, readonly) bool presentingFolder;
@property (nonatomic, retain) SBApplication *requestedSuggestedApplication;
@property (nonatomic, readonly) SBIconListView *suggestionsIconListView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double translationFromFullyPresentedFrame;
@property (nonatomic, readonly) SBIconListView *userIconListView;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic) bool wasFloatingDockPresentedByPointer;
@property (nonatomic, readonly) SBWindowScene *windowScene;
@property (nonatomic, retain) SBFZStackParticipant *zStackParticipant;

+ (void)initialize;
+ (bool)isFloatingDockSupported;

- (void).cxx_destruct;
- (void)_addFloatingDockBehaviorAssertion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_addFloatingDockWindowLevelAssertion:(id)arg1;
- (bool)_allowGestureRecognizers;
- (bool)_canPresentFloatingDock;
- (void)_clearGestureAssertion;
- (void)_configureFloatingDockBehaviorAssertionForOpenFolder:(id)arg1 atLevel:(unsigned long long)arg2;
- (void)_deriveActiveAssertion:(id*)arg1 dockProgress:(double*)arg2;
- (void)_dismissFloatingDockIfPresentedAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (double)_dockProgressForHoverTranslation:(double)arg1;
- (void)_evaluateAssertions:(unsigned long long)arg1 interactive:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handleDismissFloatingDockHoverGesture:(id)arg1;
- (void)_handleTransitionForFolder:(id)arg1 atLevel:(unsigned long long)arg2 presenting:(bool)arg3 withTransitionCoordinator:(id)arg4;
- (unsigned long long)_indexOfPointerArray:(id)arg1 ofObject:(void*)arg2;
- (id)_initWithWindowScene:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 recentsController:(id)arg4 recentsDataStore:(id)arg5 layoutStateTransitionCoordinator:(id)arg6 appSuggestionManager:(id)arg7 analyticsClient:(id)arg8;
- (bool)_isActiveAssertionInDesiredLevel;
- (void)_presentFloatingDockIfDismissedAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_recalculateWindowLevelForWindowLevelAssertions;
- (void)_removeFloatingDockBehaviorAssertion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_removeFloatingDockWindowLevelAssertion:(id)arg1;
- (void)_setupStateDumper;
- (void)_updateFloatingDockBehaviorAssertionsInteractive:(bool)arg1 completion:(id /* block */)arg2;
- (void)_updateFocusAssertion;
- (id)activeAssertion;
- (void)assistantDidDisappear:(id)arg1;
- (void)assistantWillAppear:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dismissFloatingDockHoverGestureRecognizer;
- (void)dismissFloatingDockIfPresentedAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)dismissFloatingDockSystemGestureRecognizer;
- (void)dismissFloatingDockUsingKeyCommandIfPresentedAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)dismissPresentedFolderAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissPresentedFolderAnimated:(bool)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissPresentedLibraryAnimated:(bool)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (double)effectiveFloatingDockHeight;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (double)floatingDockHeight;
- (double)floatingDockHeightForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)floatingDockRootViewController:(id)arg1 acquireOrderFloatingDockContainerBeforeLibraryAssertionForReason:(id)arg2;
- (void)floatingDockRootViewController:(id)arg1 didChangeToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)floatingDockRootViewController:(id)arg1 floatingDockWantsToBePresented:(bool)arg2;
- (void)floatingDockRootViewController:(id)arg1 modifyProgress:(double)arg2 interactive:(bool)arg3 completion:(id /* block */)arg4;
- (void)floatingDockRootViewController:(id)arg1 willChangeToHeight:(double)arg2 interactive:(bool)arg3;
- (void)floatingDockRootViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(bool)arg3 withTransitionCoordinator:(id)arg4;
- (void)floatingDockRootViewControllerDidEndPresentationTransition:(id)arg1;
- (bool)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingDockScreenFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingDockScreenPresentationFrame;
- (id)floatingDockViewController;
- (double)floatingDockViewTopMargin;
- (id)floatingDockWindow;
- (id)foregroundLibraryContainerViewControllerForFloatingDockRootViewController:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePresentFloatingDockHoverGesture:(id)arg1;
- (bool)handlePromptingUserToUninstallIcon:(id)arg1 location:(id)arg2;
- (id)iconController;
- (void)iconManager:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(bool)arg3 withTransitionCoordinator:(id)arg4;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)iconViewMap;
- (id)initWithWindowScene:(id)arg1 iconController:(id)arg2;
- (bool)isDefaultLibraryContainerViewControllerForegroundForFloatingDockRootViewController:(id)arg1;
- (bool)isDisplayingIcon:(id)arg1;
- (bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (bool)isDisplayingIconView:(id)arg1;
- (bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (bool)isFloatingDockFullyPresented;
- (bool)isFloatingDockPresented;
- (bool)isGesturePossible;
- (bool)isIconViewRecycled:(id)arg1;
- (bool)isLibraryPodIconEnabled;
- (bool)isPresentingFolder;
- (bool)isPresentingIconLocation:(id)arg1;
- (bool)isPresentingLibraryInFloatingDockWindow;
- (id)layoutStateTransitionCoordinator;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutUserControlledIconListsWithAnimationType:(long long)arg1 forceRelayout:(bool)arg2;
- (id)legibilitySettings;
- (id)libraryContainerViewControllerForFloatingDockRootViewController:(id)arg1;
- (double)maximumDockContinuousCornerRadius;
- (double)maximumFloatingDockHeight;
- (double)minimumHomeScreenScaleForFloatingDockRootViewController:(id)arg1;
- (double)preferredVerticalMargin;
- (void)presentFloatingDockIfDismissedAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)presentFloatingDockIndirectPanGestureRecognizer;
- (void)presentFolderForIcon:(id)arg1 location:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)presentedFolderController;
- (id)presentedIconLocations;
- (void)recycleIconView:(id)arg1;
- (id)recycledViewsContainerProviderForViewMap:(id)arg1;
- (void)registerForWindowScene:(id)arg1;
- (id)requestedSuggestedApplication;
- (void)resetRecentsAndSuggestions;
- (void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3;
- (void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(bool)arg4;
- (void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(bool)arg3;
- (void)setActiveAssertion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutStateTransitionCoordinator:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setRequestedSuggestedApplication:(id)arg1;
- (void)setWasFloatingDockPresentedByPointer:(bool)arg1;
- (void)setZStackParticipant:(id)arg1;
- (bool)shouldShowCloseBoxForIconView:(id)arg1 proposedValue:(bool)arg2;
- (bool)shouldShowHideSuggestionForIconView:(id)arg1 proposedValue:(bool)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)suggestionsIconListView;
- (double)translationFromFullyPresentedFrame;
- (id)userIconListView;
- (id)viewController;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (bool)viewMap:(id)arg1 shouldRecycleView:(id)arg2;
- (bool)wasFloatingDockPresentedByPointer;
- (id)windowScene;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end


@interface SBHomeScreenOverlayViewController : UIViewController <SBHLibraryViewControllerPresenter, SBHVisibleContentPresenter, SBHWidgetSheetViewControllerPresenter, WGWidgetGroupViewControllerDelegate> {
    MTMaterialView * _backgroundView;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSizeForConstraints;
    NSLayoutConstraint * _contentLeadingConstraint;
    SBHRootSidebarController * _contentViewController;
    unsigned long long  _contentVisibility;
    NSLayoutConstraint * _contentWidthConstraint;
    unsigned long long  _defaultAnimationCount;
    <SBHomeScreenOverlayViewControllerDelegate> * _delegate;
    SBTitledHomeScreenButton * _doneButton;
    unsigned long long  _fadingAnimationCount;
    bool  _fromLeading;
    SBFTodayGestureSettings * _gestureSettings;
    UIViewController<SBHVisibleContentPresenter> * _leadingSidebarViewController;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    UIViewFloatAnimatableProperty * _overlayPresentationFloatAnimatableProperty;
    double  _presentationProgress;
    NSCountedSet * _reasonsToSnapshotBackgroundView;
    SBHRootFolderVisualConfiguration * _rootFolderVisualConfiguration;
    bool  _shouldUseReducedMotionAnimation;
    bool  _showsAddWidgetButton;
    bool  _showsDoneButton;
    bool  _suppressesExtraEditingButtons;
    double  _titledButtonsAlpha;
    UIViewController<SBHVisibleContentPresenter> * _trailingSidebarViewController;
    bool  _transitioningPresentationProgress;
    SBTitledHomeScreenButton * _widgetButton;
}

@property (nonatomic, readonly) MTMaterialView *backgroundView;
@property (nonatomic, retain) NSLayoutConstraint *contentLeadingConstraint;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (nonatomic, readonly) SBHRootSidebarController *contentViewController;
@property (nonatomic) unsigned long long contentVisibility;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic, retain) NSLayoutConstraint *contentWidthConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHomeScreenOverlayViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBTitledHomeScreenButton *doneButton;
@property (getter=isFromLeading, nonatomic) bool fromLeading;
@property (nonatomic, retain) SBFTodayGestureSettings *gestureSettings;
@property (readonly) unsigned long long hash;
@property (getter=isHeaderVisible, nonatomic, readonly) bool headerVisible;
@property (nonatomic, readonly) double layerPresentationProgress;
@property (nonatomic, retain) UIViewController<SBHVisibleContentPresenter> *leadingSidebarViewController;
@property (getter=isLibraryPresentationModal, nonatomic, readonly) bool libraryPresentationModal;
@property (nonatomic, readonly) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *overlayPresentationFloatAnimatableProperty;
@property (nonatomic) double presentationProgress;
@property (nonatomic, readonly) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property (nonatomic) bool shouldUseReducedMotionAnimation;
@property (nonatomic) bool showsAddWidgetButton;
@property (nonatomic) bool showsDoneButton;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesExtraEditingButtons;
@property (nonatomic) double titledButtonsAlpha;
@property (nonatomic, retain) UIViewController<SBHVisibleContentPresenter> *trailingSidebarViewController;
@property (getter=isTransitioningPresentationProgress, nonatomic) bool transitioningPresentationProgress;
@property (nonatomic, retain) SBTitledHomeScreenButton *widgetButton;

- (void).cxx_destruct;
- (void)_button:(id)arg1 appearAnimated:(bool)arg2;
- (void)_button:(id)arg1 disappearAnimated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)_canShowWhileLocked;
- (void)_configureMatchMoveAnimationForBackgroundView:(id)arg1 withSourceView:(id)arg2;
- (struct CGSize { double x1; double x2; })_suggestedTodayViewSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateBackgroundView;
- (void)_updateConstraintsForPresentationProgress:(double)arg1;
- (void)_updateConstraintsForPresentationProgress:(double)arg1 layoutIfNeeded:(bool)arg2;
- (void)_updateLayoutForEditButtonsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)acquireUseSnapshotAsBackgroundViewAssertionForReason:(id)arg1;
- (void)animatePresentationProgress:(double)arg1 withGestureLiftOffVelocity:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)backgroundView;
- (bool)bs_beginAppearanceTransition:(bool)arg1 animated:(bool)arg2;
- (bool)bs_endAppearanceTransition;
- (bool)bs_endAppearanceTransition:(bool)arg1;
- (unsigned long long)childContentVisibility;
- (id)contentLeadingConstraint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (id)contentViewController;
- (unsigned long long)contentVisibility;
- (double)contentWidth;
- (id)contentWidthConstraint;
- (double)contentWidthWithContainerWidth:(double)arg1;
- (id)currentSidebarViewController;
- (id)delegate;
- (id)doneButton;
- (void)doneButtonTriggered:(id)arg1;
- (id)gestureSettings;
- (id)initWithListLayoutProvider:(id)arg1;
- (bool)isDisplayingEditingButtons;
- (bool)isFromLeading;
- (bool)isHeaderVisible;
- (bool)isLibraryPresentationModal;
- (bool)isPresentingLibraryInMostForegroundState:(id)arg1;
- (bool)isTransitioningPresentationProgress;
- (double)layerPresentationProgress;
- (id)leadingSidebarViewController;
- (id)listLayoutProvider;
- (void)loadView;
- (id)makeTitledButtonOfClass:(Class)arg1;
- (id)newHomeScreenButtonBackgroundView;
- (id)overlayPresentationFloatAnimatableProperty;
- (double)presentationProgress;
- (unsigned long long)presenterType;
- (id)rootFolderVisualConfiguration;
- (void)setContentLeadingConstraint:(id)arg1;
- (void)setContentVisibility:(unsigned long long)arg1;
- (void)setContentWidthConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setFromLeading:(bool)arg1;
- (void)setGestureSettings:(id)arg1;
- (void)setLeadingSidebarViewController:(id)arg1;
- (void)setOverlayPresentationFloatAnimatableProperty:(id)arg1;
- (void)setPresentationProgress:(double)arg1;
- (void)setPresentationProgress:(double)arg1 interactive:(bool)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)setPresentationProgress:(double)arg1 withAnimationUpdateMode:(long long)arg2 overrideAnimationSettings:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setShouldUseReducedMotionAnimation:(bool)arg1;
- (void)setShowsAddWidgetButton:(bool)arg1;
- (void)setShowsAddWidgetButton:(bool)arg1 animated:(bool)arg2;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setShowsDoneButton:(bool)arg1 animated:(bool)arg2;
- (void)setSuppressesEditingStateForListView:(bool)arg1;
- (void)setSuppressesExtraEditingButtons:(bool)arg1;
- (void)setTitledButtonsAlpha:(double)arg1;
- (void)setTrailingSidebarViewController:(id)arg1;
- (void)setTransitioningPresentationProgress:(bool)arg1;
- (void)setWidgetButton:(id)arg1;
- (bool)shouldUseReducedMotionAnimation;
- (bool)showsAddWidgetButton;
- (bool)showsDoneButton;
- (bool)suppressesExtraEditingButtons;
- (double)titledButtonsAlpha;
- (id)trailingSidebarViewController;
- (void)updateExtraButtonVisibilityAnimated:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)widgetButton;
- (void)widgetButtonTriggered:(id)arg1;
- (struct CGSize { double x1; double x2; })widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2;

@end

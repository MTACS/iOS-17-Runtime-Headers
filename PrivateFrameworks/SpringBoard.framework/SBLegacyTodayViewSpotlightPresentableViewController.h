
@interface SBLegacyTodayViewSpotlightPresentableViewController : UIViewController <SBSearchPresentable, SPUIRemoteSearchViewDelegate> {
    <SBLegacyTodayViewSpotlightPresentableViewControllerDelegate> * _delegate;
    NSLayoutConstraint * _featherBlurHeightConstraint;
    SBFFeatherBlurView * _featherBlurView;
    double  _maxPresentationOffset;
    UIScrollView * _scrollView;
    MTMaterialView * _searchBackdropView;
    NSArray * _searchBarGradientMaskLayers;
    NSMutableSet * _searchBarPortalRequirementReasons;
    _UIPortalView * _searchBarPortalView;
    SPUISearchBarController * _searchBarViewController;
    NSLayoutConstraint * _searchBarViewTopConstraint;
    SBSpotlightMultiplexingViewController * _spotlightMultiplexingViewController;
    double  _topOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBLegacyTodayViewSpotlightPresentableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutConstraint *featherBlurHeightConstraint;
@property (nonatomic, retain) SBFFeatherBlurView *featherBlurView;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxPresentationOffset;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, retain) MTMaterialView *searchBackdropView;
@property (nonatomic, retain) NSArray *searchBarGradientMaskLayers;
@property (nonatomic, retain) NSMutableSet *searchBarPortalRequirementReasons;
@property (nonatomic, retain) _UIPortalView *searchBarPortalView;
@property (nonatomic, readonly) SPUISearchBarController *searchBarViewController;
@property (nonatomic, retain) NSLayoutConstraint *searchBarViewTopConstraint;
@property (nonatomic, retain) SBHHomePullToSearchSettings *searchTransitionSettings;
@property (nonatomic, readonly) SBSpotlightMultiplexingViewController *spotlightMultiplexingViewController;
@property (readonly) Class superclass;
@property (nonatomic) double topOffset;

- (void).cxx_destruct;
- (void)_beginRequiringSearchBarPortalViewForReason:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_endRequiringSearchBarPortalViewForReason:(id)arg1;
- (void)_setUpFeatherBackgroundMatchMoveAnimations;
- (void)_setUpSearchBackdrop;
- (void)_setUpSearchBackdropMatchMoveAnimation;
- (void)_setUpSearchBar;
- (id)_sharedRemoteSearchViewController;
- (void)_updateMaskLayers;
- (id)delegate;
- (void)dismissSearchView;
- (id)featherBlurHeightConstraint;
- (id)featherBlurView;
- (id)initWithSpotlightMultiplexingViewController:(id)arg1 searchBarViewController:(id)arg2 scrollView:(id)arg3;
- (double)maxPresentationOffset;
- (id)scrollView;
- (id)searchBackdropView;
- (id)searchBarGradientMaskLayers;
- (id)searchBarPortalRequirementReasons;
- (id)searchBarPortalView;
- (id)searchBarViewController;
- (id)searchBarViewTopConstraint;
- (void)setDelegate:(id)arg1;
- (void)setFeatherBlurHeightConstraint:(id)arg1;
- (void)setFeatherBlurView:(id)arg1;
- (void)setMaxPresentationOffset:(double)arg1;
- (void)setSearchBackdropView:(id)arg1;
- (void)setSearchBarGradientMaskLayers:(id)arg1;
- (void)setSearchBarPortalRequirementReasons:(id)arg1;
- (void)setSearchBarPortalView:(id)arg1;
- (void)setSearchBarViewTopConstraint:(id)arg1;
- (void)setTopOffset:(double)arg1;
- (id)spotlightMultiplexingViewController;
- (double)topOffset;
- (void)updatePresentationProgress:(double)arg1 withOffset:(double)arg2 velocity:(double)arg3 presentationState:(long long)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id /* block */)willBeginModifyingPresentationProgressForState:(long long)arg1 animated:(bool)arg2 needsInitialLayout:(bool*)arg3;

@end

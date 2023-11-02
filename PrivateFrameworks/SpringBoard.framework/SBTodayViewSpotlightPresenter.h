
@interface SBTodayViewSpotlightPresenter : NSObject <SBHLegibility, SBLegacyTodayViewSpotlightPresentableViewControllerDelegate, SBSearchPresenterDelegate, SBSpotlightPresentableViewControllerDelegate, SPUISearchBarDelegate> {
    UIView * _containerView;
    <SBTodayViewSpotlightPresenterDelegate> * _delegate;
    SBFFeatherBlurView * _featherBlurView;
    _UILegibilitySettings * _legibilitySettings;
    SBSearchPresenter * _presenter;
    SBHHomePullToSearchSettings * _pullToSearchSettings;
    UIScrollView * _scrollView;
    NSArray * _searchBarGradientMaskLayers;
    SPUISearchBarController * _searchBarViewController;
    _SBTodaySpotlightViewController * _spotlightMultiplexingViewController;
    UIViewController * _spotlightViewController;
}

@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBTodayViewSpotlightPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBFFeatherBlurView *featherBlurView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) SBSearchPresenter *presenter;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) NSArray *searchBarGradientMaskLayers;
@property (nonatomic, readonly) SPUISearchBarController *searchBarViewController;
@property (nonatomic, retain) _SBTodaySpotlightViewController *spotlightMultiplexingViewController;
@property (nonatomic, readonly) UIViewController *spotlightViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureFeatherBlurMatchMoveAnimations;
- (id)_newSearchBackdropView;
- (void)_setUpFeatherBlur;
- (void)_setUpStartingScrollOffset;
- (double)_topOffset;
- (void)_updateFeatherBlurMaskLayers;
- (id)backdropViewForLegacyTodayViewSpotlightPresentableViewController:(id)arg1;
- (id)backgroundViewForSpotlightPresentableViewController:(id)arg1;
- (id)containerView;
- (void)containerViewDidMoveToWindow:(id)arg1;
- (id)delegate;
- (void)dismissSpotlightAnimated:(bool)arg1;
- (id)featherBlurView;
- (id)initWithSearchBarViewController:(id)arg1 containerView:(id)arg2 scrollView:(id)arg3 delegate:(id)arg4;
- (bool)isPresenting;
- (void)layout;
- (void)legacyTodayViewSpotlightPresentableViewControllerShouldDismiss:(id)arg1;
- (id)legibilitySettings;
- (void)presentSpotlightAnimated:(bool)arg1;
- (id)presenter;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)searchBarDidFocus;
- (id)searchBarGradientMaskLayers;
- (id)searchBarViewController;
- (id)searchPresentablesForPresenter:(id)arg1;
- (bool)searchPresenterCanPresent:(id)arg1;
- (void)searchPresenterDidDismissSearch:(id)arg1;
- (void)searchPresenterDidPresentSearch:(id)arg1;
- (void)searchPresenterWillDismissSearch:(id)arg1 animated:(bool)arg2;
- (void)searchPresenterWillPresentSearch:(id)arg1 animated:(bool)arg2;
- (double)searchTopOffsetForSearchPresenter:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeatherBlurView:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSearchBarGradientMaskLayers:(id)arg1;
- (void)setSpotlightMultiplexingViewController:(id)arg1;
- (id)spotlightMultiplexingViewController;
- (void)spotlightPresentableViewControllerShouldDismiss:(id)arg1;
- (id)spotlightViewController;
- (bool)wantsHomeAffordanceForSpotlightPresentableViewController:(id)arg1;

@end

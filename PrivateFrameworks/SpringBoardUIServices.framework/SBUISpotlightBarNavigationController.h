
@interface SBUISpotlightBarNavigationController : UINavigationController <UINavigationControllerDelegate> {
    _UILegibilitySettings * _legibilitySettings;
    bool  _pullingToSearch;
    UIViewController<SBUISearchBarControlling> * _searchBarViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (readonly) SBSearchBar *navigationBar;
@property (getter=isNavigationBarBottomTrailingCornerRounded) bool navigationBarBottomTrailingCornerRounded;
@property (getter=isPullingToSearch, nonatomic) bool pullingToSearch;
@property (nonatomic, retain) UIViewController<SBUISearchBarControlling> *searchBarViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 searchBarViewController:(id)arg2;
- (bool)isNavigationBarBottomTrailingCornerRounded;
- (bool)isPullingToSearch;
- (id)legibilitySettings;
- (id)searchBarViewController;
- (void)setLegibilitySettings:(id)arg1;
- (void)setNavigationBarBlurProgress:(double)arg1 animated:(bool)arg2;
- (void)setNavigationBarBottomTrailingCornerRounded:(bool)arg1;
- (void)setPullingToSearch:(bool)arg1;
- (void)setSearchBarViewController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end

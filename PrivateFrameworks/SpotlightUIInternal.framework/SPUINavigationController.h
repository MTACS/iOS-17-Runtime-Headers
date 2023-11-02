
@interface SPUINavigationController : UINavigationController <SPUISearchViewControllerSizingDelegate, SearchUIBackgroundColorDelegate, SearchUIBackgroundColorViewProtocol, SearchUICardViewDelegate, UINavigationControllerDelegate> {
    SearchUIBackgroundColorView * _backgroundView;
    double  _contentHeight;
    bool  _isFirstInitialization;
    long long  _navigationMode;
    SPUISearchViewController * _searchViewController;
    <SPUINavigationControllerDelegate> * _sizingDelegate;
    SearchUIBackgroundColorView * _transitioningBackgroundView;
    <SPUIUnifiedFieldNavigationDelegate> * _unifiedFieldDelegate;
}

@property (nonatomic, retain) SearchUIBackgroundColorView *backgroundView;
@property (readonly) double contentHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isFirstInitialization;
@property (nonatomic, readonly) SPUINavigationBar *navigationBar;
@property (nonatomic) long long navigationMode;
@property (retain) SPUISearchViewController *searchViewController;
@property (nonatomic) <SPUINavigationControllerDelegate> *sizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUIBackgroundColorView *transitioningBackgroundView;
@property (nonatomic) <SPUIUnifiedFieldNavigationDelegate> *unifiedFieldDelegate;

+ (id)backgroundColorForViewController:(id)arg1;
+ (id)viewControllerWithBackgroundColorForViewController:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)applyCardHeightAnimated:(bool)arg1;
- (id)backgroundView;
- (void)cardViewController:(id)arg1 preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3;
- (double)contentHeight;
- (double)contentHeightIncludingCardViewController;
- (double)contentHeightIncludingSearchView;
- (void)didInvalidateSizeAnimated:(bool)arg1;
- (void)didUpdateBackgroundColorForViewController:(id)arg1;
- (id)generateFooterViewIfNeeded;
- (double)heightOfNavigationBar;
- (id)init;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithSearchViewController:(id)arg1;
- (bool)isFirstInitialization;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (long long)navigationMode;
- (void)resetSearchFieldContentWithSearchToken:(id)arg1 text:(id)arg2 wantsBackButton:(bool)arg3 transitionCoordinator:(id)arg4;
- (id)searchViewController;
- (void)setBackgroundView:(id)arg1;
- (void)setContentHeight:(double)arg1 animated:(bool)arg2;
- (void)setIsFirstInitialization:(bool)arg1;
- (void)setNavigationMode:(long long)arg1;
- (void)setSearchViewController:(id)arg1;
- (void)setSizingDelegate:(id)arg1;
- (void)setTransitioningBackgroundView:(id)arg1;
- (void)setUnifiedFieldDelegate:(id)arg1;
- (id)sizingDelegate;
- (void)tapToRadarPressed;
- (id)transitioningBackgroundView;
- (id)unifiedFieldDelegate;
- (void)updateBackButton:(bool)arg1;
- (void)updateBackgroundColorWithViewControllerToBeShown:(id)arg1;
- (void)updateFooterViewForViewController:(id)arg1;
- (void)updateFooterViewsIfNecessary;
- (void)updateSearchFieldForViewController:(id)arg1;
- (id)viewContainingContent;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

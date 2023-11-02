
@interface SBCoverSheetSpotlightPresenter : NSObject <CSCoverSheetSpotlightPresenting, SBCoverSheetSpotlightViewControllerDelegate, SBSearchPresenterDelegate, SBSpotlightPresentableViewControllerDelegate> {
    <SBCoverSheetSpotlightPresenterDelegate> * _delegate;
    _UILegibilitySettings * _legibilitySettings;
    UIScrollView * _scrollView;
    SBSearchPresenter * _searchPresenter;
    SBCoverSheetSpotlightViewController * _spotlightViewController;
    double  _strength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpStartingScrollOffsetWithScrollView:(id)arg1;
- (id)backgroundViewForSpotlightPresentableViewController:(id)arg1;
- (void)coverSheetSpotlightViewControllerAddContentView:(id)arg1;
- (void)coverSheetSpotlightViewControllerRemoveContentView:(id)arg1;
- (void)coverSheetSpotlightViewControllerShouldDismiss:(id)arg1 animated:(bool)arg2;
- (void)dismissSpotlightAnimated:(bool)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isSpotlightPresented;
- (id)legibilitySettings;
- (void)presentSpotlightAnimated:(bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)searchPresentablesForPresenter:(id)arg1;
- (bool)searchPresenterCanPresent:(id)arg1;
- (void)searchPresenterWillDismissSearch:(id)arg1 animated:(bool)arg2;
- (void)searchPresenterWillPresentSearch:(id)arg1 animated:(bool)arg2;
- (double)searchTopOffsetForSearchPresenter:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)spotlightPresentableViewControllerShouldDismiss:(id)arg1;
- (double)strength;

@end

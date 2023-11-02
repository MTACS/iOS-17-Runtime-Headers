
@protocol CKNavbarCanvasViewControllerDelegate <NSObject>

@required

- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 didTapView:(UIView *)arg2;
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 infoButtonTapped:(CKNavigationButtonView *)arg2;
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 updatedJoinStateWithStyle:(long long)arg2;
- (void)navbarCanvasViewControllerCanvasHeightDidChange:(CKNavbarCanvasViewController *)arg1;
- (void)navbarCanvasViewControllerFaceTimeAudioButtonTapped:(CKNavbarCanvasViewController *)arg1;
- (void)navbarCanvasViewControllerFaceTimeVideoButtonTapped:(CKNavbarCanvasViewController *)arg1;
- (void)navbarCanvasViewControllerLegacyCanvasHeightDidChange:(CKNavbarCanvasViewController *)arg1;
- (bool)shouldConfigureForJunkModalInNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1;
- (bool)shouldShowAvatarViewInNavBarCanvas;
- (bool)shouldShowChevronInNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1;
- (bool)shouldShowFacetimeButtonInNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })systemMinimumLayoutMarginsForViewController:(UIViewController *)arg1;

@optional

- (bool)shouldShowLocationLabelInNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1;
- (long long)unreadCountForCurrentFilterModeForNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1;

@end

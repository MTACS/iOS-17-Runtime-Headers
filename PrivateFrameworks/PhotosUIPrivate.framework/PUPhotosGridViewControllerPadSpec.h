
@interface PUPhotosGridViewControllerPadSpec : PUPhotosGridViewControllerSpec

- (id)albumPickerViewControllerSpec;
- (struct CGSize { double x1; double x2; })baseInterItemSpacing;
- (bool)canDisplayEditActionsInNavigationBar;
- (bool)canDisplayOptionsInPopover;
- (bool)canDisplaySlideshowButton;
- (long long)cellBannerTextAlignment;
- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (long long)sectionHeaderStyle;
- (bool)shouldPlaceDeleteInCenterToolbarPosition;
- (bool)shouldPlaceSelectAllButtonInRightNavigationBar;
- (bool)shouldUseAspectItems;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned short)thumbnailImageFormat;
- (bool)usesStackPopTransition;
- (bool)wantsBackButtonTitleForPhotoBrowser;
- (bool)wantsCustomNavigationTransition;

@end

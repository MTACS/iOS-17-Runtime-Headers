
@protocol CCUIOverlayViewProvider <NSObject>

@required

- (MTMaterialView *)overlayBackgroundView;
- (UIView *)overlayContainerView;
- (CCUIHeaderPocketView *)overlayHeaderView;
- (UIStatusBar *)overlayLeadingStatusBar;
- (CCUIModuleCollectionView *)overlayModuleCollectionView;
- (UIScrollView *)overlayScrollView;
- (CCUIStatusLabelViewController *)overlayStatusLabelViewController;
- (void)setOverlayStatusBarHidden:(bool)arg1;

@end

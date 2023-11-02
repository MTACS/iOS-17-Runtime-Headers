
@protocol PXCuratedLibraryFilterTipControllerDelegate

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchorViewRectForController:(PXCuratedLibraryFilterTipController *)arg1;
- (void)didDismissTipForController:(PXCuratedLibraryFilterTipController *)arg1;
- (NSArray *)passthroughViewsForTipForController:(PXCuratedLibraryFilterTipController *)arg1;
- (UIViewController *)viewControllerToPresentTipForController:(PXCuratedLibraryFilterTipController *)arg1;
- (UIView *)viewToPresentTipForController:(PXCuratedLibraryFilterTipController *)arg1;
- (void)willPresentTipForController:(PXCuratedLibraryFilterTipController *)arg1;

@end

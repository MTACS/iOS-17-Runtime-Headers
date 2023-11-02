
@protocol UISheetPresentationControllerDelegatePrivate <UISheetPresentationControllerDelegate>

@optional

- (void)_sheetPresentationControllerDidChangeHosting:(UISheetPresentationController *)arg1;
- (void)_sheetPresentationControllerDidInvalidateCurrentPresentedViewFrame:(UISheetPresentationController *)arg1;
- (void)_sheetPresentationControllerDidInvalidateDetentValues:(UISheetPresentationController *)arg1;
- (UIView *)_sheetPresentationControllerViewForTouchContinuation:(UISheetPresentationController *)arg1;

@end

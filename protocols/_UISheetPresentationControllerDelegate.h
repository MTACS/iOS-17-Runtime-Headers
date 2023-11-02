
@protocol _UISheetPresentationControllerDelegate <UISheetPresentationControllerDelegatePrivate>

@optional

- (void)_sheetPresentationController:(_UISheetPresentationController *)arg1 didChangeIndexOfCurrentDetent:(long long)arg2;
- (void)_sheetPresentationControllerDidInvalidateCurrentPresentedViewFrame:(_UISheetPresentationController *)arg1;
- (void)_sheetPresentationControllerDidInvalidateDetentValues:(_UISheetPresentationController *)arg1;
- (UIView *)_sheetPresentationControllerViewForTouchContinuation:(_UISheetPresentationController *)arg1;

@end

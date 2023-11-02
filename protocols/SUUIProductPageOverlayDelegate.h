
@protocol SUUIProductPageOverlayDelegate <NSObject>

@optional

- (UIView *)productPageOverlay:(SUUIProductPageOverlayController *)arg1 flipSourceViewToDismissItem:(SUUIItem *)arg2;
- (UIView *)productPageOverlay:(SUUIProductPageOverlayController *)arg1 flipSourceViewToPresentItem:(SUUIItem *)arg2;
- (void)productPageOverlayDidDismiss:(SUUIProductPageOverlayController *)arg1;
- (void)productPageOverlayDidDismiss:(SUUIProductPageOverlayController *)arg1 toPresentViewController:(UIViewController *)arg2;

@end


@protocol SKUIProductPageOverlayDelegate <NSObject>

@optional

- (UIView *)productPageOverlay:(SKUIProductPageOverlayController *)arg1 flipSourceViewToDismissItem:(SKUIItem *)arg2;
- (UIView *)productPageOverlay:(SKUIProductPageOverlayController *)arg1 flipSourceViewToPresentItem:(SKUIItem *)arg2;
- (void)productPageOverlayDidDismiss:(SKUIProductPageOverlayController *)arg1;
- (void)productPageOverlayDidDismiss:(SKUIProductPageOverlayController *)arg1 toPresentViewController:(UIViewController *)arg2;

@end

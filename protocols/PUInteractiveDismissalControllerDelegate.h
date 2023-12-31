
@protocol PUInteractiveDismissalControllerDelegate <NSObject>

@required

- (UIViewController *)interactiveDismissalControllerViewController:(PUInteractiveDismissalController *)arg1;
- (UIView *)interactiveDismissalControllerViewHostingGestureRecognizers:(PUInteractiveDismissalController *)arg1;

@optional

- (bool)interactiveDismissalController:(PUInteractiveDismissalController *)arg1 canBeginDismissalAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (void)interactiveDismissalControllerChangedIsHandlingDismissalInteraction:(PUInteractiveDismissalController *)arg1;
- (PUTileController *)interactiveDismissalControllerDesignatedTileController:(PUInteractiveDismissalController *)arg1;
- (PUTilingView *)interactiveDismissalControllerTilingView:(PUInteractiveDismissalController *)arg1;

@end

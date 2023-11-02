
@protocol PUUserTransformTileViewControllerDelegate <NSObject>

@optional

- (long long)contentAccessoryViewForCurrentAsset;
- (void)userTransformTileViewController:(PUUserTransformTileViewController *)arg1 didChangeIsUserInteracting:(bool)arg2;
- (void)userTransformTileViewController:(PUUserTransformTileViewController *)arg1 didChangeModelTileTransform:(PUModelTileTransform *)arg2;
- (bool)userTransformTileViewController:(PUUserTransformTileViewController *)arg1 shouldReceiveTouchAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (UIView *)userTransformTileViewControllerPresentingTileView:(PUUserTransformTileViewController *)arg1;
- (UIViewController *)userTransformTileViewControllerPresentingViewController:(PUUserTransformTileViewController *)arg1;
- (bool)userTransformTileViewControllerShouldShowVisualIntelligenceOverlay:(PUUserTransformTileViewController *)arg1;
- (void)userTransformTileViewControllerShowDetailsView:(PUUserTransformTileViewController *)arg1;
- (NSArray *)userTransformTileViewControllerTextsToHighlight:(PUUserTransformTileViewController *)arg1;

@end

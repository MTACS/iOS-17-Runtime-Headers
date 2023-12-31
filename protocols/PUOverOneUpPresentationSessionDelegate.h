
@protocol PUOverOneUpPresentationSessionDelegate <NSObject>

@required

- (void)overOneUpPresentationSession:(PUOverOneUpPresentationSession *)arg1 didPresent:(UIViewController *)arg2;
- (PUBrowsingViewModel *)overOneUpPresentationSessionBrowserViewModel:(PUOverOneUpPresentationSession *)arg1;
- (PUTileController *)overOneUpPresentationSessionCurrentTileController:(PUOverOneUpPresentationSession *)arg1;
- (void)overOneUpPresentationSessionDidFinish:(PUOverOneUpPresentationSession *)arg1;
- (bool)overOneUpPresentationSessionPresentingViewControllerIsReady:(PUOverOneUpPresentationSession *)arg1;
- (PUTilingView *)overOneUpPresentationSessionTilingView:(PUOverOneUpPresentationSession *)arg1;
- (UIViewController<PUOneUpAssetTransitionViewController><PUAssetDisplayDescriptorNavigator> *)overOneUpPresentationSessionViewController:(PUOverOneUpPresentationSession *)arg1;

@end

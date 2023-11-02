
@protocol PUImageTileViewControllerPresentingDelegate <NSObject>

@optional

- (UIViewController *)imageTileViewControllerPresentingViewController:(PUImageTileViewController *)arg1;
- (bool)imageTileViewControllerShouldEnableSubjectLiftingForVisualIntelligenceOverlay:(PUImageTileViewController *)arg1;
- (bool)imageTileViewControllerShouldShowVisualIntelligenceOverlay:(PUImageTileViewController *)arg1;
- (bool)ppt_imageTileViewControllerShouldSignalDeferredProcessingDoneAndFinalImageDisplayed:(PUImageTileViewController *)arg1;

@end

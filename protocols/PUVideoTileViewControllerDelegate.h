
@protocol PUVideoTileViewControllerDelegate <NSObject>

@optional

- (UIViewController *)videoTileViewControllerPresentingViewController:(PUVideoTileViewController *)arg1;
- (bool)videoTileViewControllerShouldEnableSubjectLiftingForVisualIntelligenceOverlay:(PUVideoTileViewController *)arg1;
- (bool)videoTileViewControllerShouldShowVisualIntelligenceOverlay:(PUVideoTileViewController *)arg1;

@end

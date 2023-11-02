
@protocol AVTPoseSelectionGridViewControllerDelegate <NSObject>

@required

- (void)poseSelectionGridController:(AVTPoseSelectionGridViewController *)arg1 didSelectConfiguration:(AVTStickerConfiguration *)arg2;
- (void)poseSelectionGridControllerDidSelectCameraItem:(AVTPoseSelectionGridViewController *)arg1;

@end

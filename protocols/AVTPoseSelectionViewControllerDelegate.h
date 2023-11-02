
@protocol AVTPoseSelectionViewControllerDelegate <NSObject>

@required

- (void)poseSelectionController:(AVTPoseSelectionViewController *)arg1 didSelectPoseWithConfiguration:(AVTStickerConfiguration *)arg2;
- (void)poseSelectionControllerDidCancel:(AVTPoseSelectionViewController *)arg1;

@end

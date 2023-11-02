
@protocol PUPhotoEditViewControllerPresentationDelegate <NSObject>

@required

- (void)editController:(PUPhotoEditViewController *)arg1 didFinishPreparingForTransitionAfterEditingPhoto:(id <PUEditableAsset>)arg2;
- (void)editController:(PUPhotoEditViewController *)arg1 didFinishPreparingForTransitionAfterEditingVideo:(id <PUEditableAsset>)arg2 modificationDate:(NSDate *)arg3 seekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;

@end


@protocol BWStillImageCaptureStatusDelegate <NSObject>

@required

- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 didCancelMomentCaptureForSettingsID:(long long)arg2 streamingDisruptionEndPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 didCapturePhotoForSettings:(BWStillImageSettings *)arg2;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 didResolveStillImagePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forSettings:(BWStillImageSettings *)arg3 isPreBracketedEV0:(bool)arg4;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 didSelectNewReferenceFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 transform:(NSArray *)arg3 forSettings:(BWStillImageSettings *)arg4;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 readyToRespondToRequestAfterRequestWithSettings:(BWStillImageSettings *)arg2;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 willBeginCaptureBeforeResolvingSettingsForID:(long long)arg2;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 willBeginCaptureForSettings:(BWStillImageSettings *)arg2;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 willCapturePhotoForSettings:(BWStillImageSettings *)arg2 error:(int)arg3;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 willPrepareStillImageCaptureWithSettings:(BWStillImageSettings *)arg2 clientInitiated:(bool)arg3;

@end

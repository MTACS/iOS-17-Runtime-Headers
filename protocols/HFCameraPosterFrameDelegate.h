
@protocol HFCameraPosterFrameDelegate

@required

- (void)didFindPosterFrame:(UIImage *)arg1 atOffset:(double)arg2 forClip:(HMCameraClip *)arg3;
- (void)failedToFindPosterFrameAtOffset:(double)arg1 forClip:(HMCameraClip *)arg2;

@end

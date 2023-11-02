
@protocol HFCameraTimelapsePosterFrameGeneratorDelegate

@required

- (void)didGeneratePosterFrame:(UIImage *)arg1 forHighQualityClip:(HMCameraClip *)arg2 atOffset:(double)arg3 withTimelapseOffset:(double)arg4;
- (void)failedToFindTimelapseClipForHighQualityClip:(HMCameraClip *)arg1;
- (void)failedToGeneratePosterFrameForHighQualityClip:(HMCameraClip *)arg1 atOffset:(double)arg2;

@end

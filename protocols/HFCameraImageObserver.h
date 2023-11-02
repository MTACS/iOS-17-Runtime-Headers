
@protocol HFCameraImageObserver

@optional

- (void)manager:(HFCameraImageManager *)arg1 didFindFaceCrop:(UIImage *)arg2 forClip:(HMCameraClip *)arg3 usingPersonName:(NSString *)arg4;
- (void)manager:(HFCameraImageManager *)arg1 didFindHeroFrame:(UIImage *)arg2 forClip:(HMCameraClip *)arg3;
- (void)manager:(HFCameraImageManager *)arg1 didFindImage:(UIImage *)arg2 atTimeOffset:(double)arg3 forClip:(HMCameraClip *)arg4;
- (void)manager:(HFCameraImageManager *)arg1 didGenerateImage:(UIImage *)arg2 atOffset:(double)arg3 forClip:(HMCameraClip *)arg4;
- (void)manager:(HFCameraImageManager *)arg1 failedToFindFaceCropForPersonName:(NSString *)arg2;
- (void)manager:(HFCameraImageManager *)arg1 failedToFindHeroFrameforClip:(HMCameraClip *)arg2;
- (void)manager:(HFCameraImageManager *)arg1 failedToFindImageAtTimeOffset:(double)arg2 forClip:(HMCameraClip *)arg3;
- (void)manager:(HFCameraImageManager *)arg1 failedToGenerateImageAtOffset:(double)arg2 forClip:(HMCameraClip *)arg3;

@end


@protocol PBUIIrisWallpaperPlaying <NSObject>

@required

- (<PBUIIrisWallpaperPlayerDelegate> *)irisDelegate;
- (UIGestureRecognizer *)irisGestureRecognizer;
- (long long)irisPlaybackState;
- (bool)isIrisInteracting;
- (void)setIrisDelegate:(id <PBUIIrisWallpaperPlayerDelegate>)arg1;
- (double)stillTimeInVideo;
- (NSURL *)videoFileURL;

@end

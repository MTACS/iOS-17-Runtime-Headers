
@interface CAMVideoStabilizationStatusIndicator : CAMControlStatusIndicator {
    long long  _videoStabilizationMode;
}

@property (setter=setVideoStabilizationMode:, nonatomic) long long videoStabilizationMode;

- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (void)setVideoStabilizationMode:(long long)arg1;
- (void)setVideoStabilizationMode:(long long)arg1 animated:(bool)arg2;
- (bool)shouldFillOutlineForCurrentState;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;
- (long long)videoStabilizationMode;

@end


@protocol PXGMutableDisplayAssetVideoPresentationController

@required

- (NSString *)audioSessionCategory;
- (long long)desiredPlayState;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })desiredTime;
- (bool)isCleanApertureCompensationEnabled;
- (bool)isCrossfadingFromStillToVideoEnabled;
- (bool)isDuckingOtherAudioEnabled;
- (bool)isLoopingEnabled;
- (bool)isMixingAudioWithOthersEnabled;
- (bool)isVisible;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackStartTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })playbackTimeRange;
- (void)prerollForImmediatePlaybackAtRate:(float)arg1 withMediaProvider:(PXMediaProvider *)arg2;
- (bool)resetsDesiredPlayStateOnHide;
- (void)seekToBeginning;
- (void)setAudioSessionCategory:(NSString *)arg1;
- (void)setDesiredPlayState:(long long)arg1;
- (void)setDesiredTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDesiredTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setIsCleanApertureCompensationEnabled:(bool)arg1;
- (void)setIsCrossfadingFromStillToVideoEnabled:(bool)arg1;
- (void)setIsDuckingOtherAudioEnabled:(bool)arg1;
- (void)setIsLoopingEnabled:(bool)arg1;
- (void)setIsMixingAudioWithOthersEnabled:(bool)arg1;
- (void)setIsVisible:(bool)arg1;
- (void)setPlaybackStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPlaybackTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setResetsDesiredPlayStateOnHide:(bool)arg1;
- (void)setShouldDisableAutomaticPixelBufferUpdates:(bool)arg1;
- (void)setShouldDisplayPreviousNonNullPixelBuffer:(bool)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVolume:(float)arg1 withFade:(bool)arg2;
- (bool)shouldDisableAutomaticPixelBufferUpdates;
- (bool)shouldDisplayPreviousNonNullPixelBuffer;
- (void)startObservingBoundaryTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)stopObservingBoundaryTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)synchronouslySeekToDesiredTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 updatePixelBufferSource:(bool)arg2;
- (struct CGSize { double x1; double x2; })targetSize;

@end

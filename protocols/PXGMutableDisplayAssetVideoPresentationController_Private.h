
@protocol PXGMutableDisplayAssetVideoPresentationController_Private <PXGMutableDisplayAssetVideoPresentationController>

@required

- (long long)actualPlayState;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })actualTime;
- (bool)isAtEnd;
- (bool)isReadyForImmediatePlayback;
- (void)setActualPlayState:(long long)arg1;
- (void)setActualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIsAtEnd:(bool)arg1;
- (void)setIsReadyForImmediatePlayback:(bool)arg1;
- (void)setVideoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoDuration;

@end

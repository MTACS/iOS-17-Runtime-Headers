
@interface AVSampleBufferDisplayLayerPlaybackDelegateAdapter : NSObject <AVPictureInPictureSampleBufferPlaybackDelegate> {
    <AVPictureInPictureSampleBufferPlaybackDelegate> * _playbackDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVPictureInPictureSampleBufferPlaybackDelegate> *playbackDelegate;
@property (readonly) Class superclass;

+ (id)playbackDelegateAdapterWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)pictureInPictureController:(id)arg1 didTransitionToRenderSize:(struct { int x1; int x2; })arg2;
- (void)pictureInPictureController:(id)arg1 setPlaying:(bool)arg2;
- (void)pictureInPictureController:(id)arg1 skipByInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 completionHandler:(id /* block */)arg3;
- (bool)pictureInPictureControllerIsPlaybackPaused:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })pictureInPictureControllerTimeRangeForPlayback:(id)arg1;
- (id)playbackDelegate;

@end

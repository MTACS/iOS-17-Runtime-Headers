
@interface AVHomeIPCameraPlayerController : AVPlayerController {
    <AVHomeIPCameraActionButtonHandling> * _delegate;
    bool  _muted;
    struct CGSize { 
        double width; 
        double height; 
    }  _presentationSize;
    double  _volume;
}

@property (nonatomic) <AVHomeIPCameraActionButtonHandling> *delegate;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) struct CGSize { double x1; double x2; } presentationSize;

- (void).cxx_destruct;
- (void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)arg1;
- (id)delegate;
- (void)endReducingResourcesForPictureInPicturePlayerLayer:(id)arg1;
- (bool)hasContent;
- (bool)hasEnabledAudio;
- (bool)hasEnabledVideo;
- (bool)hasLiveStreamingContent;
- (bool)hasSeekableLiveStreamingContent;
- (bool)isMuted;
- (bool)isPictureInPicturePossible;
- (bool)isPlaying;
- (struct CGSize { double x1; double x2; })presentationSize;
- (void)setDelegate:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVolume:(double)arg1;
- (long long)status;
- (long long)timeControlStatus;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (double)volume;

@end

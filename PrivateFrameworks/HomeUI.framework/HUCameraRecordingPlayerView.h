
@interface HUCameraRecordingPlayerView : UIView {
    AVPlayer * _player;
    UIProgressView * _progressView;
}

@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic, readonly) UIProgressView *progressView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1 displayingProgressView:(bool)arg2;
- (id)player;
- (id)playerLayer;
- (id)progressView;

@end

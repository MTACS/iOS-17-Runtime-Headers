
@interface ASCVideoView : UIView {
    <ASCVideoViewDelegate> * _delegate;
    bool  _isPlaying;
    bool  _loopingEnabled;
    AVPlayer * _player;
    AVPlayerLayer * _playerLayer;
    ASCBorderedScreenshotView * _previewFrameArtwork;
    ASCScreenshotDisplayConfiguration * _screenshotDisplayConfiguration;
}

@property (nonatomic) <ASCVideoViewDelegate> *delegate;
@property (nonatomic, readonly) bool isPlaying;
@property (getter=isLoopingEnabled, nonatomic) bool loopingEnabled;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic, readonly) ASCBorderedScreenshotView *previewFrameArtwork;
@property (nonatomic, readonly, copy) ASCScreenshotDisplayConfiguration *screenshotDisplayConfiguration;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 videoURL:(id)arg2 screenshotDisplayConfiguration:(id)arg3;
- (bool)isLoopingEnabled;
- (bool)isMuted;
- (bool)isPlaying;
- (void)layoutSubviews;
- (void)pauseVideo;
- (void)playVideo;
- (id)player;
- (void)playerDidPlayToEndTime:(id)arg1;
- (id)playerLayer;
- (struct CGSize { double x1; double x2; })preferredVideoSize;
- (id)previewFrameArtwork;
- (void)resetVideo;
- (id)screenshotDisplayConfiguration;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLoopingEnabled:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)toggleIsPlaying;

@end

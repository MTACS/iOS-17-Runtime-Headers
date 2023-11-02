
@interface ISLiveWallpaperUIView : ISBasePlayerUIView {
    double  _force;
    UIGestureRecognizer * _playbackGestureRecognizer;
    bool  _touching;
    NSTimer * _updateTimer;
}

@property (nonatomic) double force;
@property (nonatomic, readonly) UIGestureRecognizer *playbackGestureRecognizer;
@property (nonatomic, retain) ISLiveWallpaperPlayer *player;
@property (nonatomic) bool touching;
@property (nonatomic, retain) NSTimer *updateTimer;

- (void).cxx_destruct;
- (void)_ISLiveWallpaperUIViewCommonInitialization;
- (void)_handlePlaybackRecognizer:(id)arg1;
- (void)_handleUpdateTimer;
- (void)_updatePlayer;
- (void)dealloc;
- (double)force;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)playbackGestureRecognizer;
- (void)setForce:(double)arg1;
- (void)setTouching:(bool)arg1;
- (void)setUpdateTimer:(id)arg1;
- (bool)touching;
- (id)updateTimer;
- (void)willMoveToWindow:(id)arg1;

@end

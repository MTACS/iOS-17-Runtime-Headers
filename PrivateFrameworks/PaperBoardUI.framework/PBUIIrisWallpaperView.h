
@interface PBUIIrisWallpaperView : PBUIStaticWallpaperView <PBUIIrisWallpaperPlaying, PBUILivePhotoPlayerViewDelegate> {
    long long  _currentMode;
    UIImageView * _imageView;
    <PBUIIrisWallpaperPlayerDelegate> * _irisDelegate;
    bool  _isInteracting;
    long long  _playbackState;
    UIGestureRecognizer * _playerGestureRecognizer;
    long long  _playerState;
    PBUILivePhotoPlayerView * _playerView;
    ISAVPlayer * _prewiredAVPlayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _prewiredSize;
    NSMutableSet * _simulatedTouchReasons;
    double  _stillTimeInVideo;
    bool  _useRewindPlaybackStyle;
    NSURL * _videoFileURL;
}

@property (nonatomic, readonly) long long currentIrisMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PBUIIrisWallpaperPlayerDelegate> *irisDelegate;
@property (nonatomic, readonly) UIGestureRecognizer *irisGestureRecognizer;
@property (nonatomic, readonly) long long irisPlaybackState;
@property (nonatomic, readonly) bool isIrisInteracting;
@property (nonatomic, readonly) double stillTimeInVideo;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *videoFileURL;

- (void).cxx_destruct;
- (id)_playbackReasonForSimulatedTouchReason:(id)arg1;
- (void)_populateContentView;
- (void)_resetPrewiredAVPlayer;
- (void)_setImage:(id)arg1;
- (void)_setPlayerGestureRecognizer:(id)arg1;
- (bool)_setupContentViewForMode:(long long)arg1;
- (void)_setupContentViewWithOptions:(unsigned long long)arg1;
- (void)beginSimulatedTouchWithReason:(id)arg1;
- (long long)currentIrisMode;
- (void)dealloc;
- (void)endSimulatedTouchWithReason:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (id)irisDelegate;
- (id)irisGestureRecognizer;
- (long long)irisPlaybackState;
- (bool)isIrisInteracting;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)setIrisDelegate:(id)arg1;
- (double)stillTimeInVideo;
- (void)switchToIrisMode:(long long)arg1;
- (id)videoFileURL;
- (id)videoPlayerForPlayerView:(id)arg1;
- (long long)wallpaperType;

@end

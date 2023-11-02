
@interface PBUILivePhotoPlayerView : UIView <ISBasePlayerDelegate, ISChangeObserver> {
    ISBasePlayerUIView * __playerUIView;
    <PBUILivePhotoPlayerViewDelegate> * _delegate;
    NSMutableSet * _forcePlaybackReasons;
    bool  _interacting;
}

@property (nonatomic, readonly) bool _isForcingPlayback;
@property (nonatomic, readonly) ISBasePlayerUIView *_playerUIView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBUILivePhotoPlayerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (getter=isInteracting, setter=_setInteracting:, nonatomic) bool interacting;
@property (nonatomic, readonly) long long playbackState;
@property (readonly) Class superclass;

+ (id)playerViewWithRewindPlaybackStyle:(bool)arg1;

- (void).cxx_destruct;
- (void)_common_configurePlayer:(id)arg1;
- (void)_common_configurePlayerView:(id)arg1;
- (void)_handlePlaybackGesture:(id)arg1;
- (bool)_isForcingPlayback;
- (id)_playerUIView;
- (void)_setInteracting:(bool)arg1;
- (void)_subclass_updateForForcingPlayback:(bool)arg1;
- (void)_subclass_updatePlayerItemForUse:(id)arg1;
- (id)delegate;
- (id)gestureRecognizer;
- (bool)isInteracting;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)playbackState;
- (void)prepareWithPhoto:(struct CGImage { }*)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (void)setContentMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)startPlaybackWithReason:(id)arg1;
- (void)stopPlaybackWithReason:(id)arg1;
- (id)videoPlayerForPlayer:(id)arg1;

@end

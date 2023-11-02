
@interface PXFooterAnimatedIconView : UIView {
    id  _gridCycleTimeObservationToken;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _introStartTime;
    bool  _isPlayerHidden;
    bool  _isPlayerPaused;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _lock_desiredMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _loopEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _loopStartTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _outroEndTime;
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
    AVPlayerLayer * _playerLayer;
    float  _playerRateBeforePause;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _reasonsToPause;
    long long  _style;
    long long  _waitingState;
    double  _waitingStateStartTime;
    bool  _wantsGridCycleTimeObservation;
}

@property long long desiredMode;
@property (nonatomic, readonly) bool isObscured;
@property (nonatomic) bool isPlayerHidden;
@property (nonatomic) bool isPlayerPaused;
@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic, retain) AVPlayerLayer *playerLayer;
@property (nonatomic, readonly) long long presentedState;
@property (nonatomic) long long style;
@property (nonatomic) bool wantsGridCycleTimeObservation;

- (void).cxx_destruct;
- (void)_addReasonToPause:(unsigned long long)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidEnterForeground:(id)arg1;
- (void)_createPlayerIfNeeded;
- (void)_crossedGridCycleBoundary;
- (void)_didPlayerToEndTime:(id)arg1;
- (void)_didSeekToPlayFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_didSeekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_hideVideo;
- (void)_layoutPlayer;
- (void)_mediaServicesWereReset:(id)arg1;
- (id)_movieURL;
- (void)_playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_removeReasonToPause:(unsigned long long)arg1;
- (void)_seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setNeedsUpdate;
- (void)_transitionToState:(long long)arg1;
- (void)_update;
- (void)_updateIsPlayerPaused;
- (void)_updateStyle;
- (void)_windowDidChange;
- (void)dealloc;
- (long long)desiredMode;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isObscured;
- (bool)isPlayerHidden;
- (bool)isPlayerPaused;
- (void)layoutSubviews;
- (id)playerItem;
- (id)playerLayer;
- (long long)presentedState;
- (void)setDesiredMode:(long long)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsPlayerHidden:(bool)arg1;
- (void)setIsPlayerPaused:(bool)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setWantsGridCycleTimeObservation:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)wantsGridCycleTimeObservation;

@end

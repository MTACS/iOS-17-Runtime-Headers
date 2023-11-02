
@interface SVPlayerLayer : CALayer {
    unsigned long long  _currentPlaybackKind;
    SVLooper * _looper;
    SVNonAnimatingDelegate * _nonAnimatingDelegate;
    AVPlayerLayer * _playerLayer;
    SVKeyValueObserver * _readyForDisplayObserver;
    SVKeyValueObserver * _statusObserver;
    SVImageLayer * _stillImageLayer;
}

@property (nonatomic) unsigned long long currentPlaybackKind;
@property (nonatomic, retain) SVLooper *looper;
@property (nonatomic, retain) SVNonAnimatingDelegate *nonAnimatingDelegate;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, retain) AVPlayerLayer *playerLayer;
@property (nonatomic, retain) SVKeyValueObserver *readyForDisplayObserver;
@property (nonatomic, retain) SVKeyValueObserver *statusObserver;
@property (readonly) SVImageLayer *stillImageLayer;
@property (nonatomic, copy) NSString *videoGravity;

+ (id)defaultActionForKey:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)currentPlaybackKind;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)initialize;
- (void)layoutSublayers;
- (id)looper;
- (id)nonAnimatingDelegate;
- (void)pause;
- (void)play;
- (void)playWithPlaybackKind:(unsigned long long)arg1 looping:(bool)arg2;
- (id)player;
- (id)playerLayer;
- (id)readyForDisplayObserver;
- (void)setCurrentPlaybackKind:(unsigned long long)arg1;
- (void)setLooper:(id)arg1;
- (void)setNonAnimatingDelegate:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setReadyForDisplayObserver:(id)arg1;
- (void)setStatusObserver:(id)arg1;
- (void)setVideoGravity:(id)arg1;
- (id)statusObserver;
- (id)stillImageLayer;
- (id)videoGravity;

@end

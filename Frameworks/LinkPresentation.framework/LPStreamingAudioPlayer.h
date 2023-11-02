
@interface LPStreamingAudioPlayer : NSObject <LPAudioPlayer, LPInProcessMediaPlayable> {
    LPAudio * _audio;
    NSHashTable * _clients;
    id  _endObserver;
    AVPlayerItem * _item;
    AVPlayer * _player;
    unsigned long long  _state;
    id  _timeObserver;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullScreen, nonatomic, readonly) bool fullScreen;
@property (nonatomic, readonly) bool hasMuteControl;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long lastInteractionTimestamp;
@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) bool shouldUnmuteWhenUserAdjustsVolume;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double unobscuredAreaFraction;
@property (nonatomic, readonly) bool usesSharedAudioSession;

+ (id)playerWithAudio:(id)arg1;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)dealloc;
- (void)dispatchDidChangeProgressToAllClients:(float)arg1;
- (void)dispatchDidFailToPlayToAllClients;
- (void)dispatchDidTransitionToStateToAllClients:(unsigned long long)arg1;
- (bool)hasMuteControl;
- (id)initWithAudio:(id)arg1;
- (bool)isActive;
- (bool)isFullScreen;
- (bool)isMuted;
- (bool)isPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (float)progress;
- (void)removeClient:(id)arg1;
- (void)reset;
- (void)resetPlaybackState;
- (void)setActive:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (bool)shouldUnmuteWhenUserAdjustsVolume;
- (unsigned long long)state;
- (void)transitionToState:(unsigned long long)arg1;
- (bool)usesSharedAudioSession;

@end

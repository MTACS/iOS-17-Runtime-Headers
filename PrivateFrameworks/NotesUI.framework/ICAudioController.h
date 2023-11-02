
@interface ICAudioController : NSObject {
    ICAttachment * _currentAttachment;
    AVPlayer * _currentPlayer;
    NSObject * _playbackTimeObserver;
}

@property (nonatomic, retain) ICAttachment *currentAttachment;
@property (nonatomic, retain) AVPlayer *currentPlayer;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, retain) NSObject *playbackTimeObserver;

+ (void)pauseIfPlaying;
+ (id)sharedAudioController;

- (void).cxx_destruct;
- (void)attachmentWillBeDeletedNotification:(id)arg1;
- (id)currentAttachment;
- (id)currentPlayer;
- (void)dealloc;
- (id)init;
- (bool)isPlaying;
- (void)notifyPaused;
- (void)notifyPlaying;
- (void)notifyStopped;
- (void)pause;
- (void)play;
- (void)play:(id)arg1;
- (id)playbackTimeObserver;
- (long long)remotePause:(id)arg1;
- (long long)remotePlay:(id)arg1;
- (long long)remoteSkipBackward:(id)arg1;
- (long long)remoteSkipForward:(id)arg1;
- (long long)remoteStop:(id)arg1;
- (long long)remoteTogglePlayPause:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)setCurrentAttachment:(id)arg1;
- (void)setCurrentPlayer:(id)arg1;
- (void)setPlaybackTimeObserver:(id)arg1;
- (void)skipAheadByInterval:(double)arg1;
- (void)skipBackByInterval:(double)arg1;
- (void)stop;
- (void)togglePlayPause;
- (void)updateNowPlayingInfo;
- (void)updateTime:(double)arg1 duration:(double)arg2;

@end

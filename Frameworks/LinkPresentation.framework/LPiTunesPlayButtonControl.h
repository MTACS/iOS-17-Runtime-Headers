
@interface LPiTunesPlayButtonControl : LPPlayButtonControl <LPMediaPlayable, LPMediaRemotePlaybackObserverClient> {
    <NSObject> * _playbackDidEndNotificationToken;
    LPInlineMediaPlaybackInformation * _playbackInformation;
    bool  _wasPlayingMusicWhenLyricExcerptPlaybackStarted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMuteControl;
@property (readonly) unsigned long long hash;
@property (getter=isPlaying, nonatomic) bool playing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (struct _MRSystemAppPlaybackQueue { }*)createPlaybackQueue;
- (void)dealloc;
- (double)desiredUpdateIntervalForMediaRemotePlaybackObserver:(id)arg1;
- (void)didMoveToWindow;
- (bool)hasMuteControl;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2 theme:(id)arg3;
- (bool)isPlaying;
- (bool)matchesNowPlayingItem;
- (id)mediaPlaybackApplicationID;
- (void)mediaRemotePlaybackObserverPlayingItemDidChange:(id)arg1;
- (id)playable;
- (void)resetPlaybackState;
- (void)setPlaying:(bool)arg1;
- (void)startPlaybackForLyricExcerpt;
- (void)startPlaying;
- (void)updatePlayState;

@end

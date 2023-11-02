
@interface AppleMediaServicesUIDynamic.VideoPlayer : AVPlayer {
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  failure;
    void failureCount;
    void lastPlaybackTimeGuard;
    void lastPlaybackTimeUnsynchronized;
    void playbackChecks;
    void playerItem;
    void shouldBePlaying;
    void shouldLoopPlayback;
    void state;
    void videoObserver;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  videoUrl;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)pause;
- (void)play;

@end

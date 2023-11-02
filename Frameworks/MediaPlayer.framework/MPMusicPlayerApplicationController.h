
@interface MPMusicPlayerApplicationController : MPMusicPlayerController {
    bool  _disableAutoPlay;
    bool  _disableAutomaticCanBeNowPlaying;
    bool  _disableRepeat;
    bool  _disableShuffle;
    NSXPCConnection * _serviceConnection;
}

@property (nonatomic) bool disableAutoPlay;
@property (nonatomic) bool disableAutomaticCanBeNowPlaying;
@property (nonatomic) bool disableRepeat;
@property (nonatomic) bool disableShuffle;
@property (nonatomic, readonly) NSXPCConnection *serviceConnection;

+ (void)setShouldUseSystemMusicAppOnMacOS:(bool)arg1;
+ (bool)shouldUseSystemMusicAppOnMacOS;

- (void).cxx_destruct;
- (void)_clearConnection;
- (void)_establishConnectionIfNeeded;
- (id)_mediaItemsForContentItemIDs:(id)arg1;
- (void)beginGeneratingPlaybackNotifications;
- (void)beginPlaybackAtHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)dealloc;
- (bool)disableAutoPlay;
- (bool)disableAutomaticCanBeNowPlaying;
- (bool)disableRepeat;
- (bool)disableShuffle;
- (void)endGeneratingPlaybackNotifications;
- (id)initWithClientIdentifier:(id)arg1 queue:(id)arg2;
- (void)onApplicationServer:(id /* block */)arg1;
- (void)onApplicationServerAsync:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)performQueueTransaction:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)prerollWithCompletion:(id /* block */)arg1;
- (id)serviceConnection;
- (void)setDisableAutoPlay:(bool)arg1;
- (void)setDisableAutomaticCanBeNowPlaying:(bool)arg1;
- (void)setDisableRepeat:(bool)arg1;
- (void)setDisableShuffle:(bool)arg1;
- (void)setRelativeVolume:(float)arg1;

@end


@interface SBMediaController : NSObject <MPAVRoutingControllerDelegate> {
    NSNumber * _audioCategoryMusicVolume;
    bool  _debounceVolumeRepeat;
    NSDate * _lastActivityDate;
    int  _lastMediaRemoteAppActivityStatus;
    bool  _lastNowPlayingAppIsPlaying;
    SBApplication * _lastNowPlayingApplication;
    int  _manualVolumeChangeCount;
    NSDictionary * _nowPlayingInfo;
    int  _nowPlayingProcessPID;
    int  _numberOfVolumeDecreasesSinceDownButtonDown;
    float  _pendingVolumeChange;
    MPAVRoutingController * _routingController;
    bool  _suppressHUD;
    NSTimer * _volumeCommitTimer;
    SBVolumeControl * _volumeControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastActivityDate;
@property (nonatomic, readonly) SBApplication *nowPlayingApplication;
@property (nonatomic) int nowPlayingProcessPID;
@property (readonly) Class superclass;
@property bool suppressHUD;

+ (bool)applicationCanBeConsideredNowPlaying:(id)arg1;
+ (void)sendResetPlaybackTimeoutCommand;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (void)_applicationActivityStatusDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingApplicationDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingApplicationIsPlayingDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingInfoDidChange:(id)arg1;
- (void)_nowPlayingAppDidExit:(id)arg1;
- (id)_nowPlayingInfo;
- (void)_registerForNotifications;
- (bool)_sendMediaCommand:(unsigned int)arg1 options:(id)arg2;
- (void)_setNowPlayingApplication:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_updateLastRecentActivityDate;
- (bool)addTrackToWishListForEventSource:(long long)arg1;
- (bool)banTrackForEventSource:(long long)arg1;
- (bool)beginSeek:(int)arg1 eventSource:(long long)arg2;
- (void)cancelVolumeEvent;
- (bool)changeTrack:(int)arg1 eventSource:(long long)arg2;
- (void)dealloc;
- (bool)endSeek:(int)arg1 eventSource:(long long)arg2;
- (bool)handsetRouteIsSelected;
- (bool)hasTrack;
- (id)init;
- (bool)isApplicationActivityActive;
- (bool)isFirstTrack;
- (bool)isLastTrack;
- (bool)isPaused;
- (bool)isPlaying;
- (id)lastActivityDate;
- (bool)likeTrackForEventSource:(long long)arg1;
- (id)nameOfPickedRoute;
- (id)nowPlayingApplication;
- (int)nowPlayingProcessPID;
- (bool)pauseForEventSource:(long long)arg1;
- (bool)playForEventSource:(long long)arg1;
- (bool)routeOtherThanHandsetIsAvailable;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setNowPlayingProcessPID:(int)arg1;
- (bool)setPlaybackSpeed:(int)arg1 eventSource:(long long)arg2;
- (void)setSuppressHUD:(bool)arg1;
- (bool)stopForEventSource:(long long)arg1;
- (bool)suppressHUD;
- (bool)togglePlayPauseForEventSource:(long long)arg1;
- (bool)toggleRepeatForEventSource:(long long)arg1;
- (bool)toggleShuffleForEventSource:(long long)arg1;
- (bool)volumeControlIsAvailable;
- (bool)wirelessDisplayRouteIsPicked;

@end

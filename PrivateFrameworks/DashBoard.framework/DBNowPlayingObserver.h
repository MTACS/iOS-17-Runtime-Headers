
@interface DBNowPlayingObserver : NSObject <CPUINowPlayingObserving> {
    DBAppHistory * _appHistory;
    <DBNowPlayingDelegate> * _delegate;
    DBApplicationInfo * _nowPlayingApplicationInfo;
    bool  _playing;
}

@property (nonatomic, readonly) DBAppHistory *appHistory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DBNowPlayingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DBApplicationInfo *nowPlayingApplicationInfo;
@property (nonatomic, readonly) DBApplicationLaunchInfo *nowPlayingLaunchInfo;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isValidNowPlayingApplication:(id)arg1;
- (void)_nowPlayingDidChangeToBundleIdentifier:(id)arg1;
- (void)_updatePlaybackStateForBundleIdentifier:(id)arg1 playing:(bool)arg2;
- (id)appHistory;
- (id)delegate;
- (id)initWithAppHistory:(id)arg1;
- (bool)isPlaying;
- (id)nowPlayingApplicationInfo;
- (id)nowPlayingLaunchInfo;
- (id)nowPlayingLaunchInfoWithSource:(unsigned long long)arg1;
- (void)nowPlayingManager:(id)arg1 didThrottleUpdateForBundleIdentifier:(id)arg2;
- (void)nowPlayingManager:(id)arg1 didUpdateSnapshot:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNowPlayingApplicationInfo:(id)arg1;

@end

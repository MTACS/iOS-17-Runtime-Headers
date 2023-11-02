
@interface SBVideoOutController : NSObject <FBSDisplayObserving, SBAVSystemControllerCacheObserver, SBDisplayPortObserverDelegate> {
    SBAVSystemControllerCache * _avCache;
    SBDirectToAirPlayController * _directToAirPlayController;
    SBDisplayPortObserver * _displayPortObserver;
    MRScreenMirroringObserver * _screenMirroringObserver;
    SBSBackgroundActivityAssertion * _screenSharingBackgroundActivityAssertion;
    NSTimer * _screenSharingBackgroundActivityTimer;
    bool  _screenSharingSetsBackgroundActivity;
    bool  _screenSharingViaAVSystemController;
    bool  _screenSharingViaDisplayMonitor;
    SBSBackgroundActivityAssertion * _videoOutBackgroundActivityAssertion;
    NSTimer * _videoOutBackgroundActivityTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isScreenSharing, nonatomic, readonly) bool screenSharing;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (void)_authenticationStateChanged:(id)arg1;
- (void)_clearScreenSharingBackgroundActivityAssertion;
- (void)_clearVideoOutBackgroundActivityAssertion;
- (bool)_displayMonitorHasAConnectedExternalIdentity;
- (void)_notifyThatScreenSharingChanged;
- (void)_registerForNotifications;
- (void)_startVideoOutBackgroundActivityAssertion;
- (void)_unregisterForNotifications;
- (void)_updateAVRoutes;
- (void)_updateDisplayMonitorState;
- (void)_updateScreenMirroringObserverWithSuppressionPreferenceFromDefaults:(id)arg1;
- (void)_updateScreenSharingBackgroundActivityAssertionSuppressionPreference:(id)arg1;
- (void)_updateVideoOutBackgroundActivityAssertion;
- (void)cache:(id)arg1 didUpdateAirplayDisplayActive:(bool)arg2;
- (void)cacheDidRebuildAfterServerDeath:(id)arg1;
- (void)dealloc;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)displayPortObserver:(id)arg1 connectionStateChanged:(bool)arg2;
- (id)init;
- (bool)isScreenSharing;
- (void)updateScreenSharingBackgroundActivityAssertion;

@end

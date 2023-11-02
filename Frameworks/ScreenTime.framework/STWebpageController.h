
@interface STWebpageController : UIViewController {
    NSURL * _URL;
    bool  _URLIsBlocked;
    bool  _URLIsPictureInPicture;
    bool  _URLIsPlayingVideo;
    bool  _URLIsVisibleInForeground;
    NSString * _bundleIdentifier;
    long long  _currentUsageState;
    STWebRemoteViewController * _remoteViewController;
    bool  _suppressUsageRecording;
}

@property (nonatomic, copy) NSURL *URL;
@property bool URLIsBlocked;
@property (nonatomic) bool URLIsPictureInPicture;
@property (nonatomic) bool URLIsPlayingVideo;
@property (readonly) bool URLIsPlayingVideoPictureInPicture;
@property bool URLIsVisibleInForeground;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) long long currentUsageState;
@property (readonly) long long defaultUsageState;
@property (retain) STWebRemoteViewController *remoteViewController;
@property (readonly) <STWebService> *serviceProxy;
@property (nonatomic) bool suppressUsageRecording;

- (void).cxx_destruct;
- (id)URL;
- (bool)URLIsBlocked;
- (bool)URLIsPictureInPicture;
- (bool)URLIsPlayingVideo;
- (bool)URLIsPlayingVideoPictureInPicture;
- (bool)URLIsVisibleInForeground;
- (void)_URLIsBlockedDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_changeUsageState:(long long)arg1 errorHandler:(id /* block */)arg2;
- (void)_delayedSetURLIsBlocked:(id)arg1;
- (void)_didChangePlaybackState:(id)arg1;
- (void)_didStopPictureInPicture:(id)arg1;
- (void)_setURL:(id)arg1 bundleIdentifier:(id)arg2 usageState:(long long)arg3 errorHandler:(id /* block */)arg4;
- (void)_startReportingWebUsage;
- (void)_willStartPictureInPicture:(id)arg1;
- (id)bundleIdentifier;
- (long long)currentUsageState;
- (void)dealloc;
- (long long)defaultUsageState;
- (id)init;
- (void)invalidate;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)remoteViewController;
- (id)serviceProxy;
- (void)setBundleIdentifier:(id)arg1;
- (bool)setBundleIdentifier:(id)arg1 error:(id*)arg2;
- (void)setCurrentUsageState:(long long)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setSuppressUsageRecording:(bool)arg1;
- (void)setURL:(id)arg1;
- (void)setURLIsBlocked:(bool)arg1;
- (void)setURLIsPictureInPicture:(bool)arg1;
- (void)setURLIsPlayingVideo:(bool)arg1;
- (void)setURLIsVisibleInForeground:(bool)arg1;
- (bool)suppressUsageRecording;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end

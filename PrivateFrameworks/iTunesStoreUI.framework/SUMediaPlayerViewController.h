
@interface SUMediaPlayerViewController : UIViewController <AVPlayerViewControllerDelegate, ISOperationDelegate> {
    UIView * _backgroundContainerView;
    SUClientInterface * _clientInterface;
    SUMediaPlayerItem * _mediaItem;
    NSMutableArray * _operations;
    long long  _playerState;
    AVPlayerViewController * _playerViewController;
}

@property (nonatomic, retain) SUClientInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) SUMediaPlayerItem *mediaPlayerItem;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (readonly) Class superclass;

+ (bool)_URLIsITunesU:(id)arg1;
+ (void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3;
+ (void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1;
+ (void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1;

- (id)_backgroundContainerView;
- (void)_dequeueOperation:(id)arg1;
- (void)_enqueueOperation:(id)arg1;
- (void)_loadBackgroundImage;
- (void)_playbackFinishedNotification:(id)arg1;
- (void)_prepareMediaItem;
- (void)_setIsActivePlayer:(bool)arg1;
- (void)_showBackgroundImage:(id)arg1;
- (id)clientInterface;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)init;
- (id)initWithMediaPlayerItem:(id)arg1;
- (id)mediaPlayerItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operationFinished:(id)arg1;
- (id)playerViewController;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)setClientInterface:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

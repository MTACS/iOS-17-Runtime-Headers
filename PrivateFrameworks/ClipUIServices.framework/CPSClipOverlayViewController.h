
@interface CPSClipOverlayViewController : UIViewController <CPSSessionProxyDelegate> {
    long long  _appAttributionBannerPolicy;
    bool  _attemptToShowBannerOnceSessionProxyIsResolved;
    NSTimer * _automaticBannerDismissTimer;
    CPSAppAttributionBanner * _banner;
    CPSBannerContainerView * _bannerContainer;
    bool  _clipNeedsUpdate;
    CPSAppClipRecord * _clipRecord;
    bool  _displayedOverPlaceholder;
    double  _initialAppearanceTime;
    CPSClipLoadingView * _loadingView;
    CPSClipMetadata * _placeholderClipMetadata;
    NSString * _referrerBundleID;
    long long  _sceneActivationState;
    CPSPromise * _sessionPromise;
    CPSSessionProxy * _sessionProxy;
    bool  _showingDemoProgress;
    bool  _usesMockData;
    CPSWebClip * _webClip;
    NSString * _webClipID;
}

@property (nonatomic) long long appAttributionBannerPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *referrerBundleID;
@property (readonly) Class superclass;
@property (nonatomic) bool usesMockData;
@property (nonatomic, copy) NSString *webClipID;

- (void).cxx_destruct;
- (void)_didTapBanner;
- (void)_dismissLoadingViewAnimated:(bool)arg1;
- (id)_initWithAppClipBundleID:(id)arg1;
- (void)_loadClipMetadataUsingPlaceholderWebClipID;
- (void)_loadClipRecordUsingBundleID;
- (void)_presentLoadingViewAnimated:(bool)arg1;
- (void)_scheduleBannerDismissTimerIfNeeded;
- (void)_setBannerHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setClipRecord:(id)arg1;
- (void)_setClipSessionProxy:(id)arg1;
- (void)_setPlaceholderClipMetadata:(id)arg1;
- (void)_setUpNewSessionProxy;
- (void)_showFailedLoadingStateAndReloadMetadata:(bool)arg1 animated:(bool)arg2;
- (void)_updateBanner;
- (void)_updateBannerLabels;
- (void)_updateLoadingView;
- (long long)appAttributionBannerPolicy;
- (void)dealloc;
- (id)initWithAppClipBundleID:(id)arg1;
- (id)initWithAppClipBundleID:(id)arg1 webClipID:(id)arg2;
- (id)initWithAppClipRecord:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)preferredStatusBarStyle;
- (void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)proxy:(id)arg1 didRetrieveHeroImage:(id)arg2;
- (void)proxyDidChangeProgress:(id)arg1;
- (void)proxyDidUpdateMetadata:(id)arg1;
- (void)proxyRemoteServiceDidCrash:(id)arg1;
- (id)referrerBundleID;
- (void)setAppAttributionBannerPolicy:(long long)arg1;
- (void)setClipNeedsUpdateToLatestVersion;
- (void)setDisplayedOverPlaceholder:(bool)arg1 animated:(bool)arg2;
- (void)setDisplayedOverPlaceholder:(bool)arg1 forWebClipID:(id)arg2 animated:(bool)arg3;
- (void)setDisplayedOverPlaceholder:(bool)arg1 usingClipMetadata:(id)arg2 animated:(bool)arg3;
- (void)setReferrerBundleID:(id)arg1;
- (void)setSceneActivationState:(long long)arg1 animated:(bool)arg2;
- (void)setUsesMockData:(bool)arg1;
- (void)setWebClipID:(id)arg1;
- (bool)usesMockData;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)webClipID;

@end

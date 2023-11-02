
@interface VUIOfflineKeyRenewalManager : NSObject <TVPDownloadDelegate, VUIStoreFPSKeyLoaderDelegate> {
    unsigned long long  _backgroundTaskIdentifier;
    NSMutableDictionary * _contentKeySessions;
    NSMutableArray * _downloadsForRepairingKeys;
    NSTimer * _expirationTimer;
    NSMutableDictionary * _keyLoaders;
    NSTimer * _keyRenewalTimer;
    bool  _networkErrorOccurredDuringInvalidation;
    TVPStateMachine * _stateMachine;
}

@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (nonatomic, retain) NSMutableDictionary *contentKeySessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *downloadsForRepairingKeys;
@property (nonatomic, retain) NSTimer *expirationTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *keyLoaders;
@property (nonatomic, retain) NSTimer *keyRenewalTimer;
@property (nonatomic) bool networkErrorOccurredDuringInvalidation;
@property (nonatomic, retain) TVPStateMachine *stateMachine;
@property (readonly) Class superclass;

+ (id)_keyInfosForVideo:(id)arg1 outKeyIdentifiers:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_expirationTimerDidFire:(id)arg1;
- (void)_fetchNewKeysForVideosWithBrokenKeys:(id)arg1;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)_registerStateMachineHandlers;
- (void)_renewKeysForVideos:(id)arg1 outCompletedKeyRequests:(id)arg2 completion:(id /* block */)arg3;
- (void)_renewKeysForVideosGroupedByCertURL:(id)arg1 outCompletedKeyRequests:(id)arg2 completion:(id /* block */)arg3;
- (void)_renewalTimerDidFire:(id)arg1;
- (unsigned long long)backgroundTaskIdentifier;
- (id)contentKeySessions;
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;
- (id)downloadsForRepairingKeys;
- (id)expirationTimer;
- (id)init;
- (id)keyLoaders;
- (id)keyRenewalTimer;
- (bool)networkErrorOccurredDuringInvalidation;
- (void)setBackgroundTaskIdentifier:(unsigned long long)arg1;
- (void)setContentKeySessions:(id)arg1;
- (void)setDownloadsForRepairingKeys:(id)arg1;
- (void)setExpirationTimer:(id)arg1;
- (void)setKeyLoaders:(id)arg1;
- (void)setKeyRenewalTimer:(id)arg1;
- (void)setNetworkErrorOccurredDuringInvalidation:(bool)arg1;
- (void)setStateMachine:(id)arg1;
- (id)stateMachine;
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
- (void)updateKeyRenewalAndExpiration;

@end

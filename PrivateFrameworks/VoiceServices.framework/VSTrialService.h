
@interface VSTrialService : NSObject {
    NSArray * _cachedResources;
    NSArray * _cachedVoices;
    NSLock * _clientRefreshLock;
    NSObject<OS_dispatch_queue> * _downloadQueue;
    TRIClient * _triClient;
    <TRINotificationToken> * _trialNotificationToken;
}

@property (nonatomic, retain) NSArray *cachedResources;
@property (nonatomic, retain) NSArray *cachedVoices;
@property (nonatomic, retain) NSLock *clientRefreshLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *downloadQueue;
@property (nonatomic, retain) TRIClient *triClient;
@property (nonatomic, retain) <TRINotificationToken> *trialNotificationToken;

+ (id)defaultDownloadOptions;
+ (id)sharedService;
+ (id)versionFactorNameWithFactorName:(id)arg1;

- (void).cxx_destruct;
- (id)_definedVoicesWithLanguage:(id)arg1 name:(id)arg2 type:(long long)arg3 footprint:(long long)arg4;
- (id)_directoryOfFactorName:(id)arg1;
- (void)_downloadFactorName:(id)arg1 withOptions:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_fileOfFactorName:(id)arg1;
- (void)_removeAssetWithFactorName:(id)arg1 completion:(id /* block */)arg2;
- (id)cachedResources;
- (id)cachedVoices;
- (id)clientRefreshLock;
- (void)dealloc;
- (id)definedVoiceResourcesWithLanguage:(id)arg1;
- (id)definedVoicesWithAssets:(id)arg1;
- (id)definedVoicesWithLanguage:(id)arg1 name:(id)arg2 type:(long long)arg3 footprint:(long long)arg4;
- (void)downloadNamespaceImmediatelyIfNeededWithOption:(id)arg1 completion:(id /* block */)arg2;
- (id)downloadQueue;
- (void)downloadVoice:(id)arg1 withOptions:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)downloadVoiceResource:(id)arg1 withOptions:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void)refreshTrialClient;
- (void)removeVoice:(id)arg1 completion:(id /* block */)arg2;
- (void)removeVoiceResource:(id)arg1 completion:(id /* block */)arg2;
- (id)selectVoiceResourceWithLanguage:(id)arg1;
- (id)selectVoiceWithLanguage:(id)arg1 name:(id)arg2 type:(long long)arg3 footprint:(long long)arg4;
- (void)setCachedResources:(id)arg1;
- (void)setCachedVoices:(id)arg1;
- (void)setClientRefreshLock:(id)arg1;
- (void)setDownloadQueue:(id)arg1;
- (void)setTriClient:(id)arg1;
- (void)setTrialNotificationToken:(id)arg1;
- (id)triClient;
- (id)trialNotificationToken;

@end


@interface UAFAssetUtilitiesService : NSObject {
    UAFAssetStatus * _assetStatus;
    NSMutableDictionary * _dictationStatus;
    NSObject<OS_dispatch_queue> * _downloadQueue;
    bool  _observerEnabled;
    AFSettingsConnection * _settingsConnection;
    NSString * _siriLanguage;
    NSObject<OS_dispatch_queue> * _statusQueue;
}

@property (nonatomic, retain) UAFAssetStatus *assetStatus;
@property (nonatomic, retain) NSMutableDictionary *dictationStatus;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *downloadQueue;
@property (nonatomic, retain) AFSettingsConnection *settingsConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statusQueue;

- (void).cxx_destruct;
- (unsigned long long)_checkFreeSpaceNeededForDownloadForLanguage:(id)arg1 isDictation:(bool)arg2;
- (void)_downloadDictationAssetsForLanguage:(id)arg1 useCellular:(bool)arg2;
- (void)_downloadUnderstandingAssetsForLanguage:(id)arg1 useCellular:(bool)arg2;
- (id)_getDownloadSizeInBytesForLanguage:(id)arg1 isDictation:(bool)arg2 error:(id*)arg3;
- (void)_handleDictationCompletionForLanguage:(id)arg1;
- (void)_handleDictationProgress:(unsigned long long)arg1 language:(id)arg2;
- (void)_handleUpdateProgress:(unsigned long long)arg1 status:(unsigned long long)arg2 language:(id)arg3;
- (bool)_hasInexpensiveNetwork;
- (bool)_isLegacySiriDevice;
- (void)_postAssetStateChangedNotification;
- (void)_updateAssetState:(unsigned long long)arg1 value:(id)arg2 forLanguage:(id)arg3;
- (void)_updateProgress:(unsigned long long)arg1 forLanguage:(id)arg2;
- (void)_updateSiriAssetAvailability:(id)arg1 forLanguage:(id)arg2;
- (id)assetStatus;
- (void)checkAssetStatus:(id /* block */)arg1;
- (void)dealloc;
- (id)dictationStatus;
- (void)downloadDictationAssetsForLanguage:(id)arg1;
- (id)downloadQueue;
- (void)downloadSiriAssets;
- (void)downloadSiriAssetsOverCellular;
- (void)downloadSizeInBytesForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (id)getLanguage;
- (id)init;
- (void)postAssetNotificationIfNeeded;
- (void)postDictationAssetNotificationForLanguage:(id)arg1;
- (void)setAssetStatus:(id)arg1;
- (void)setDictationStatus:(id)arg1;
- (void)setDownloadQueue:(id)arg1;
- (void)setSettingsConnection:(id)arg1;
- (void)setStatusQueue:(id)arg1;
- (id)settingsConnection;
- (void)startObserver;
- (id)statusQueue;
- (void)stopObserver;
- (void)switchLanguage:(id)arg1;
- (void)updateAssetState:(unsigned long long)arg1 value:(id)arg2 forLanguage:(id)arg3;
- (void)updateDictationState:(unsigned long long)arg1 withValue:(id)arg2 forLanguage:(id)arg3;
- (void)updateSiriAssetAvailabilityForLanguage:(id)arg1;

@end

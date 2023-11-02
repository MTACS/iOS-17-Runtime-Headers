
@interface CSEndpointerAssetManager : NSObject <CESRTrialAssetDelegate, CSAssetManagerDelegate> {
    NSDictionary * _asrDatapackInstallationStatus;
    CSAsset * _currentHEPAsset;
    CSAsset * _currentOEPAsset;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSDictionary *asrDatapackInstallationStatus;
@property (nonatomic, retain) CSAsset *currentHEPAsset;
@property (nonatomic, retain) CSAsset *currentOEPAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (id)_fetchEndpointMobileAssetWithLanguage:(id)arg1;
- (id)_getCurrentHEPAsset;
- (id)_getFakeEndpointAsset;
- (id)_getModelPathFromInstallationStatusString:(id)arg1;
- (id)_getOEPVersionFromPath:(id)arg1;
- (bool)_isOSDIncludedInAsset:(id)arg1;
- (void)_notifyAssetsUpdate;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)arg1;
- (void)_updateAssetWithLanguage:(id)arg1 assetType:(unsigned long long)arg2;
- (void)_updateOEPAssetsWithLanguage:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)asrDatapackInstallationStatus;
- (void)assetStatus:(id)arg1;
- (id)currentHEPAsset;
- (id)currentOEPAsset;
- (id)getCurrentEndpointerAsset;
- (id)getCurrentOSDAsset;
- (id)init;
- (id)observers;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setAsrDatapackInstallationStatus:(id)arg1;
- (void)setCurrentHEPAsset:(id)arg1;
- (void)setCurrentOEPAsset:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)updateEndpointerAssetsIfNeeded;

@end

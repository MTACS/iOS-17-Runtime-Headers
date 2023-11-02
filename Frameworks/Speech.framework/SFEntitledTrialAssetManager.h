
@interface SFEntitledTrialAssetManager : NSObject {
    unsigned long long  _cleanupDuration;
    NSObject<OS_dispatch_source> * _cleanupTimer;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _trialClientDict;
}

+ (bool)factorName:(id)arg1 belongsToAssetType:(unsigned long long)arg2;
+ (id)factorNameForAssetType:(unsigned long long)arg1 language:(id)arg2;
+ (id)factorNameForAssetType:(unsigned long long)arg1 language:(id)arg2 regionId:(id)arg3;
+ (id)factorPrefixForAssetType:(unsigned long long)arg1;
+ (unsigned long long)getAssetTypeForNamespace:(id)arg1;
+ (void)initialize;
+ (id)jsonFilenameForAssetType:(unsigned long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cancelCleanupTimer;
- (void)_cleanupTimerFired;
- (id)_installedAssetWithConfig:(id)arg1 regionId:(id)arg2 triggerDownload:(bool)arg3;
- (id)_languageFromFactorName:(id)arg1 assetType:(unsigned long long)arg2;
- (id)_overrideAssetPath:(id)arg1;
- (id)_overrideAssetQualityString:(id)arg1;
- (id)_overrideAssetStatus:(id)arg1;
- (id)_overrideAssetStatusString:(id)arg1;
- (bool)_purgeInstalledAssetsExceptLanguages:(id)arg1 assetType:(unsigned long long)arg2 error:(id*)arg3;
- (void)_scheduleCleanupTimer;
- (bool)_setAssetsPurgeability:(bool)arg1 languages:(id)arg2 invertLanguageSet:(bool)arg3 assetType:(unsigned long long)arg4;
- (id)_trialClientForProject:(int)arg1;
- (void)dealloc;
- (bool)dictationIsEnabled;
- (void)downloadAssetOfType:(unsigned long long)arg1 language:(id)arg2 urgent:(bool)arg3 forceUpgrade:(bool)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)downloadStatusWithConfig:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithClients:(id)arg1 cleanupDuration:(unsigned long long)arg2;
- (id)installationStatusForLanguagesForAssetType:(unsigned long long)arg1 includeDetailedStatus:(bool)arg2 error:(id*)arg3;
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;
- (id)installedAssetWithConfig:(id)arg1;
- (id)installedAssetWithConfig:(id)arg1 regionId:(id)arg2;
- (id)installedAssetWithConfig:(id)arg1 regionId:(id)arg2 triggerDownload:(bool)arg3;
- (id)installedFileAssetOfAssetType:(unsigned long long)arg1 factorName:(id)arg2;
- (bool)isBelowLocaleLimit;
- (id)modelAttributesStatusStringWithAsset:(id)arg1;
- (id)modelQualityTypeStatusStringWithConfig:(id)arg1;
- (id)modelTypeStatusStringAndVersionWithAsset:(id)arg1;
- (void)promoteAssetsForAssetType:(unsigned long long)arg1;
- (bool)purgeInstalledAssetForAssetType:(unsigned long long)arg1 language:(id)arg2 regionId:(id)arg3 error:(id*)arg4;
- (bool)purgeInstalledAssetsExceptLanguages:(id)arg1 assetType:(unsigned long long)arg2 error:(id*)arg3;
- (void)registerAssetDelegate:(id)arg1 assetType:(unsigned long long)arg2;
- (void)releaseClients;
- (void)releaseClientsForAssetType:(unsigned long long)arg1;
- (bool)removeAssetsForFactors:(id)arg1 withNamespace:(id)arg2 withClient:(id)arg3 error:(id*)arg4;
- (void)replaceCorruptAssetWithConfig:(id)arg1;
- (void)setAssetsProvisionalForAssetType:(unsigned long long)arg1;
- (bool)setAssetsPurgeability:(bool)arg1 exceptLanguages:(id)arg2 assetType:(unsigned long long)arg3;
- (bool)setAssetsPurgeability:(bool)arg1 forLanguages:(id)arg2 assetType:(unsigned long long)arg3;
- (bool)setAssetsPurgeabilityExceptLanguages:(id)arg1 assetType:(unsigned long long)arg2;
- (void)startDownloadLevelsForAsset:(unsigned long long)arg1 withFactor:(id)arg2 withClient:(id)arg3 withNamespace:(id)arg4 urgent:(bool)arg5 progress:(id /* block */)arg6 completion:(id /* block */)arg7;
- (id)supportedLanguagesWithAssetType:(unsigned long long)arg1;
- (void)switchToNewAssetsForAssetType:(unsigned long long)arg1;
- (id)triClients;
- (id)trialIdsForAssetType:(unsigned long long)arg1;
- (void)wait;

@end

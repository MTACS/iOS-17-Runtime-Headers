
@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSLanguageCodeUpdateMonitorDelegate, CSUAFDownloadMonitorDelegate, CSVoiceTriggerAssetDownloadMonitorDelegate> {
    CSAssetManager * _assetManager;
    CSAsset * _cachedAsset;
    NSMutableDictionary * _cachedEndpointAssets;
    CSLanguageCodeUpdateMonitor * _languageCodeUpdateMonitor;
    CSOnDeviceCompilationHandler * _onDeviceCompilationHandler;
    NSObject<OS_dispatch_queue> * _queue;
    CSUAFDownloadMonitor * _uafAssetDownloadMonitor;
    CSUAFAssetManager * _uafAssetManager;
    CSVoiceTriggerAssetDownloadMonitor * _voiceTriggerAssetDownloadMonitor;
}

@property (nonatomic, retain) CSAssetManager *assetManager;
@property (retain) CSAsset *cachedAsset;
@property (retain) NSMutableDictionary *cachedEndpointAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor;
@property (nonatomic, retain) CSOnDeviceCompilationHandler *onDeviceCompilationHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSUAFDownloadMonitor *uafAssetDownloadMonitor;
@property (nonatomic, retain) CSUAFAssetManager *uafAssetManager;
@property (nonatomic, retain) CSVoiceTriggerAssetDownloadMonitor *voiceTriggerAssetDownloadMonitor;

- (void).cxx_destruct;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(bool)arg2;
- (void)_checkNewAssetAvailablity;
- (void)_checkNewAssetAvailablityForEndpoint;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* block */)arg1;
- (void)_getVoiceTriggerAssetFromAssetManagerWithLocale:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleEndpointVoiceTriggerAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleVoiceTriggerAssetWithCompletion:(id /* block */)arg1;
- (void)assetDownloadMonitorDelegate:(id)arg1 assetType:(unsigned long long)arg2;
- (id)assetManager;
- (id)cachedAsset;
- (id)cachedEndpointAssets;
- (void)getVoiceTriggerAssetWithEndpointId:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDisableOnDeviceCompilation:(bool)arg1;
- (id)initWithVoiceTriggerAssetDownloadMonitor:(id)arg1 languageCodeUpdateMonitor:(id)arg2 uafAssetDownloadMonitor:(id)arg3 assetManager:(id)arg4 uafAssetManager:(id)arg5 disableOnDeviceCompilation:(bool)arg6;
- (id)languageCodeUpdateMonitor;
- (id)onDeviceCompilationHandler;
- (void)setAssetManager:(id)arg1;
- (void)setCachedAsset:(id)arg1;
- (void)setCachedEndpointAssets:(id)arg1;
- (void)setLanguageCodeUpdateMonitor:(id)arg1;
- (void)setOnDeviceCompilationHandler:(id)arg1;
- (void)setUafAssetDownloadMonitor:(id)arg1;
- (void)setUafAssetManager:(id)arg1;
- (void)setVoiceTriggerAssetDownloadMonitor:(id)arg1;
- (void)start;
- (void)triggerAssetRefresh;
- (id)uafAssetDownloadMonitor;
- (id)uafAssetManager;
- (id)voiceTriggerAssetDownloadMonitor;

@end

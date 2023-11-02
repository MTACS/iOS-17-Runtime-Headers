
@interface CSAttSiriMitigationAssetHandler : NSObject <CSUAFDownloadMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate> {
    CSAssetManager * _assetManager;
    CSAsset * _cachedAsset;
    CSLanguageCodeUpdateMonitor * _languageCodeUpdateMonitor;
    NSHashTable * _observers;
    bool  _overrideEnabled;
    NSString * _overridePath;
    NSObject<OS_dispatch_queue> * _queue;
    CSUAFAssetManager * _uafAssetManager;
    CSUAFDownloadMonitor * _uafDownloadMonitor;
}

@property (nonatomic, retain) CSAssetManager *assetManager;
@property (retain) CSAsset *cachedAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) bool overrideEnabled;
@property (nonatomic, retain) NSString *overridePath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSUAFAssetManager *uafAssetManager;
@property (nonatomic, retain) CSUAFDownloadMonitor *uafDownloadMonitor;

+ (id)sharedHandler;

- (void).cxx_destruct;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)_getMitigationAssetWithEndpointId:(id)arg1 completion:(id /* block */)arg2;
- (void)_receivedNewAssetUpdate:(id)arg1;
- (void)assetDownloadMonitorDelegate:(id)arg1 assetType:(unsigned long long)arg2;
- (id)assetManager;
- (id)cachedAsset;
- (void)getMitigationAssetWithEndpointId:(id)arg1 completion:(id /* block */)arg2;
- (id)getNeuralCombinerConfigFile;
- (id)init;
- (id)initWithAssetManager:(id)arg1 withUAFAssetManager:(id)arg2 withUAFDownloadMonitor:(id)arg3 withLanguageCodeUpdateMonitor:(id)arg4 withAssetOverrideFlag:(bool)arg5 withOverrideAssetPath:(id)arg6;
- (id)languageCodeUpdateMonitor;
- (void)notifyObservers:(id)arg1 endpointId:(id)arg2;
- (id)observers;
- (bool)overrideEnabled;
- (id)overridePath;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)setAssetManager:(id)arg1;
- (void)setCachedAsset:(id)arg1;
- (void)setLanguageCodeUpdateMonitor:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOverrideEnabled:(bool)arg1;
- (void)setOverridePath:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUafAssetManager:(id)arg1;
- (void)setUafDownloadMonitor:(id)arg1;
- (void)start;
- (void)triggerAssetRefresh;
- (id)uafAssetManager;
- (id)uafDownloadMonitor;
- (void)unregisterObserver:(id)arg1;

@end


@interface CSAssetManager : NSObject <CSAdBlockerMetaUpdateMonitorDelegate, CSAssetControllerDelegate, CSLanguageCodeUpdateMonitorDelegate, CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSVoiceTriggerAssetMetaUpdateMonitorDelegate> {
    NSString * _currentLanguageCode;
    NSObject<OS_dispatch_source> * _downloadTimer;
    long long  _downloadTimerCount;
    CSAssetDownloadingOption * _downloadingOption;
    CSPolicy * _enablePolicy;
    NSMutableDictionary * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *currentLanguageCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)CSAdBlockerMetaUpdateMonitor:(id)arg1 didReceiveNewAdBlockerAssetMetaData:(bool)arg2;
- (void)CSAssetController:(id)arg1 didDownloadNewAssetForType:(unsigned long long)arg2;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSSpeakerRecognitionAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeakerRecognitionAssetMetaData:(bool)arg2;
- (void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeechEndpointAssetMetaData:(bool)arg2;
- (void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg1 didReceiveNewVoiceTriggerAssetMetaData:(bool)arg2;
- (bool)_canFetchRemoteAsset:(unsigned long long)arg1;
- (void)_createPeriodicalDownloadTimer;
- (void)_fetchRemoteMetaData;
- (void)_startPeriodicalDownload;
- (void)_stopPeriodicalDownload;
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;
- (id)assetForCurrentLanguageOfType:(unsigned long long)arg1;
- (void)assetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 compatibilityVersion:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (void)assetOfType:(unsigned long long)arg1 providerType:(unsigned long long)arg2 language:(id)arg3 completion:(id /* block */)arg4;
- (id)currentLanguageCode;
- (id)initWithDownloadOption:(id)arg1;
- (id)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1;
- (void)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (id)queue;
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (void)setAssetDownloadingOption:(id)arg1;
- (void)setQueue:(id)arg1;

@end

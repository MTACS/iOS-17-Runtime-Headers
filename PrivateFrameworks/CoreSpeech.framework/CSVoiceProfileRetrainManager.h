
@interface CSVoiceProfileRetrainManager : NSObject <CSSpeakerRecognitionAssetDownloadMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(bool)arg2 assetProviderType:(unsigned long long)arg3;
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(bool)arg2;
- (void)_migrateTDVoiceProfileCallback;
- (void)_retrainingVoiceProfile:(id)arg1 voiceProfile:(id)arg2 asset:(id)arg3;
- (void)_runVoiceProfileRetrainerWithAsset:(id)arg1 withLanguageCode:(id)arg2;
- (void)_speakerRecognitionCleanupDuplicatedProfilesCallback;
- (void)_speakerRecognitionModelRetrainCallback;
- (id)init;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)triggerVoiceProfileRetrainingWithAsset:(id)arg1;

@end

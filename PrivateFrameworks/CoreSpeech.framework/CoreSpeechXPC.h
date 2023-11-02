
@interface CoreSpeechXPC : NSObject <CoreSpeechXPCProtocol> {
    CoreSpeechXPCFakeModelMonitor * _fakeAssetMonitor;
}

@property (nonatomic, retain) CoreSpeechXPCFakeModelMonitor *fakeAssetMonitor;

+ (id)accessoryModelTypeToString:(long long)arg1;
+ (void)logLanguageMismatchMetricWithJarvisSelectedLocale:(id)arg1 jarvisTriggerMode:(long long)arg2;

- (void).cxx_destruct;
- (void)_fetchVoiceTriggerInstalledAssetWithLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleFakeHearstModelRequest:(id)arg1 majorVersion:(unsigned long long)arg2 minorVersion:(unsigned long long)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(id /* block */)arg6;
- (id)fakeAssetMonitor;
- (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(id /* block */)arg2;
- (id)getAccessoryFallbackFamilyLocal:(id)arg1 fromLocaleMap:(id)arg2;
- (id)getAccessoryFallbackLocalTable;
- (id)initWithFakeMonitor:(id)arg1;
- (void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(id /* block */)arg2;
- (id)selectFallbackModelForLocale:(id)arg1 downloadedModels:(id)arg2 preinstalledModels:(id)arg3 rtLocaleMap:(id)arg4;
- (void)setFakeAssetMonitor:(id)arg1;
- (void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(id /* block */)arg3;
- (void)voiceTriggerRTModelWithRequestOptions:(id)arg1 downloadedModels:(id)arg2 preinstalledModels:(id)arg3 completion:(id /* block */)arg4;

@end


@interface _LTDTTSAssetService : NSObject <_LTDAssetServiceProtocol>

+ (id)_availableTTSAssets;
+ (id)_availableTTSAssetsByLanguage;
+ (long long)_genderForLocaleIdentifier:(id)arg1;
+ (long long)_preferredGender;
+ (id)_preferredName;
+ (id)_queue;
+ (id)_siriVoiceForTTSAsset:(id)arg1;
+ (id)_ttsAssetForLanguage:(id)arg1 name:(id)arg2 gender:(long long)arg3;
+ (unsigned long long)assetTypeForAssetIdentifier:(id)arg1;
+ (void)downloadAsset:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)downloadVoiceAssetsForLanguagePair:(id)arg1;
+ (id)installedAssetIdentifiers;
+ (long long)preferredVoiceType;
+ (void)purgeAsset:(id)arg1 completion:(id /* block */)arg2;
+ (void)setAutoDownloadedAssets:(id)arg1;
+ (void)setSiriTTSSession:(id)arg1;
+ (void)setSubscribedVoices:(id)arg1;
+ (id)siriTTSSession;
+ (id)subscribedVoices;
+ (id)ttsAssetForLocaleIdentifier:(id)arg1;
+ (id)voiceForLocaleIdentifier:(id)arg1;

@end

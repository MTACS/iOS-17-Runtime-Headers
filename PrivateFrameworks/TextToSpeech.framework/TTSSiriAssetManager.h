
@interface TTSSiriAssetManager : NSObject

+ (id)_assetFilterForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5 locallyAvailable:(bool)arg6;
+ (id)_assetTechnologyForVoiceType:(long long)arg1;
+ (id)_assetTypesForVoiceType:(long long)arg1;
+ (id)_assetsForLanguage:(id)arg1 voiceType:(long long)arg2 installedOnly:(bool)arg3;
+ (long long)_footprintForQuality:(id)arg1;
+ (id)_footprintForType:(long long)arg1;
+ (id)_siriAssetForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5;
+ (id)_siriAssetForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5 locallyAvailable:(bool)arg6;
+ (long long)_voiceTypeForAssetTechnology:(id)arg1;
+ (id)assetForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5;
+ (id)assetsForLanguage:(id)arg1 voiceType:(long long)arg2;
+ (id)convertTTSLanguageCodeToSiriLanguageCode:(id)arg1;
+ (id)deprecatedVoicesMap;
+ (void)downloadAsset:(id)arg1 progressHandler:(id /* block */)arg2;
+ (void)downloadVoiceResourceForLanguage:(id)arg1 completion:(id /* block */)arg2;
+ (id)installedAssetForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5;
+ (id)installedAssetsForLanguage:(id)arg1 voiceType:(long long)arg2;
+ (id)installedVoiceResourceForLanguage:(id)arg1;
+ (void)purgeAsset:(id)arg1;
+ (bool)spaceCheck:(id)arg1;
+ (void)stopDownload:(id)arg1;
+ (id)ttsAssetFromVoiceAsset:(id)arg1;
+ (id)voiceAssetFromTTSAsset:(id)arg1;
+ (id)voiceIdentifierForAsset:(id)arg1;
+ (id)voiceIdentifierForType:(long long)arg1 footprint:(long long)arg2 language:(id)arg3 name:(id)arg4;
+ (id)voiceResourceForLanguage:(id)arg1 voiceType:(long long)arg2;

@end

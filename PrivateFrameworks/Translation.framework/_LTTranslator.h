
@interface _LTTranslator : NSObject {
    NSXPCConnection * _connection;
}

+ (void)_clearCaches;
+ (void)_deleteHotfix:(id /* block */)arg1;
+ (void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
+ (void)_getAssetSize:(id /* block */)arg1;
+ (void)_getServiceProxyWithDelegate:(id)arg1 errorHandler:(id /* block */)arg2 block:(id /* block */)arg3;
+ (void)_getSyncServiceProxyWithDelegate:(id)arg1 errorHandler:(id /* block */)arg2 block:(id /* block */)arg3;
+ (void)_getTextServiceProxyWithDelegate:(id)arg1 useDedicatedTextMachPort:(bool)arg2 errorHandler:(id /* block */)arg3 block:(id /* block */)arg4;
+ (void)_offlineLanguageStatus:(id /* block */)arg1;
+ (void)_purgeAllAssets:(id /* block */)arg1;
+ (void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
+ (void)_updateAllAssets:(id /* block */)arg1;
+ (void)_updateHotfix:(id /* block */)arg1;
+ (void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(id /* block */)arg2;
+ (void)autoDetectSpeechUnsupportedPairsWithCompletion:(id /* block */)arg1;
+ (void)availableLocalePairsForTask:(long long)arg1 completion:(id /* block */)arg2;
+ (void)availableLocalePairsForTask:(long long)arg1 useDedicatedMachPort:(bool)arg2 completion:(id /* block */)arg3;
+ (void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(id /* block */)arg3;
+ (void)initialize;
+ (void)installOfflineLocales:(id)arg1 completion:(id /* block */)arg2;
+ (void)installedLocales:(id /* block */)arg1;
+ (id /* block */)interruptionHandler;
+ (void)languageAssetsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)languageForText:(id)arg1 completion:(id /* block */)arg2;
+ (void)languagesForText:(id)arg1 completion:(id /* block */)arg2;
+ (void)languagesForText:(id)arg1 usingModel:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)languagesForText:(id)arg1 usingModel:(unsigned long long)arg2 strategy:(unsigned long long)arg3 useDedicatedTextMachPort:(bool)arg4 completion:(id /* block */)arg5;
+ (void)languagesForText:(id)arg1 usingModel:(unsigned long long)arg2 useDedicatedTextMachPort:(bool)arg3 completion:(id /* block */)arg4;
+ (void)onDeviceModeEnabled:(id /* block */)arg1;
+ (void)onDeviceModeEnabledWithDedicatedMachPort:(bool)arg1 completion:(id /* block */)arg2;
+ (void)selfLoggingEventWithData:(id)arg1;
+ (void)setInterruptionHandler:(id /* block */)arg1;
+ (void)setLanguageAssets:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)shouldPresentSystemFirstUseConsentWithDedicatedMachPort:(bool)arg1 completion:(id /* block */)arg2;
+ (void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(id /* block */)arg3;
+ (void)taskIsSupportedInCurrentRegion:(long long)arg1 completion:(id /* block */)arg2;
+ (void)textStreamingConfigurationWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)cleanup;
- (void)log:(id)arg1;
- (void)preheatForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)preheatForRequestSync:(id)arg1;
- (id)startTranslationSession;
- (id)startTranslationSessionWithSELFLoggingInvocationId:(id)arg1;
- (void)translate:(id)arg1;
- (void)translate:(id)arg1 useDedicatedTextMachPort:(bool)arg2;

@end


@interface _LTClientConnection : NSObject <_LTTranslationService> {
    NSXPCConnection * _connection;
    <_LTClientConnectionDelegate> * _delegate;
    _LTTranslationServer * _server;
    NSUUID * _speechSessionID;
    bool  _trusted;
    NSString * _trustedClientIdentifier;
}

@property (nonatomic) <_LTClientConnectionDelegate> *delegate;

- (void).cxx_destruct;
- (id)_clientDelegate;
- (void)_deleteHotfix:(id /* block */)arg1;
- (void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_getAssetSize:(id /* block */)arg1;
- (void)_offlineLanguageStatus:(id /* block */)arg1;
- (void)_purgeAllAssets:(id /* block */)arg1;
- (void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_updateAllAssets:(id /* block */)arg1;
- (void)_updateHotfix:(id /* block */)arg1;
- (void)addSpeechAudioData:(id)arg1;
- (void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(id /* block */)arg2;
- (void)assetRequestHandler:(id)arg1;
- (void)autoDetectSpeechUnsupportedPairsWithCompletion:(id /* block */)arg1;
- (void)availableLocalePairsForTask:(long long)arg1 completion:(id /* block */)arg2;
- (void)cleanup;
- (void)cleanupOnDisconnect;
- (void)clearCaches;
- (void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (void)endAudio;
- (id)initWithConnection:(id)arg1 server:(id)arg2 trusted:(bool)arg3;
- (void)installedLocales:(id /* block */)arg1;
- (void)languageAssetsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)languageForText:(id)arg1 completion:(id /* block */)arg2;
- (void)languagesForText:(id)arg1 completion:(id /* block */)arg2;
- (void)languagesForText:(id)arg1 usingModel:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)languagesForText:(id)arg1 usingModel:(unsigned long long)arg2 strategy:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)logRequestOfType:(id)arg1 context:(id)arg2;
- (void)logWithRequestData:(id)arg1;
- (void)onDeviceModeEnabled:(id /* block */)arg1;
- (void)preheatWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)provideFeedback:(id)arg1 withContext:(id)arg2;
- (void)selfLoggingEventWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)shouldPresentSystemFirstUseConsent:(id /* block */)arg1;
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)startInstallRequest:(id)arg1;
- (void)startSpeechTranslationWithContext:(id)arg1;
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2;
- (void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(id /* block */)arg3;
- (void)textStreamingConfigurationWithCompletion:(id /* block */)arg1;
- (void)translate:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)translateParagraphs:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;

@end

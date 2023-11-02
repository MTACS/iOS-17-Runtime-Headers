
@interface _LTTranslationServer : NSObject {
    _LTActivityLogger * _activityLogger;
    _LTLoggingRequestHandler * _logger;
    <_LTTranslationEngine> * _offlineCachedEngine;
    <_LTTranslationEngine> * _onlineCachedEngine;
    NSObject<OS_dispatch_queue> * _queue;
    _LTDSELFLoggingManager * _selfLoggingManager;
    _LTServerSpeakSession * _speakSession;
    _LTServerSpeechSession * _speechSession;
    _LTTextToSpeechCache * _ttsCache;
}

- (void).cxx_destruct;
- (void)_deleteHotfix:(id /* block */)arg1;
- (void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_engineForContext:(id)arg1 error:(id*)arg2;
- (void)_getAssetSize:(id /* block */)arg1;
- (void)_logStateSoon;
- (id)_offlineEngineForContext:(id)arg1 error:(id*)arg2;
- (void)_offlineLanguageStatus:(id /* block */)arg1;
- (id)_onlineEngineForContext:(id)arg1 error:(id*)arg2;
- (void)_purgeAllAssets:(id /* block */)arg1;
- (void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_speechSessionCompleted;
- (void)_updateAllAssets:(id /* block */)arg1;
- (void)_updateHotfix:(id /* block */)arg1;
- (void)addSpeechAudioData:(id)arg1;
- (void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(id /* block */)arg2;
- (void)autoDetectSpeechUnsupportedPairsWithCompletion:(id /* block */)arg1;
- (void)availableLocalePairsForTask:(long long)arg1 completion:(id /* block */)arg2;
- (void)cancelExistingSessions;
- (void)cancelSpeechSession;
- (void)cancelSpeechSessionWithID:(id)arg1;
- (void)cleanup;
- (void)cleanupOfflineEngine;
- (void)clearCaches;
- (void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(id /* block */)arg3;
- (void)endAudio;
- (id)init;
- (void)installedLocales:(id /* block */)arg1;
- (void)languageAssetsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)languageForText:(id)arg1 completion:(id /* block */)arg2;
- (void)languagesForText:(id)arg1 completion:(id /* block */)arg2;
- (void)languagesForText:(id)arg1 usingModel:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)languagesForText:(id)arg1 usingModel:(unsigned long long)arg2 strategy:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)notifyOfMemoryPressure;
- (void)onDeviceModeEnabled:(id /* block */)arg1;
- (void)preheatWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)registerActivity:(long long)arg1;
- (void)selfLoggingEventWithData:(id)arg1;
- (void)setLanguageAssets:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)shouldPresentSystemFirstUseConsent:(id /* block */)arg1;
- (void)speak:(id)arg1 withContext:(id)arg2 delegate:(id)arg3 completion:(id /* block */)arg4;
- (void)startInstallRequest:(id)arg1 delegate:(id)arg2;
- (void)startLoggingRequest:(id)arg1;
- (id)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2;
- (id)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3;
- (void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(id /* block */)arg3;
- (void)textStreamingConfigurationWithCompletion:(id /* block */)arg1;
- (void)translateParagraphs:(id)arg1 withContext:(id)arg2 paragraphResult:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;

@end

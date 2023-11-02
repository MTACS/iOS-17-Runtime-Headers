
@protocol _LTTranslationService <_LTTextTranslationService>

@required

- (void)_deleteHotfix:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_downloadAssetForLanguagePair:(void *)arg1 userInitiated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: _LTLocalePair *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_getAssetSize:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)_offlineLanguageStatus:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)_purgeAllAssets:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_purgeAssetForLanguagePair:(void *)arg1 userInitiated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: _LTLocalePair *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_updateAllAssets:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_updateHotfix:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addSpeechAudioData:(NSData *)arg1;
- (void)additionalLikelyPreferredLocalesForLocale:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSLocale *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)assetRequestHandler:(_LTLanguageAssetRequest *)arg1;
- (void)autoDetectSpeechUnsupportedPairsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)availableLocalePairsForTask:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)cleanup;
- (void)clearCaches;
- (void)configInfoForLocale:(void *)arg1 otherLocale:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSLocale *, NSLocale *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)endAudio;
- (void)installedLocales:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)languageAssetsWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)languageForText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTLanguageDetectionResult *, void*
- (void)languagesForText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTTextLanguageDetectionResult *, void*
- (void)logWithRequestData:(NSData *)arg1;
- (void)preheatWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: _LTTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)provideFeedback:(_LTTranslationFeedback *)arg1 withContext:(_LTTaskContext *)arg2;
- (void)selfLoggingEventWithData:(_LTSELFLoggingEventData *)arg1;
- (void)speak:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, _LTTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)startInstallRequest:(_LTInstallRequest *)arg1;
- (void)startSpeechTranslationWithContext:(_LTTranslationContext *)arg1;
- (void)startTextToSpeechTranslationWithContext:(_LTTranslationContext *)arg1 text:(NSString *)arg2;
- (void)task:(void *)arg1 isSupportedInCountry:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)textStreamingConfigurationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTTextStreamingConfiguration *, void*
- (void)translate:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: _LTTranslationParagraph *, _LTTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTTranslationResult *, NSError *, void*
- (void)translateParagraphs:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, _LTTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)translateSentence:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, _LTTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTTranslationResult *, NSError *, void*

@end

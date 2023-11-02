
@protocol CoreEmbeddedSpeechRecognizerProvider <NSObject>

@required

+ (void)cleanupUnusedSubscriptions;
+ (void)compileAllAssets;
+ (NSDictionary *)dictionaryWithContentsProfilePathForLanguage:(NSString *)arg1 errorOut:(id*)arg2;
+ (void)forceCooldownIfIdle;
+ (void)handlePostUpgradeSubscriptions;
+ (NSDictionary *)offlineDictationStatusIgnoringCache:(bool)arg1 error:(id*)arg2;
+ (NSString *)profilePathForLanguage:(NSString *)arg1 errorOut:(id*)arg2;
+ (bool)purgeInstalledAssetsExceptLanguages:(NSSet *)arg1 assetType:(unsigned long long)arg2 error:(id*)arg3;
+ (NSNumber *)purgeInstalledAssetsExceptLanguages:(NSSet *)arg1 error:(id*)arg2;
+ (void)resetCacheAndCompileAllAssets;
+ (void)setAssetsPurgeabilityExceptLanguages:(NSSet *)arg1 assetType:(unsigned long long)arg2;
+ (NSDate *)speechProfileDataLastModifiedDataForLanguage:(NSString *)arg1;

- (void)addAudioPacket:(NSData *)arg1;
- (void)addAudioPacket:(NSData *)arg1 packetRecordedTime:(NSNumber *)arg2 packetReadyUpstreamTime:(NSNumber *)arg3;
- (void)createSpeechProfileWithLanguage:(void *)arg1 modelOverridePath:(void *)arg2 JSONData:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)deleteAllDESRecordsForDictationPersonalization;
- (void)fetchAssetsForAssetConfig:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CESRAssetConfig *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchAssetsForLanguage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchUserDataForLanguage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSData *, void*
- (void)finishAudio;
- (void)getOfflineAssetStatusIgnoringCache:(void *)arg1 assetType:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getOfflineAssetStatusIgnoringCache:(void *)arg1 assetType:(void *)arg2 withDetailedStatus:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: bool, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getOfflineDictationStatusIgnoringCache:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getOfflineDictationStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (unsigned char*)instanceUUID;
- (void)invalidate;
- (void)invalidatePersonalizedLM;
- (void)invalidateUaapLM;
- (CESRModelProperties *)modelPropertiesForAssetConfig:(CESRAssetConfig *)arg1 error:(id*)arg2;
- (void)pauseRecognition;
- (void)preheatSpeechRecognitionWithAssetConfig:(CESRAssetConfig *)arg1 preheatSource:(NSString *)arg2 modelOverrideURL:(NSURL *)arg3;
- (void)preheatSpeechRecognitionWithLanguage:(NSString *)arg1 modelOverrideURL:(NSURL *)arg2;
- (void)readProfileAndUserDataWithLanguage:(void *)arg1 allowOverride:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, void*
- (void)redecodeWithAudioDatas:(void *)arg1 language:(void *)arg2 task:(void *)arg3 samplingRate:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSDictionary *, NSString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)removePersonalizedLMForFidesOnly:(bool)arg1;
- (void)requestEagerResult;
- (void)resetDESWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resumeRecognitionWithPrefixText:(NSString *)arg1 postfixText:(NSString *)arg2 selectedText:(NSString *)arg3;
- (void)runCorrectedTextEvaluationWithAudioDatas:(void *)arg1 recordDatas:(void *)arg2 language:(void *)arg3 samplingRate:(void *)arg4 caseSensitive:(void *)arg5 skipLME:(void *)arg6 wordSenseAccessListSet:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 14: NSDictionary *, NSDictionary *, NSString *, unsigned long long, bool, bool, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)runEvaluationWithDESRecordDatas:(void *)arg1 language:(void *)arg2 recipe:(void *)arg3 attachments:(void *)arg4 fidesPersonalizedLMPath:(void *)arg5 fidesPersonalizedLMTrainingAsset:(void *)arg6 scrubResult:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 14: NSDictionary *, NSString *, NSDictionary *, NSArray *, NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)runEvaluationWithDESRecordDatas:(void *)arg1 language:(void *)arg2 recipe:(void *)arg3 fidesPersonalizedLMPath:(void *)arg4 fidesPersonalizedLMTrainingAsset:(void *)arg5 scrubResult:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 13: NSDictionary *, NSString *, NSDictionary *, NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)sendSpeechCorrectionInfo:(AFSpeechCorrectionInfo *)arg1 interactionIdentifier:(NSString *)arg2;
- (void)startMissingAssetDownload;
- (void)startSpeechRecognitionWithParameters:(void *)arg1 didStartHandler:(void *)arg2; // needs 2 arg types, found 9: CESRSpeechParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)startSpeechRecognitionWithParameters:(void *)arg1 didStartHandlerWithInfo:(void *)arg2; // needs 2 arg types, found 8: CESRSpeechParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CESRModelProperties *, NSError *, void*
- (void)stopAudioDecoding;
- (void)updateSpeechProfileWithLanguage:(void *)arg1 modelOverridePath:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)writeUaapOovsForLanguage:(void *)arg1 bundleId:(void *)arg2 customProns:(void *)arg3 newOovs:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSDictionary *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end


@interface SFLocalSpeechRecognitionClient : NSObject <SFLSRDelegate> {
    NSError * _connectionUnavailableError;
    <SFLocalSpeechRecognitionDelegate> * _delegate;
    id /* block */  _downloadCompletion;
    id /* block */  _downloadProgress;
    NSXPCConnection * _lsrConnection;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _recognitionActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SFLocalSpeechRecognitionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)cleanupCacheWithCompletion:(id /* block */)arg1;
+ (void)initialize;
+ (void)logCoreAnalyticsEvent:(id)arg1 withAnalytics:(id)arg2;

- (void).cxx_destruct;
- (void)addAudioPacket:(id)arg1;
- (void)addProns:(id)arg1 forWord:(id)arg2 completion:(id /* block */)arg3;
- (void)addSentenceToNgramCounts:(id)arg1;
- (void)addSentenceToNgramCounts:(id)arg1 completion:(id /* block */)arg2;
- (void)appLmNeedsRebuild:(id)arg1 language:(id)arg2 sandboxExtensions:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelSpeech;
- (void)configParametersForVoicemailWithLanguage:(id)arg1 clientID:(id)arg2 completion:(id /* block */)arg3;
- (void)createNgramCountsArtifactFromPhraseCountArtifact:(id)arg1 writeToDirectory:(id)arg2 sandboxExtensions:(id)arg3 completion:(id /* block */)arg4;
- (void)createPhraseCountsArtifactWithIdentifier:(id)arg1 rawPhraseCountsPath:(id)arg2 customPronunciationsPath:(id)arg3 writeToDirectory:(id)arg4 sandboxExtensions:(id)arg5 completion:(id /* block */)arg6;
- (void)dealloc;
- (id)delegate;
- (void)deserializeNgramCountsData:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAssetsForLanguage:(id)arg1 clientID:(id)arg2 urgent:(bool)arg3 forceUpgrade:(bool)arg4 detailedProgress:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)downloadAssetsForLanguage:(id)arg1 clientID:(id)arg2 urgent:(bool)arg3 forceUpgrade:(bool)arg4 progress:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)fetchAssetsForLanguage:(id)arg1 clientID:(id)arg2 completion:(id /* block */)arg3;
- (void)generateNgramCountsSerializeDataWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)initializeLmWithAssetPath:(id)arg1 completion:(id /* block */)arg2;
- (void)initializeLmWithLocale:(id)arg1 clientID:(id)arg2 completion:(id /* block */)arg3;
- (void)initializeWithSandboxExtensions:(id)arg1;
- (void)installedLanguagesWithSynchronousConnection:(bool)arg1 completion:(id /* block */)arg2;
- (void)invalidate;
- (void)lmeThresholdWithCompletion:(id /* block */)arg1;
- (oneway void)localSpeechRecognitionDidDownloadAssetsWithProgress:(unsigned long long)arg1 isStalled:(bool)arg2;
- (oneway void)localSpeechRecognitionDidFail:(id)arg1;
- (oneway void)localSpeechRecognitionDidFinishDownloadingAssets:(id)arg1 error:(id)arg2;
- (oneway void)localSpeechRecognitionDidFinishRecognition:(id)arg1;
- (oneway void)localSpeechRecognitionDidProcessAudioDuration:(double)arg1;
- (oneway void)localSpeechRecognitionDidRecognizePartialResult:(id)arg1 rawPartialResult:(id)arg2;
- (oneway void)localSpeechRecognitionDidSucceed;
- (void)metricsWithCompletion:(id /* block */)arg1;
- (void)oovWordsAndFrequenciesWithCompletion:(id /* block */)arg1;
- (void)preloadRecognizerForLanguage:(id)arg1 task:(id)arg2 clientID:(id)arg3 recognitionOverrides:(id)arg4 modelOverrideURL:(id)arg5 completion:(id /* block */)arg6;
- (void)promoteAssets;
- (void)purgeAssetsForLanguage:(id)arg1 clientID:(id)arg2 completion:(id /* block */)arg3;
- (void)setAssetsAsProvisional;
- (void)setAssetsPurgeability:(bool)arg1 forLanguages:(id)arg2 clientID:(id)arg3 completion:(id /* block */)arg4;
- (void)startRecordedAudioDictationWithParameters:(id)arg1;
- (void)stopSpeech;
- (void)trainAppLmFromNgramCountsArtifact:(id)arg1 forApp:(id)arg2 language:(id)arg3 writeToDirectory:(id)arg4 sandboxExtensions:(id)arg5 completion:(id /* block */)arg6;
- (void)trainAppLmFromNgramsSerializedData:(id)arg1 customPronsData:(id)arg2 language:(id)arg3 writeToDirectory:(id)arg4 sandboxExtension:(id)arg5 completion:(id /* block */)arg6;
- (void)trainFromPlainTextAndWriteToDirectory:(id)arg1 sandboxExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)wakeUpWithCompletion:(id /* block */)arg1;

@end

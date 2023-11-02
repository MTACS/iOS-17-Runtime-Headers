
@interface _LTOfflineTranslationEngine : NSObject <_LTTranslationEngine> {
    NSArray * _asrModelURLs;
    _LTSpeechTranslationAssetInfo * _assetInfo;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _didEndpointSpeech;
    NSError * _earError;
    NSDictionary * _etiquetteSanitizers;
    NSLocale * _lidBestResult;
    _LTLanguageDetectionResult * _lidResult;
    NSObject<OS_dispatch_group> * _lidWaitGroup;
    _LTLocalePair * _localePair;
    NSURL * _mtModelURL;
    NSObject<OS_dispatch_queue> * _queue;
    _LTMultilingualSpeechRecognizer * _recognizer;
    _LTDSELFLoggingManager * _selfLoggingManager;
    _LTOfflineSpeechSynthesizer * _synthesizer;
    EMTTranslator * _translator;
    _LTTextToSpeechCache * _ttsCache;
}

@property (nonatomic, retain) NSArray *asrModelURLs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _LTLocalePair *localePair;
@property (nonatomic, retain) NSURL *mtModelURL;
@property (readonly) Class superclass;
@property (nonatomic, retain) _LTTextToSpeechCache *ttsCache;

+ (bool)_needToWaitForBothASRSystemsWithContext:(id)arg1 lidResult:(id)arg2;

- (void).cxx_destruct;
- (id)_getBestRecognitionResult:(id)arg1 context:(id)arg2;
- (id)_handleTranslationResults:(id)arg1 withContext:(id)arg2 sourceString:(id)arg3;
- (void)_loadEtiquetteSanitizers;
- (void)_loadRecognizers;
- (void)_loadTranslatorForTask:(id)arg1;
- (id)_paragraphResultFromSentences:(id)arg1;
- (void)_translate:(id)arg1 withContext:(id)arg2 isFinal:(bool)arg3 completion:(id /* block */)arg4;
- (void)_translate:(id)arg1 withContext:(id)arg2 toLocale:(id)arg3 paragraphResult:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_translateParagraph:(id)arg1 withContext:(id)arg2 toLocale:(id)arg3 completion:(id /* block */)arg4;
- (void)_translatePrepare:(id)arg1;
- (void)_translateString:(id)arg1 isFinal:(bool)arg2 withContext:(id)arg3 toLocale:(id)arg4 withSpans:(id)arg5 completion:(id /* block */)arg6;
- (void)_waitForLIDWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)addSpeechAudioData:(id)arg1;
- (id)asrModelURLs;
- (void)cancelRecognition;
- (void)cancelSpeechTranslation;
- (void)endAudio;
- (void)endpoint;
- (id)initWithLocalePair:(id)arg1 assetInfo:(id)arg2 selfLoggingManager:(id)arg3;
- (id)localePair;
- (id)mtModelURL;
- (void)preheatAsynchronously:(bool)arg1 withContext:(id)arg2;
- (void)setAsrModelURLs:(id)arg1;
- (void)setLanguagesRecognized:(id)arg1 context:(id)arg2;
- (void)setLocalePair:(id)arg1;
- (void)setMtModelURL:(id)arg1;
- (void)setTtsCache:(id)arg1;
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2;
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3;
- (void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (bool)translatesPair:(id)arg1;
- (id)ttsCache;

@end

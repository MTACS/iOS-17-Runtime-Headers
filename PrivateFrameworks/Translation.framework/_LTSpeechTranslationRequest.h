
@interface _LTSpeechTranslationRequest : _LTTranslationRequest {
    long long  __asrConfidenceThreshold;
    NSURL * __lidModelURL;
    long long  __lidThreshold;
    NSArray * __offlineASRModelURLs;
    bool  _autoEndpoint;
    AVAudioConverter * _converter;
    <_LTSpeechTranslationDelegate> * _delegate;
    id /* block */  _done;
    bool  _enableVAD;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queuedBuffers;
    <_LTTranslationService> * _service;
}

@property (nonatomic) long long _asrConfidenceThreshold;
@property (nonatomic, retain) NSURL *_lidModelURL;
@property (nonatomic) long long _lidThreshold;
@property (nonatomic, retain) NSArray *_offlineASRModelURLs;
@property (nonatomic) bool autoEndpoint;
@property (nonatomic) <_LTSpeechTranslationDelegate> *delegate;
@property (nonatomic) bool enableVAD;

- (void).cxx_destruct;
- (void)_appendAudioPCMBuffer:(id)arg1;
- (void)_appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 simulateRealtime:(bool)arg2;
- (long long)_asrConfidenceThreshold;
- (void)_convertAndFeedPCMBuffer:(id)arg1;
- (void)_drainAndClearAudioConverter;
- (id)_lidModelURL;
- (long long)_lidThreshold;
- (id)_offlineASRModelURLs;
- (void)_simulateRealtimeBehavior:(id)arg1;
- (void)_startTranslationWithService:(id)arg1 done:(id /* block */)arg2;
- (void)_translationFailedWithError:(id)arg1;
- (void)append:(struct opaqueCMSampleBuffer { }*)arg1 simulateRealtime:(bool)arg2;
- (void)appendAudioPCMBuffer:(id)arg1;
- (bool)autoEndpoint;
- (id)delegate;
- (bool)enableVAD;
- (void)endAudio;
- (void)hybridEndpointerFoundEndpoint;
- (id)initWithLocalePair:(id)arg1;
- (id)initWithLocalePair:(id)arg1 suggestedUniqueID:(id)arg2;
- (id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2;
- (id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2 suggestedUniqueID:(id)arg3;
- (void)languageDetectionCompleted;
- (void)languageDetectionResult:(id)arg1;
- (id)loggingType;
- (id)nativeAudioFormat;
- (id)requestContext;
- (void)serverEndpointerFeatures:(id)arg1 locale:(id)arg2;
- (void)setAutoEndpoint:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableVAD:(bool)arg1;
- (void)set_asrConfidenceThreshold:(long long)arg1;
- (void)set_lidModelURL:(id)arg1;
- (void)set_lidThreshold:(long long)arg1;
- (void)set_offlineASRModelURLs:(id)arg1;
- (void)speechActivityDetected;
- (void)speechRecognitionResult:(id)arg1;
- (void)translationDidFinishWithError:(id)arg1;
- (void)translatorDidTranslate:(id)arg1;

@end

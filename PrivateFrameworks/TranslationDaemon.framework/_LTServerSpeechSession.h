
@interface _LTServerSpeechSession : NSObject <_LTSpeechTranslationDelegate> {
    _LTSpeechDataQueue * _cache;
    id /* block */  _completionHandler;
    _LTTranslationContext * _context;
    <_LTSpeechTranslationDelegate> * _delegate;
    _LTHybridEndpointer * _endpointer;
    <_LTTranslationEngine> * _engine;
    bool  _expectFinalLidResult;
    _LTLanguageDetector * _languageDetector;
    NSObject<OS_dispatch_queue> * _queue;
    _LTDSELFLoggingManager * _selfLoggingManager;
    bool  _sentFinalLidResult;
    NSUUID * _sessionID;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _speechActivityDetected;
    _LTSpeechActivityDetector * _speechDetector;
    NSError * _translationError;
    bool  _translationFinished;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <_LTSpeechTranslationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _LTHybridEndpointer *endpointer;
@property (nonatomic, retain) <_LTTranslationEngine> *engine;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _LTLanguageDetector *languageDetector;
@property (nonatomic, retain) _LTDSELFLoggingManager *selfLoggingManager;
@property (nonatomic, retain) NSUUID *sessionID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startSpeechTranslationWithContext:(id)arg1;
- (void)_translateSpeechAudioData:(id)arg1;
- (void)addSpeechAudioData:(id)arg1;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)delegate;
- (void)delegateTranslationDidFinishWithError:(id)arg1;
- (void)endAudio;
- (id)endpointer;
- (id)engine;
- (void)hybridEndpointerFoundEndpoint;
- (id)initWithEngine:(id)arg1 delegate:(id)arg2 selfLoggingManager:(id)arg3;
- (void)languageDetectionCompleted;
- (void)languageDetectionResult:(id)arg1;
- (id)languageDetector;
- (id)selfLoggingManager;
- (void)serverEndpointerFeatures:(id)arg1 locale:(id)arg2;
- (id)sessionID;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngine:(id)arg1;
- (void)setSelfLoggingManager:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)speechActivityDetected;
- (void)speechRecognitionResult:(id)arg1;
- (void)startSpeechTranslationWithContext:(id)arg1;
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2;
- (void)translationDidFinishWithError:(id)arg1;
- (void)translatorDidTranslate:(id)arg1;

@end

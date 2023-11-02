
@interface _LTOnlineTranslationEngine : NSObject <_LTTranslationEngine> {
    AFSettingsConnection * _assistantSettingsConnection;
    FTBlazarService * _blazarService;
    long long  _dataSharingOptInStatus;
    _LTDSELFLoggingManager * _selfLoggingManager;
    NSOperationQueue * _sendQueue;
    NSObject<OS_dispatch_queue> * _serverQueue;
    NSObject<OS_dispatch_source> * _serverTimer;
    FTMtService * _service;
    FTBlazarService * _siriService;
    _LTOspreySpeechTranslationSession * _speechSession;
    NSDate * _startTime;
    FTBlazarService * _systemService;
    NSObject<OS_dispatch_queue> * _timerQueue;
    NSObject<OS_dispatch_queue> * _translationQueue;
    _LTTextToSpeechCache * _ttsCache;
    FTBlazarService * _webTaskService;
    _LTBatchTranslationResponseHandler * batchTranslationResponseHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) _LTTextToSpeechCache *ttsCache;

+ (id)blazarServiceWithBundleID:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_blazarService;
- (bool)_hasOngoingSpeechSession;
- (id)_serviceForTask:(long long)arg1;
- (id)_siriService;
- (void)_speechSessionCompletedWithError:(id)arg1;
- (id)_systemService;
- (id)_tokenizeString:(id)arg1 inLocale:(id)arg2;
- (void)_translateParagraph:(id)arg1 index:(long long)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (id)_webTaskService;
- (void)addSpeechAudioData:(id)arg1;
- (void)cancelServerTimeout;
- (void)cancelSpeechTranslation;
- (void)endAudio;
- (void)endpoint;
- (id)initWithSelfLoggingManager:(id)arg1;
- (void)preheatAsynchronously:(bool)arg1 withContext:(id)arg2;
- (void)sendBatchTranslationRequestWithDelegate:(id)arg1;
- (id)serverQueue;
- (void)serverTimeoutFired;
- (void)setLanguagesRecognized:(id)arg1 context:(id)arg2;
- (void)setServerQueue:(id)arg1;
- (void)setTtsCache:(id)arg1;
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)startServerTimeoutTimer;
- (void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2;
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3;
- (void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (bool)translatesPair:(id)arg1;
- (id)ttsCache;
- (void)updateServerTimeout;

@end

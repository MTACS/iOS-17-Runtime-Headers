
@interface _LTTranslationSession : NSObject <_LTSpeechTranslationDelegate> {
    NSURL * _URL;
    NSUUID * _logIdentifier;
    _LTSafariLatencyLoggingRequest * _logging;
    NSMutableDictionary * _outstandingRequests;
    _LTRateLimiter * _rateLimiter;
    <_LTTextTranslationService> * _service;
    NSString * _sessionID;
    NSObject<OS_dispatch_queue> * _translationQueue;
    _LTTranslator * _translator;
    bool  _waitingForService;
}

@property (nonatomic, copy) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *logIdentifier;
@property (nonatomic, retain) _LTRateLimiter *rateLimiter;
@property (nonatomic, retain) <_LTTextTranslationService> *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *translationQueue;
@property (nonatomic, retain) _LTTranslator *translator;

- (void).cxx_destruct;
- (id)URL;
- (void)_commonInitWithSuggestedSessionID:(id)arg1;
- (void)_ensureServiceConnection:(id /* block */)arg1 useDedicatedTextMachPort:(bool)arg2;
- (id)initForFutureServiceWithSessionID:(id)arg1 selfLoggingInvocationId:(id)arg2;
- (id)initWithTranslator:(id)arg1 selfLoggingInvocationId:(id)arg2;
- (id)logIdentifier;
- (void)markFirstParagraphComplete;
- (void)markPageComplete;
- (void)markPageLoaded;
- (void)markProgressDone;
- (void)paragraphTranslation:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)prepareWithService:(id)arg1;
- (void)provideFeedback:(id)arg1;
- (id)rateLimiter;
- (id)service;
- (void)setLogIdentifier:(id)arg1;
- (void)setRateLimiter:(id)arg1;
- (void)setService:(id)arg1;
- (void)setTranslationQueue:(id)arg1;
- (void)setTranslator:(id)arg1;
- (void)setURL:(id)arg1;
- (void)translate:(id)arg1;
- (void)translate:(id)arg1 useDedicatedTextMachPort:(bool)arg2;
- (id)translationQueue;
- (id)translator;

@end


@interface CULiveAudioServer : NSObject <SVXClientServiceConnectionDelegate, SVXClientSessionServiceDelegate> {
    AVAudioSession * _audioSession;
    NSMutableSet * _audioSessionClients;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    RPCompanionLinkClient * _messenger;
    bool  _prefSiriLED;
    bool  _prefSiriVOX;
    NSMutableDictionary * _sessionMap;
    SVXClientServiceConnection * _siriManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)liveActionPerformRequest:(id)arg1 completion:(id /* block */)arg2;
+ (void)liveActionSetupRequest:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_audioSessionEnd:(id)arg1;
- (void)_audioSessionStart:(id)arg1;
- (void)_handleActionPlayAlert:(int)arg1 senderID:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleActionPrepare:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleActionRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleActionSpeakText:(id)arg1 senderID:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleDataEvent:(id)arg1 options:(id)arg2;
- (void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_prepareAlert:(long long)arg1 senderID:(id)arg2 completion:(id /* block */)arg3;
- (void)_prepareSpeakText:(id)arg1 senderID:(id)arg2 completion:(id /* block */)arg3;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)clientServiceConnection:(id)arg1 performerForComponent:(long long)arg2;
- (void)clientServiceConnectionDidInvalidate:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)peerDisconnected:(id)arg1;
- (void)sessionService:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2;
- (void)sessionService:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2 turnID:(id)arg3;
- (void)sessionService:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id)arg1 didNotStartSoundWithID:(long long)arg2 error:(id)arg3;
- (void)sessionService:(id)arg1 didResignActiveWithDeactivationContext:(id)arg2;
- (void)sessionService:(id)arg1 didStartSoundWithID:(long long)arg2;
- (void)sessionService:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3;
- (void)sessionService:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2;
- (void)sessionService:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2 turnID:(id)arg3;
- (void)sessionService:(id)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id)arg1 willPresentFeedbackWithDialogIdentifier:(id)arg2;
- (void)sessionService:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3;
- (void)sessionService:(id)arg1 willStartSoundWithID:(long long)arg2;
- (void)setDispatchQueue:(id)arg1;

@end

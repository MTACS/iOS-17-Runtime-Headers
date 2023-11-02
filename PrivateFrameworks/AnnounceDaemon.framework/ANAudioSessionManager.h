
@interface ANAudioSessionManager : NSObject <ANTelephonyObserverDelegate> {
    ANTimer * _activationRetryTimer;
    AVAudioSession * _audioSession;
    ANTimer * _callEndTimer;
    bool  _canRetryAudioSessionActivation;
    ANTimer * _deactivationTimer;
    NSUUID * _endpointUUID;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    ANTelephonyObserver * _telephonyObserver;
    id /* block */  _waitForCallEndCompletion;
}

@property (nonatomic, retain) ANTimer *activationRetryTimer;
@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (nonatomic, retain) ANTimer *callEndTimer;
@property (nonatomic) bool canRetryAudioSessionActivation;
@property (nonatomic, retain) ANTimer *deactivationTimer;
@property (nonatomic, readonly) NSUUID *endpointUUID;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) ANTelephonyObserver *telephonyObserver;
@property (nonatomic, copy) id /* block */ waitForCallEndCompletion;

- (void).cxx_destruct;
- (void)_activateAudioSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_deactivateAudioSession;
- (void)activateAudioSessionWithCompletionHandler:(id /* block */)arg1;
- (bool)activateAudioSessionWithError:(id*)arg1;
- (id)activationRetryTimer;
- (id)audioSession;
- (id)callEndTimer;
- (bool)canRetryAudioSessionActivation;
- (void)deactivateAudioSessionAfterDelay:(double)arg1;
- (id)deactivationTimer;
- (void)dealloc;
- (id)endpointUUID;
- (id)initWithAudioSession:(id)arg1 queue:(id)arg2 endpointID:(id)arg3;
- (id)log;
- (id)makeTimerIdentifier;
- (void)observer:(id)arg1 didUpdateActiveCallStatus:(bool)arg2;
- (id)queue;
- (void)setActivationRetryTimer:(id)arg1;
- (void)setCallEndTimer:(id)arg1;
- (void)setCanRetryAudioSessionActivation:(bool)arg1;
- (void)setDeactivationTimer:(id)arg1;
- (void)setWaitForCallEndCompletion:(id /* block */)arg1;
- (void)startCallEndTimer;
- (id)telephonyObserver;
- (id /* block */)waitForCallEndCompletion;

@end

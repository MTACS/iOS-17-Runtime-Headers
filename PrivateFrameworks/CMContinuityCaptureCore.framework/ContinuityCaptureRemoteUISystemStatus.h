
@interface ContinuityCaptureRemoteUISystemStatus : ContinuityCaptureRemoteUIPowerButtonStatus {
    NSMutableSet * _activeCallIds;
    AVSystemController * _avSystemController;
    TUCallCenter * _callCenter;
    _Atomic long long  _callState;
    bool  _hasActiveCallAudioSession;
    NSMutableSet * _incomingCallIDs;
    bool  _invalidated;
    NSHashTable * _observers;
    unsigned int  _preventSystemSleepAssertionID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) long long callState;
@property (nonatomic) bool invalidated;

+ (void)invalidate;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_avSystemControllerProcessDied;
- (void)_handleCall:(id)arg1;
- (void)_handleCallAudioSessionActiveNotification:(id)arg1;
- (void)_handleCallStatusChangedNotification:(id)arg1;
- (void)_resolveActiveCallState;
- (void)_setupAVSystemController;
- (unsigned long long)activeCallCountOnMainQueue;
- (void)addObserver:(id)arg1;
- (long long)callState;
- (void)holdIdleSleepAssertionForReason:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (bool)invalidated;
- (void)releaseCurrentIdleSleepAssertion;
- (void)removeObserver:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setupCallStateMonitoring;

@end

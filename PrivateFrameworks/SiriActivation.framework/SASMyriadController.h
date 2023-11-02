
@interface SASMyriadController : NSObject <AFMyriadDelegate, SASLockStateMonitorDelegate> {
    CMMotionActivityManager * _activityManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activityManagerLock;
    AWAttentionAwarenessClient * _attentionClient;
    bool  _canceledByMyriad;
    <SASMyriadControllerDelegate> * _delegate;
    FBSDisplayLayoutMonitor * _displayMonitor;
    bool  _isLocked;
    bool  _isStationary;
    double  _liftEndTime;
    SASLockStateMonitor * _lockStateMonitor;
    NSObject<OS_dispatch_queue> * _myriadAttentionQueue;
    AFMyriadCoordinator * _myriadCoordinator;
    NSObject<OS_dispatch_semaphore> * _myriadFinishedSemaphore;
    double  _raiseToWakeTime;
    double  _unlockTime;
}

@property (nonatomic) bool canceledByMyriad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkForAttention:(id)arg1 withTimeout:(double)arg2;
- (void)_configureMotionActivityManager;
- (void)_updateRaiseToWakeTimeForTransition:(id)arg1;
- (void)activateForInTaskRequest:(bool)arg1 isVisible:(bool)arg2;
- (bool)activateForRequest:(id)arg1 visible:(bool)arg2;
- (bool)activateForRequest:(id)arg1 withTimeout:(id)arg2 visible:(bool)arg3;
- (bool)canceledByMyriad;
- (void)dealloc;
- (void)didChangeLockState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)setCanceledByMyriad:(bool)arg1;
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;
- (void)shouldContinue:(id)arg1;

@end

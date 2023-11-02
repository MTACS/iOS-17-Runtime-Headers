
@interface BLSHBacklightDisplayStateMachine : NSObject <BLSCBDisplayStateDelegate, BLSHWatchdogDelegate> {
    <BLSHBacklightDisplayStateMachineDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct { 
        int sequenceNumber; 
        long long cbDisplayMode; 
        long long previousCBDisplayMode; 
        double duration; 
        double fullDuration; 
        double startSeconds; 
        double effectiveStartSeconds; 
        long long phase; 
        bool shouldWait; 
    }  _lock_cbDisplayModeTransitionOperation;
    struct { 
        int sequenceNumber; 
        long long cbFlipbookState; 
        long long phase; 
        unsigned long long startTimestamp; 
    }  _lock_cbFlipbookStateChangeOperation;
    long long  _lock_completedCBDisplayMode;
    long long  _lock_completedCBFlipbookState;
    struct { 
        int sequenceNumber; 
        long long displayMode; 
        long long previousDisplayMode; 
        double duration; 
        double startSeconds; 
        long long phase; 
    }  _lock_displayRampOperation;
    bool  _lock_isPrewarmingDisplayMode;
    long long  _lock_lastSteadyStateDisplayMode;
    long long  _lock_prewarmingDisplayMode;
    unsigned long long  _lock_prewarmingDisplayMode_startTimestamp;
    int  _lock_sequenceNumber;
    bool  _lock_updatingCA;
    unsigned long long  _lock_updatingCA_startTimestamp;
    <BLSHBacklightOSInterfaceProviding> * _osInterface;
    unsigned long long  _stateHandler;
    <BLSHWatchdogInvalidatable> * _watchdogTimer;
}

@property (nonatomic) double completionDelayForTesting;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <BLSHBacklightDisplayStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long lastSteadyStateDisplayMode;
@property (readonly) Class superclass;
@property (getter=isTransitioningDisplayMode, nonatomic, readonly) bool transitioningDisplayMode;

- (void).cxx_destruct;
- (id)abortContext;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (long long)displayMode;
- (id)identifier;
- (id)initWithDelegate:(id)arg1 platformProvider:(id)arg2 osInterfaceProvider:(id)arg3;
- (bool)isTransitioningDisplayMode;
- (long long)lastSteadyStateDisplayMode;
- (id)osInterfaceProvider;
- (void)osInterfaceProvider:(id)arg1 didCompleteSwitchToFlipbookState:(long long)arg2 withError:(id)arg3;
- (void)osInterfaceProvider:(id)arg1 didCompleteTransitionToDisplayMode:(long long)arg2 withError:(id)arg3;
- (void)prewarmForDisplayMode:(long long)arg1;
- (void)setDisplayMode:(long long)arg1 withRampDuration:(double)arg2;

@end

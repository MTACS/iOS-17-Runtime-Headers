
@interface WFStateMachine : NSObject {
    NSObject<OS_os_activity> * _activity;
    bool  _blocksTransitionsOnInvalidation;
    <WFState> * _currentState;
    bool  _invalidated;
    NSMutableArray * _mutableStateHistory;
    bool  _silentlyDropInvalidTransitions;
    WFDispatchSourceTimer * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _transitionLock;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic) bool blocksTransitionsOnInvalidation;
@property (retain) <WFState> *currentState;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly, copy) NSMutableArray *mutableStateHistory;
@property (nonatomic) bool silentlyDropInvalidTransitions;
@property (nonatomic, readonly, copy) NSArray *stateHistory;
@property (nonatomic, retain) WFDispatchSourceTimer *timer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } transitionLock;

- (void).cxx_destruct;
- (id)activity;
- (bool)blocksTransitionsOnInvalidation;
- (id)currentState;
- (id)init;
- (void)invalidate;
- (bool)isInvalidated;
- (void)lock_addTransitionEventToHistoryWithState:(id)arg1 reason:(id)arg2 valid:(bool)arg3;
- (void)lock_cancelPendingTimers;
- (bool)lock_prepareForInvalidation;
- (id)lock_printedStateHistory;
- (id)mutableStateHistory;
- (void)setBlocksTransitionsOnInvalidation:(bool)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setSilentlyDropInvalidTransitions:(bool)arg1;
- (void)setTimer:(id)arg1;
- (bool)silentlyDropInvalidTransitions;
- (id)stateHistory;
- (id)timer;
- (id)timerQueue;
- (struct os_unfair_lock_s { unsigned int x1; })transitionLock;
- (bool)transitionToState:(id)arg1 withReason:(id)arg2;

@end

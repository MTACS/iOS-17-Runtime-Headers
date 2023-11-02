
@interface HMDHierarchicalStateMachine : HMFObject <HMFLogging> {
    bool  _allowSelfStateTransitions;
    CUStateMachine * _cuStateMachine;
    HMDHierarchicalStateMachineState * _currentHSMState;
    CUStateEvent * _eventCausingStateTransition;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) bool allowSelfStateTransitions;
@property (nonatomic, retain) CUStateMachine *cuStateMachine;
@property HMDHierarchicalStateMachineState *currentHSMState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CUStateEvent *eventCausingStateTransition;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDHierarchicalStateMachineState *initialState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)allowSelfStateTransitions;
- (id)cuStateMachine;
- (id)currentHSMState;
- (void)dispatchEvent:(id)arg1;
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2;
- (id)eventCausingStateTransition;
- (void)getCurrentHSMStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 allowSelfStateTransitions:(bool)arg2;
- (id)initialState;
- (void)invalidate;
- (id)queue;
- (void)setCuStateMachine:(id)arg1;
- (void)setCurrentHSMState:(id)arg1;
- (void)setEventCausingStateTransition:(id)arg1;
- (void)setHSMInternalCurrentState:(id)arg1;
- (void)setInitialState:(id)arg1;
- (void)setStates:(id)arg1;
- (void)start;
- (id)stateWithName:(id)arg1;
- (void)transitionToState:(id)arg1;
- (void)transitionToState:(id)arg1 withEvent:(id)arg2;

@end

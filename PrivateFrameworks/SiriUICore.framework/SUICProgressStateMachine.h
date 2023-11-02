
@interface SUICProgressStateMachine : NSObject {
    CUState * _abstractState;
    unsigned long long  _currentState;
    NSDictionary * _stateForStateName;
    NSPointerArray * _stateMachineObservers;
    CUStateMachine * _underlyingStateMachine;
}

@property (readonly) unsigned long long state;
@property (getter=_stateMachineObservers, setter=_setStateMachineObservers:, nonatomic, retain) NSPointerArray *stateMachineObservers;

- (void).cxx_destruct;
- (void)_ignoreEvent:(unsigned long long)arg1;
- (void)_setStateMachineObservers:(id)arg1;
- (id)_stateMachineObservers;
- (void)_transitionToState:(unsigned long long)arg1 forEvent:(unsigned long long)arg2;
- (void)addObserver:(id)arg1;
- (void)addObservers:(id)arg1;
- (void)dealloc;
- (void)handleEvent:(unsigned long long)arg1;
- (id)init;
- (void)setObservers:(id)arg1;
- (unsigned long long)state;

@end

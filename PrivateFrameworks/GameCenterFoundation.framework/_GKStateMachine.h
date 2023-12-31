
@interface _GKStateMachine : NSObject {
    NSString * _currentState;
    <_GKStateMachineDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _shouldLogStateTransitions;
    NSDictionary * _validTransitions;
}

@property (retain) NSString *currentState;
@property <_GKStateMachineDelegate> *delegate;
@property (nonatomic) bool shouldLogStateTransitions;
@property (retain) NSDictionary *validTransitions;

- (void).cxx_destruct;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (bool)_setCurrentState:(id)arg1;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (bool)applyState:(id)arg1;
- (id)currentState;
- (id)delegate;
- (id)init;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)setCurrentState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldLogStateTransitions:(bool)arg1;
- (void)setValidTransitions:(id)arg1;
- (bool)shouldLogStateTransitions;
- (id)validTransitions;

@end

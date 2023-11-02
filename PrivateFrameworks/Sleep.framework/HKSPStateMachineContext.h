
@interface HKSPStateMachineContext : NSObject {
    bool  _isInitializing;
    HKSPStateMachineState * _nextState;
    HKSPStateMachineState * _previousState;
}

@property (nonatomic, readonly) bool hasStateTransition;
@property (nonatomic, readonly) bool hasStateTransitionAndNotInitializing;
@property (nonatomic, readonly) bool hasStateTransitionOrInitializing;
@property (nonatomic) bool isInitializing;
@property (nonatomic, retain) HKSPStateMachineState *nextState;
@property (nonatomic, retain) HKSPStateMachineState *previousState;

- (void).cxx_destruct;
- (id)contextWithNextState:(id)arg1 previousState:(id)arg2 isInitializing:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasStateTransition;
- (bool)hasStateTransitionAndNotInitializing;
- (bool)hasStateTransitionOrInitializing;
- (id)initWithNextState:(id)arg1 previousState:(id)arg2 isInitializing:(bool)arg3;
- (bool)isInitializing;
- (id)nextState;
- (id)previousState;
- (void)setIsInitializing:(bool)arg1;
- (void)setNextState:(id)arg1;
- (void)setPreviousState:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

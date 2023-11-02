
@interface HKSPStateMachineState : NSObject <HKSPStateMachineEventHandler, NSCopying> {
    HKSPStateMachine * _stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCurrentState;
@property (nonatomic) HKSPStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didEnter;
- (void)_didExit;
- (void)_updateState;
- (bool)_willEnter;
- (void)_willExit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didEnter;
- (void)didExit;
- (id)equalsBuilderWithObject:(id)arg1;
- (id)initWithStateMachine:(id)arg1;
- (bool)isCurrentState;
- (bool)isEqual:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (id)stateIdentifier;
- (id)stateMachine;
- (id)stateName;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateState;
- (void)willEnter;
- (void)willExit;

@end

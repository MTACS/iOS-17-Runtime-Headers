
@interface MTStateMachineState : NSObject <MTStateMachineEventHandler> {
    MTStateMachine * _stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MTStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didEnterWithPreviousState:(id)arg1;
- (void)didExitWithNextState:(id)arg1;
- (id)initWithStateMachine:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (id)stateMachine;
- (void)willEnterWithPreviousState:(id)arg1;
- (void)willExitWithNextState:(id)arg1;

@end

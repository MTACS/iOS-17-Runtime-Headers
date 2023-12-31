
@interface GKState : NSObject {
    GKStateMachine * _stateMachine;
}

@property (nonatomic, readonly) GKStateMachine *stateMachine;

+ (id)state;

- (void).cxx_destruct;
- (void)_setStateMachine:(id)arg1;
- (void)didEnterWithPreviousState:(id)arg1;
- (id)init;
- (bool)isValidNextState:(Class)arg1;
- (id)stateMachine;
- (void)updateWithDeltaTime:(double)arg1;
- (void)willExitWithNextState:(id)arg1;

@end

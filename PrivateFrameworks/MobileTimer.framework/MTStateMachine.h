
@interface MTStateMachine : NSObject <MTStateMachineEventHandler> {
    MTStateMachineState * _currentState;
    <MTStateMachineDelegate> * _delegate;
    <MTStateMachineInfoProvider> * _infoProvider;
}

@property (nonatomic, retain) MTStateMachineState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MTStateMachineInfoProvider> *infoProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentState;
- (id)delegate;
- (id)description;
- (void)enterState:(id)arg1;
- (id)infoProvider;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (void)setCurrentState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfoProvider:(id)arg1;
- (id)stateMachineLog;
- (id)stateMachineName;

@end

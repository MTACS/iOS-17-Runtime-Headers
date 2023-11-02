
@interface HKSPStateMachine : NSObject <HKSPStateMachineDelegate, HKSPStateMachineEventHandler, HKSPStateMachineInfoProvider> {
    HKSPStateMachineState * _currentState;
    <HKSPStateMachineDelegate> * _delegate;
    <HKSPStateMachineInfoProvider> * _infoProvider;
    bool  _initialized;
}

@property (nonatomic, readonly) NSArray *allStates;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) HKSPStateMachineContext *currentContext;
@property (nonatomic, readonly) HKSPStateMachineState *currentState;
@property (nonatomic, readonly) NSString *currentStateIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HKSPStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HKSPStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) bool initialized;
@property (readonly) Class superclass;

+ (id)_contextKey;

- (void).cxx_destruct;
- (id)allStates;
- (id)currentContext;
- (id)currentState;
- (id)currentStateIdentifier;
- (id)delegate;
- (id)description;
- (void)enterState:(id)arg1;
- (id)infoProvider;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (bool)initialized;
- (unsigned long long)loggingCategory;
- (void)notifyDelegateWithBlock:(id /* block */)arg1;
- (void)perform:(id /* block */)arg1 withContext:(id)arg2;
- (void)setInitialState:(id)arg1;
- (id)stateMachineName;
- (void)updateState;

@end

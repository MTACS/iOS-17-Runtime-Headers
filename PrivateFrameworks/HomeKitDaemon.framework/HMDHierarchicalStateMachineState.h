
@interface HMDHierarchicalStateMachineState : CUState <HMFLogging> {
    HMDHierarchicalStateMachine * _hsm;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHierarchicalStateMachine *hsm;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (long long)_internalEventHandler:(id)arg1;
- (void)_registerForEventHandler;
- (void)handleEnterEvent:(id)arg1;
- (long long)handleEvent:(id)arg1;
- (void)handleExitEvent:(id)arg1;
- (id)hsm;
- (id)initWithName:(id)arg1 parent:(id)arg2;
- (void)onInitialTransition:(id)arg1;
- (void)setHsm:(id)arg1;

@end

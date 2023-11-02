
@interface RBPowerAssertionManager : NSObject <RBPowerAssertionManaging, RBStateCapturing> {
    unsigned long long  _assertionCount;
    RBProcessMap * _assertionMap;
    <RBPowerAssertionManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    RBProcessMap * _stateMap;
    RBSystemPowerAssertion * _systemAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RBPowerAssertionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_unitTest_hasPowerAssertionForProcess:(id)arg1;
- (bool)_unitTest_hasSystemPowerAssertion;
- (id)_unitTest_nameOfPowerAssertionForProcess:(id)arg1;
- (id)_unitTest_nameOfPowerAssertionForSystem;
- (void)addProcess:(id)arg1;
- (void)applySystemState:(id)arg1;
- (id)captureState;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (void)didUpdateProcessStates:(id)arg1;
- (id)init;
- (void)removeProcess:(id)arg1;
- (void)removeStateForProcessIdentity:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)stateCaptureTitle;

@end

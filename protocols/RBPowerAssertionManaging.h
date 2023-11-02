
@protocol RBPowerAssertionManaging <NSObject>

@required

- (bool)_unitTest_hasPowerAssertionForProcess:(RBProcess *)arg1;
- (bool)_unitTest_hasSystemPowerAssertion;
- (NSString *)_unitTest_nameOfPowerAssertionForProcess:(RBProcess *)arg1;
- (NSString *)_unitTest_nameOfPowerAssertionForSystem;
- (void)addProcess:(RBProcess *)arg1;
- (void)applySystemState:(RBSystemState *)arg1;
- (void)didUpdateProcessStates:(RBProcessStateChangeSet *)arg1;
- (void)removeProcess:(RBProcess *)arg1;
- (void)removeStateForProcessIdentity:(RBSProcessIdentity *)arg1;

@end

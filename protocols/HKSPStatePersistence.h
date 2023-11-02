
@protocol HKSPStatePersistence

@required

- (HKSPPersistentStateMachineState *)loadPersistentStateForIdentifier:(NSString *)arg1 allowedStates:(NSSet *)arg2 error:(id*)arg3;
- (bool)savePersistentState:(HKSPPersistentStateMachineState *)arg1 identifier:(NSString *)arg2 error:(id*)arg3;

@end

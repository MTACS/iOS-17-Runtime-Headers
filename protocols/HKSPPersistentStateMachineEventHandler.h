
@protocol HKSPPersistentStateMachineEventHandler <HKSPStateMachineEventHandler>

@required

- (void)stateWithIdentifierDidExpire:(NSString *)arg1;

@end

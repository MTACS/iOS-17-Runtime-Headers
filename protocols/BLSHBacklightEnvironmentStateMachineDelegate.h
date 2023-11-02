
@protocol BLSHBacklightEnvironmentStateMachineDelegate <NSObject>

@required

- (void)environmentStateMachine:(BLSHBacklightEnvironmentStateMachine *)arg1 didBeginUpdateToState:(long long)arg2;
- (void)environmentStateMachine:(BLSHBacklightEnvironmentStateMachine *)arg1 didCompleteUpdateToState:(long long)arg2;
- (void)environmentStateMachine:(BLSHBacklightEnvironmentStateMachine *)arg1 didUpdateToPresentation:(BLSHBacklightEnvironmentPresentation *)arg2;
- (void)environmentStateMachine:(BLSHBacklightEnvironmentStateMachine *)arg1 didUpdateToSpecifier:(BLSHPresentationDateSpecifier *)arg2;

@end

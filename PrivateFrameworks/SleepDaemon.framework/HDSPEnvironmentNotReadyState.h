
@interface HDSPEnvironmentNotReadyState : HDSPEnvironmentState

- (id)_nextSystemReadyState;
- (id)stateName;
- (void)systemDidBecomeReady;
- (void)updateState;

@end

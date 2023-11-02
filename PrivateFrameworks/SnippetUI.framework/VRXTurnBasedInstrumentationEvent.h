
@interface VRXTurnBasedInstrumentationEvent : VRXInstrumentationEvent

@property (nonatomic, readonly) bool requiresNewTurn;

- (void)emitWithTurnIdentifier:(id)arg1;
- (bool)requiresNewTurn;

@end

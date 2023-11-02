
@interface _CNUIUserActionTelephonyVoiceTarget : CNUIUserActionTarget

- (id)TTYCallActionWithDestinationID:(id)arg1 contactProperty:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)TTYRelayCallActionWithDestinationID:(id)arg1 contactProperty:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)init;
- (id)phoneCallActionWithDestinationID:(id)arg1 contactProperty:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)ttyActionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)ttyActionsFutureForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;

@end

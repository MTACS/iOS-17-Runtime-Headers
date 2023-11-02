
@interface HDMCUnconfirmedDeviationNotificationWaitingState : HDMCUnconfirmedDeviationNotificationStateMachineState

+ (id)notificationStateFromDictionaryRepresentation:(id)arg1;

- (id)computeNewStateFromMaxEnd:(long long)arg1 dismissalDayIndex:(id)arg2 scheduledFireDayIndex:(long long)arg3;
- (id)scheduledNotificationFireDayIndex;
- (long long)stateType;

@end


@interface HDMCUnconfirmedDeviationNotificationScheduledState : HDMCUnconfirmedDeviationNotificationStateMachineState

+ (id)notificationStateFromDictionaryRepresentation:(id)arg1;

- (id)computeFiredStateWithCurrentDayIndex:(long long)arg1;
- (id)computeNewStateFromMaxEnd:(long long)arg1 dismissalDayIndex:(id)arg2 scheduledFireDayIndex:(long long)arg3;
- (id)initWithFireDayIndex:(id)arg1;
- (id)scheduledNotificationFireDayIndex;
- (long long)stateType;

@end

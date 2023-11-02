
@interface HDMCOvulationConfirmationNotificationWaitingState : HDMCOvulationConfirmationNotificationStateMachineState {
    NSNumber * _notificationPreviouslyFiredDayIndex;
}

@property (nonatomic, readonly, copy) NSNumber *notificationPreviouslyFiredDayIndex;

+ (id)notificationStateFromDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)computeNewStateFromCorrelatingPeriodStartDayIndex:(long long)arg1 fertileWindowEndDayIndex:(long long)arg2 fireDayIndex:(long long)arg3 daysShiftedForFertileWindow:(long long)arg4 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)arg5;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firedDayIndex;
- (id)initWithFiredDayIndex:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)notificationPreviouslyFiredDayIndex;
- (long long)stateType;

@end

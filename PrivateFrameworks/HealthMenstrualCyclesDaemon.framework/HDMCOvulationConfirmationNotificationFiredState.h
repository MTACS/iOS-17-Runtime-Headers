
@interface HDMCOvulationConfirmationNotificationFiredState : HDMCOvulationConfirmationNotificationStateMachineState {
    long long  _fireDayIndex;
}

@property (nonatomic, readonly) long long fireDayIndex;

+ (id)notificationStateFromDictionaryRepresentation:(id)arg1;

- (id)computeNewStateFromCorrelatingPeriodStartDayIndex:(long long)arg1 fertileWindowEndDayIndex:(long long)arg2 fireDayIndex:(long long)arg3 daysShiftedForFertileWindow:(long long)arg4 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)arg5;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)fireDayIndex;
- (id)firedDayIndex;
- (id)initWithFireDayIndex:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)stateType;

@end

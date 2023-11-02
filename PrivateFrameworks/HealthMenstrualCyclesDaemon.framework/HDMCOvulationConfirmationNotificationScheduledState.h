
@interface HDMCOvulationConfirmationNotificationScheduledState : HDMCOvulationConfirmationNotificationStateMachineState {
    long long  _correlatingPeriodStartDayIndex;
    long long  _daysShiftedForFertileWindow;
    long long  _daysWithWristTemp45DaysBeforeOvulationConfirmed;
    long long  _fertileWindowEndDayIndex;
    long long  _fireDayIndex;
}

@property (nonatomic, readonly) long long correlatingPeriodStartDayIndex;
@property (nonatomic, readonly) long long daysShiftedForFertileWindow;
@property (nonatomic, readonly) long long daysWithWristTemp45DaysBeforeOvulationConfirmed;
@property (nonatomic, readonly) long long fertileWindowEndDayIndex;
@property (nonatomic, readonly) long long fireDayIndex;

+ (id)notificationStateFromDictionaryRepresentation:(id)arg1;

- (id)computeFiredStateWithCurrentDayIndex:(long long)arg1;
- (id)computeNewStateFromCorrelatingPeriodStartDayIndex:(long long)arg1 fertileWindowEndDayIndex:(long long)arg2 fireDayIndex:(long long)arg3 daysShiftedForFertileWindow:(long long)arg4 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)arg5;
- (long long)correlatingPeriodStartDayIndex;
- (long long)daysShiftedForFertileWindow;
- (long long)daysWithWristTemp45DaysBeforeOvulationConfirmed;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)fertileWindowEndDayIndex;
- (long long)fireDayIndex;
- (id)initWithFertileWindowEndDayIndex:(long long)arg1 fireDayIndex:(long long)arg2 correlatingPeriodStartDayIndex:(long long)arg3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)arg4 daysShiftedForFertileWindow:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)scheduledNotificationDaysShiftedForFertileWindow;
- (id)scheduledNotificationDaysWithWristTemp45DaysBeforeOvulationConfirmed;
- (id)scheduledNotificationFertileWindowEndDayIndex;
- (id)scheduledNotificationFireDayIndex;
- (long long)stateType;

@end

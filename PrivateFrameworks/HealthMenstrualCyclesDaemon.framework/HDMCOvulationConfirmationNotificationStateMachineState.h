
@interface HDMCOvulationConfirmationNotificationStateMachineState : NSObject

+ (id)stateFromDictionaryRepresentation:(id)arg1;

- (id)computeFiredStateWithCurrentDayIndex:(long long)arg1;
- (id)computeNewStateFromAnalysis:(id)arg1 currentDate:(id)arg2 fertileWindowNotificationTimeOfDay:(id)arg3 fertilityNotificationsEnabled:(bool)arg4 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)arg5;
- (id)computeNewStateFromCorrelatingPeriodStartDayIndex:(long long)arg1 fertileWindowEndDayIndex:(long long)arg2 fireDayIndex:(long long)arg3 daysShiftedForFertileWindow:(long long)arg4 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)arg5;
- (id)computeNewStateFromFertilityNotificationsEnabled:(bool)arg1 isOvulationConfirmed:(bool)arg2 correlatingPeriodStartDayIndex:(long long)arg3 fertileWindowEndDayIndex:(long long)arg4 fireDayIndex:(long long)arg5 daysShiftedForFertileWindow:(long long)arg6 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)arg7;
- (id)dictionaryRepresentation;
- (id)firedDayIndex;
- (id)hk_redactedDescription;
- (bool)isEqual:(id)arg1;
- (id)scheduledNotificationDaysShiftedForFertileWindow;
- (id)scheduledNotificationDaysWithWristTemp45DaysBeforeOvulationConfirmed;
- (id)scheduledNotificationFertileWindowEndDayIndex;
- (id)scheduledNotificationFireDayIndex;
- (long long)stateType;

@end

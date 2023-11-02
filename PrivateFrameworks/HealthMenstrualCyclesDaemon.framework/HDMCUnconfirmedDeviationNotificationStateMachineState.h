
@interface HDMCUnconfirmedDeviationNotificationStateMachineState : NSObject {
    NSNumber * _fireDayIndex;
}

@property (nonatomic, readonly, copy) NSNumber *fireDayIndex;

+ (id)stateFromDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)computeFiredStateWithCurrentDayIndex:(long long)arg1;
- (id)computeNewStateFromAnalysis:(id)arg1 dismissalDayIndex:(id)arg2 currentDate:(id)arg3 unconfirmedDeviationNotificationTimeOfDay:(id)arg4;
- (id)computeNewStateFromMaxEnd:(long long)arg1 dismissalDayIndex:(id)arg2 scheduledFireDayIndex:(long long)arg3;
- (id)computeNewStateFromUnconfirmedDeviations:(id)arg1 dismissalDayIndex:(id)arg2 scheduledFireDayIndex:(long long)arg3;
- (id)computeStateFromNoUnconfirmedDeviations;
- (id)dictionaryRepresentation;
- (id)fireDayIndex;
- (id)hk_redactedDescription;
- (id)initWithFireDayIndex:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)scheduledNotificationFireDayIndex;
- (long long)stateType;

@end

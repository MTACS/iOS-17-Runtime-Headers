
@interface HKSPSleepScheduleModel : NSObject <NAEquatable, NAHashable, NSCopying> {
    HKSPSleepEventRecord * _sleepEventRecord;
    HKSPSleepSchedule * _sleepSchedule;
    HKSPSleepSettings * _sleepSettings;
}

@property (nonatomic, readonly) bool chargingRemindersEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool goodMorningAlertNotificationEnabled;
@property (nonatomic, readonly) bool goodMorningScreenEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly, copy) HKSPSleepEventRecord *sleepEventRecord;
@property (nonatomic, readonly, copy) HKSPSleepSchedule *sleepSchedule;
@property (nonatomic, readonly, copy) HKSPSleepSettings *sleepSettings;
@property (readonly) Class superclass;

+ (id)_computeUpcomingDateIntervalForDate:(id)arg1;
+ (id)sleepScheduleModelWithSleepSchedule:(id)arg1 sleepSettings:(id)arg2 sleepEventRecord:(id)arg3;
+ (id)templateModelForSchedule:(id)arg1;

- (void).cxx_destruct;
- (id)_computeOriginalWakeUpForOverrideDateHelper:(id)arg1;
- (id)_timelineResultsDueAfterDate:(id)arg1;
- (id)_upcomingEventsDueAfterDate:(id)arg1 searchBackwards:(bool)arg2;
- (id)_upcomingResolvedOccurrencesDueAfterDate:(id)arg1 searchBackwards:(bool)arg2;
- (long long)alarmStatusForOccurrence:(id)arg1;
- (bool)chargingRemindersEnabled;
- (bool)chargingRemindersEnabledWithLogObject:(id)arg1;
- (id)computeConfirmedWakeUpUntilDateForEarlyWakeUpDate:(id)arg1;
- (id)computeConfirmedWakeUpUntilDateForOverrideWakeUpDate:(id)arg1;
- (id)computeTemplateGenerationDateForCurrentDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)generateOverrideOccurrenceForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)generateOverrideOccurrenceForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 schedule:(id)arg3;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)arg1;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 mutableOccurrence:(id)arg3;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 schedule:(id)arg3;
- (bool)goodMorningAlertNotificationEnabled;
- (bool)goodMorningAlertNotificationsEnabledWithLogObject:(id)arg1;
- (bool)goodMorningScreenEnabled;
- (bool)goodMorningScreenEnabledWithLogObject:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentTo:(id)arg1;
- (id)lastModifiedDate;
- (id)modelByApplyingChangesFromOccurrence:(id)arg1;
- (id)nextEventDueAfterDate:(id)arg1;
- (id)nextEventWithIdentifier:(id)arg1 dueAfterDate:(id)arg2;
- (id)nextOccurrenceAfterDate:(id)arg1;
- (id)nextOccurrenceInInterval:(id)arg1;
- (id)nextResolvedOccurrenceAfterDate:(id)arg1;
- (id)nextResolvedOccurrenceInInterval:(id)arg1;
- (id)overrideOccurrenceGenerationResultForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 schedule:(id)arg3;
- (id)previousEventWithIdentifier:(id)arg1 dueBeforeDate:(id)arg2;
- (id)previousEventsDueBeforeDate:(id)arg1;
- (id)previousOccurrenceBeforeDate:(id)arg1;
- (id)previousResolvedOccurrenceBeforeDate:(id)arg1;
- (id)sleepEventRecord;
- (id)sleepSchedule;
- (id)sleepSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)timelineForDate:(id)arg1;
- (id)upcomingEventsDueAfterDate:(id)arg1;
- (id)upcomingOccurrenceAfterDate:(id)arg1;
- (id)upcomingResolvedOccurrenceAfterDate:(id)arg1;

@end

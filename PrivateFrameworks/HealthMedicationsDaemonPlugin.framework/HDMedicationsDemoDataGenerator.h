
@interface HDMedicationsDemoDataGenerator : NSObject <HDDemoDataObjectGenerator> {
    NSCalendar * _currentCalendar;
    NSString * _demoDataFileName;
    HDProfile * _profile;
    HDMedicationsDemoDataGeneratorState * _state;
    bool  isGeneratingDataOnWatch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_keyValueDomain;
- (id)_makeStableIdentifierFromScheduledDateTime:(id)arg1;
- (bool)_saveStateWithError:(id*)arg1;
- (id)_scheduleItemsForDate:(id)arg1;
- (id)asNeededDoseEventsForMedication:(id)arg1 startDateTime:(id)arg2 historyDayCount:(unsigned long long)arg3;
- (id)dailyScheduleForMedicationIdentifier:(id)arg1 isAMSchedule:(bool)arg2;
- (id)dayBeforeDate:(id)arg1 withHour:(long long)arg2;
- (long long)dayDifferenceFrom:(id)arg1 to:(id)arg2;
- (id)doseEventWithLogOrigin:(long long)arg1 scheduleItemIdentifier:(id)arg2 medicationIdentifier:(id)arg3 scheduledDoseQuantity:(id)arg4 doseQuantity:(id)arg5 scheduledDate:(id)arg6 startDate:(id)arg7 status:(long long)arg8;
- (id)doseEventsForMedication:(id)arg1 startDateTime:(id)arg2 historyDayCount:(unsigned long long)arg3 logOrigin:(long long)arg4;
- (id)doseEventsForScheduleItems:(id)arg1 withStatus:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)generateDemoDataForCurrentDate:(id)arg1;
- (void)generateFirstRunObjectsForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateIntitialDemoDataIfRequired;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)loadDemoDataObjectsFrom:(id)arg1 medications:(id)arg2 schedules:(id)arg3 logHistory:(id)arg4;
- (id)medicationWithDetail:(id)arg1;
- (void)overrideMedicationShardCheck;
- (id)profile;
- (void)restoreState;
- (bool)saveMedicationDoseEvents:(id)arg1 error:(id*)arg2;
- (bool)saveMedications:(id)arg1 schedules:(id)arg2 logHistory:(id)arg3;
- (id)scheduledDoseEventsForMedication:(id)arg1 startDateTime:(id)arg2 historyDayCount:(unsigned long long)arg3;
- (id)scheduledDoseEventsWithCurrentDate:(id)arg1;
- (void)setDemoDataGenerationContextWithProfile:(id)arg1 generatorState:(id)arg2;
- (bool)setupOntologyContentIfRequired;
- (void)updateDemoDataFileName;

@end

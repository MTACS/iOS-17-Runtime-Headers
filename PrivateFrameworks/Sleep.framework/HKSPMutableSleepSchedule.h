
@interface HKSPMutableSleepSchedule : HKSPSleepSchedule <HKSPMutableObject> {
    HKSPChangeSet * _changeSet;
    <HKSPObject> * _originalObject;
}

@property (nonatomic, readonly) HKSPChangeSet *changeSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) HKSPSleepScheduleDayOccurrence *fridayOccurrence;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, retain) HKSPSleepScheduleDayOccurrence *mondayOccurrence;
@property (nonatomic, readonly) <HKSPObject> *originalObject;
@property (nonatomic, retain) HKSPSleepScheduleDayOccurrence *overrideDayOccurrence;
@property (nonatomic, retain) HKSPSleepScheduleDayOccurrence *saturdayOccurrence;
@property (nonatomic) double sleepDurationGoal;
@property (nonatomic, retain) HKSPSleepScheduleDayOccurrence *sundayOccurrence;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKSPSleepScheduleDayOccurrence *thursdayOccurrence;
@property (nonatomic, retain) HKSPSleepScheduleDayOccurrence *tuesdayOccurrence;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, retain) HKSPSleepScheduleDayOccurrence *wednesdayOccurrence;
@property (nonatomic) unsigned long long windDownMinutes;
@property (nonatomic) double windDownTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_freezeSavedOccurrence:(id)arg1;
- (bool)_hasChangeForDayOccurrenceKey:(id)arg1 dayOccurrence:(id)arg2;
- (bool)_hasChangeToScheduleEnabled;
- (void)_modifyDayOccurrencesForWeekdays:(unsigned long long)arg1 block:(id /* block */)arg2;
- (bool)_shouldRemoveOverrideOccurrence:(id)arg1;
- (void)_updateBackingOccurrencesForOccurrence:(id)arg1;
- (void)_updateOverrideOccurrenceForOccurrence:(id)arg1;
- (id)_updatedDayOccurrence:(id)arg1 withDayOccurrence:(id)arg2;
- (id)changeSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)freeze;
- (id)fridayOccurrence;
- (bool)hasChangeAffectingScheduling;
- (bool)hasChangeToSleepDurationGoal;
- (bool)hasChangeToWindDownTime;
- (bool)hasOverrideOccurrenceRemoval;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)lastModifiedDate;
- (id)lastOverrideOccurrenceWakeUpComponents;
- (id)mondayOccurrence;
- (id)mutableCopy;
- (id)originalObject;
- (id)overrideDayOccurrence;
- (void)removeOccurrence:(id)arg1;
- (void)revert;
- (id)saturdayOccurrence;
- (void)saveOccurrence:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFridayOccurrence:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setMondayOccurrence:(id)arg1;
- (void)setOverrideDayOccurrence:(id)arg1;
- (void)setSaturdayOccurrence:(id)arg1;
- (void)setSleepDurationGoal:(double)arg1;
- (void)setSundayOccurrence:(id)arg1;
- (void)setThursdayOccurrence:(id)arg1;
- (void)setTuesdayOccurrence:(id)arg1;
- (void)setWednesdayOccurrence:(id)arg1;
- (void)setWindDownMinutes:(unsigned long long)arg1;
- (void)setWindDownTime:(double)arg1;
- (double)sleepDurationGoal;
- (id)sundayOccurrence;
- (id)thursdayOccurrence;
- (id)tuesdayOccurrence;
- (id)wednesdayOccurrence;
- (double)windDownTime;

@end

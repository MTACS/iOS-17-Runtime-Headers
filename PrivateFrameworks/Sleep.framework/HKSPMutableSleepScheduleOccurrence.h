
@interface HKSPMutableSleepScheduleOccurrence : HKSPSleepScheduleOccurrence <HKSPMutableObject> {
    HKSPChangeSet * _changeSet;
    <HKSPObject> * _originalObject;
}

@property (nonatomic, retain) HKSPAlarmConfiguration *alarmConfiguration;
@property (nonatomic, retain) HKSPSleepScheduleDayOccurrence *backingOccurrence;
@property (nonatomic, copy) NSDateComponents *bedtimeComponents;
@property (nonatomic, readonly) HKSPChangeSet *changeSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) <HKSPObject> *originalObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, copy) NSDateComponents *wakeUpComponents;
@property (nonatomic) unsigned long long weekdays;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarmConfiguration;
- (void)applyHourAndMinuteFromBedtimeComponents:(id)arg1 wakeUpComponents:(id)arg2 gregorianCalendar:(id)arg3;
- (id)backingOccurrence;
- (id)changeSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)freeze;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplateOccurrence:(id)arg1;
- (id)mutableCopy;
- (id)originalObject;
- (void)revert;
- (void)setAlarmConfiguration:(id)arg1;
- (void)setBackingOccurrence:(id)arg1;
- (void)setBedtimeComponents:(id)arg1;
- (void)setWakeUpComponents:(id)arg1;
- (void)setWeekdays:(unsigned long long)arg1;
- (void)turnOffAlarm;
- (void)turnOffWeekdays:(unsigned long long)arg1;
- (void)turnOnAlarm;
- (void)turnOnWeekdays:(unsigned long long)arg1;
- (unsigned long long)weekdays;

@end

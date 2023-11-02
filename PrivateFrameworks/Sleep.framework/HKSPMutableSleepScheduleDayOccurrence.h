
@interface HKSPMutableSleepScheduleDayOccurrence : HKSPSleepScheduleDayOccurrence <HKSPMutableObject> {
    HKSPChangeSet * _changeSet;
    <HKSPObject> * _originalObject;
}

@property (nonatomic, retain) HKSPAlarmConfiguration *alarmConfiguration;
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

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarmConfiguration;
- (id)bedtimeComponents;
- (id)changeSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)freeze;
- (id)generateSleepScheduleOccurrenceWithWeekdays:(unsigned long long)arg1;
- (bool)hasChangeAffectingScheduling;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopy;
- (id)originalObject;
- (void)revert;
- (void)setAlarmConfiguration:(id)arg1;
- (void)setBedtimeComponents:(id)arg1;
- (void)setWakeUpComponents:(id)arg1;
- (id)wakeUpComponents;

@end

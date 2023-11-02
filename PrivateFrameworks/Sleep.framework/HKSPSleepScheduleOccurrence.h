
@interface HKSPSleepScheduleOccurrence : NSObject <BSDescriptionProviding, HKSPDictionarySerializable, HKSPObject, NAEquatable, NAHashable, NSMutableCopying> {
    HKSPSleepScheduleDayOccurrence * _backingOccurrence;
    unsigned long long  _version;
    unsigned long long  _weekdays;
}

@property (nonatomic, readonly) HKSPAlarmConfiguration *alarmConfiguration;
@property (nonatomic, readonly) HKSPSleepScheduleDayOccurrence *backingOccurrence;
@property (nonatomic, readonly, copy) NSDateComponents *bedtimeComponents;
@property (nonatomic, readonly) bool crossesDayBoundary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInitialized;
@property (nonatomic, readonly) bool isRepeating;
@property (nonatomic, readonly) bool isSingleDayOverride;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesDefaultBedtimeAndWakeUpComponents;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly, copy) NSDateComponents *wakeUpComponents;
@property (nonatomic, readonly) unsigned long long weekdays;

+ (id)allProperties;
+ (id)occurrenceWithWeekdays:(unsigned long long)arg1 backingOccurrence:(id)arg2;
+ (id)propertiesForEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)actualSleepInterval;
- (id)alarmConfiguration;
- (id)backingOccurrence;
- (id)bedtimeComponents;
- (id)bedtimeDateForWakeUpDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)changesFromOccurrence:(id)arg1;
- (id)convertToScheduledOccurrenceOnSameDaysAsOccurrence:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)crossesDayBoundary;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)generalSleepInterval;
- (unsigned long long)hash;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAlarmEquivalentToOverrideOccurrence:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentTo:(id)arg1;
- (bool)isEquivalentToOverrideOccurrence:(id)arg1;
- (bool)isInitialized;
- (bool)isRepeating;
- (bool)isSingleDayOverride;
- (bool)isValidOccurrence;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nextDateIntervalWithWakeUpAfterDate:(id)arg1 gregorianCalendar:(id)arg2;
- (bool)overrideAppliesToOccurrence:(id)arg1 gregorianCalendar:(id)arg2;
- (long long)overrideDayInCalendar:(id)arg1;
- (id)overrideOccurrenceTemplateForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)overrideOccurrenceWithWakeUpComponents:(id)arg1 bedtimeComponents:(id)arg2;
- (bool)overridesWakeUpForOccurrenceOnDate:(id)arg1 gregorianCalendar:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)usesDefaultBedtimeAndWakeUpComponents;
- (unsigned long long)version;
- (id)wakeUpComponents;
- (id)wakeUpDateForDate:(id)arg1 day:(long long)arg2 searchBackwards:(bool)arg3 gregorianCalendar:(id)arg4;
- (id)wakeUpDateForDate:(id)arg1 searchBackwards:(bool)arg2 gregorianCalendar:(id)arg3;
- (unsigned long long)weekdays;

@end

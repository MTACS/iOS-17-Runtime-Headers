
@interface HKSleepSchedule : HKSample <HDCoding, NSCopying, NSSecureCoding> {
    NSDateComponents * _bedTimeComponents;
    NSNumber * _overrideDayIndex;
    NSDateComponents * _wakeTimeComponents;
    unsigned long long  _weekdays;
}

@property (setter=_setBedTimeComponents:, nonatomic, copy) NSDateComponents *bedTimeComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hk_localizedBedtime;
@property (nonatomic, readonly) NSString *hk_localizedScheduledSleepDuration;
@property (nonatomic, readonly) NSString *hk_localizedWakeTime;
@property (nonatomic, readonly) NSString *hk_localizedWeekdaysList;
@property (setter=_setOverrideDayIndex:, nonatomic, copy) NSNumber *overrideDayIndex;
@property (readonly) Class superclass;
@property (setter=_setWakeTimeComponents:, nonatomic, copy) NSDateComponents *wakeTimeComponents;
@property (setter=_setWeekdays:, nonatomic) unsigned long long weekdays;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_sleepScheduleWithDate:(id)arg1 weekdays:(unsigned long long)arg2 wakeTimeComponents:(id)arg3 bedTimeComponents:(id)arg4 overrideDayIndex:(id)arg5 device:(id)arg6 metadata:(id)arg7 config:(id /* block */)arg8;
+ (id)sleepScheduleWithDate:(id)arg1 weekdays:(unsigned long long)arg2 wakeTimeComponents:(id)arg3 bedTimeComponents:(id)arg4 overrideDayIndex:(id)arg5 device:(id)arg6 metadata:(id)arg7;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setBedTimeComponents:(id)arg1;
- (void)_setOverrideDayIndex:(id)arg1;
- (void)_setWakeTimeComponents:(id)arg1;
- (void)_setWeekdays:(unsigned long long)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)bedTimeComponents;
- (id)bedtimeDateIntervalForMorningIndex:(long long)arg1 calendar:(id)arg2;
- (id)bedtimeDateIntervalForWakeTime:(id)arg1 calendar:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEquivalentOverrideDayToSleepSchedule:(id)arg1;
- (bool)hasEquivalentTimesToSleepSchedule:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)overrideDayIndex;
- (id)wakeDateComponentsForMorningIndex:(long long)arg1 calendar:(id)arg2;
- (id)wakeTimeComponents;
- (unsigned long long)weekdays;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)addDetailValuesToSection:(id)arg1;
- (id)hk_localizedBedtime;
- (id)hk_localizedScheduledSleepDuration;
- (id)hk_localizedWakeTime;
- (id)hk_localizedWeekdaysList;
- (id)hk_localizedWeekdaysListWithGregorianCalendar:(id)arg1 standaloneFormatter:(id)arg2 listItemFormatter:(id)arg3;

@end

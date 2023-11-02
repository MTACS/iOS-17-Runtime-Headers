
@interface HKMedicationsTimeZone : NSObject

+ (id)_medicationDefaults;
+ (bool)_timeZoneDidChangeWithLocalTimeZone:(id)arg1;
+ (bool)didChange;
+ (id)lastChangeEndOfDay;
+ (long long)secondsAheadOfPreviousTimeZoneForTimeZone:(id)arg1;
+ (void)updateLastChangeInfoWithDate:(id)arg1 fromTimeZoneName:(id)arg2;
+ (void)updateSystemTimeZoneName;

@end

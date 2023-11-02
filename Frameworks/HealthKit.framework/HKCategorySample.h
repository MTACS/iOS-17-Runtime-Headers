
@interface HKCategorySample : HKSample <HDCoding> {
    long long  _value;
}

@property (readonly) HKCategoryType *categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) long long value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_categorySamplesSplittingDurationWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (bool)_isConcreteObjectClass;
+ (id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void)_setValue:(long long)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)_valueDescription;
- (id)categoryType;
- (void)encodeWithCoder:(id)arg1;
- (long long)hk_integerValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (long long)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)categorySampleWithType:(id)arg1 value:(long long)arg2 clampedInterval:(id)arg3;
+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthHearing.framework/HealthHearing

- (id)hk_hearingSevenDayDosePercentageWithError:(id*)arg1;
- (bool)hk_isHearingSevenDayDoseNotification;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_categorySampleWithCervicalMucusQuality:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithCycleFactor:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)hkmc_categorySampleWithMenstrualFlow:(long long)arg1 date:(id)arg2 startOfCycle:(bool)arg3;
+ (id)hkmc_categorySampleWithMenstrualSymptom:(unsigned long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithOvulationTestResult:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithPregnancyTestResult:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithProgesteroneTestResult:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithSexualActivity:(long long)arg1 date:(id)arg2;
+ (id)hkmc_intermenstrualBleedingCategorySampleWithDate:(id)arg1;

- (long long)hkmc_cycleFactor;
- (long long)hkmc_daySummaryCervicalMucusQuality;
- (long long)hkmc_daySummaryMenstrualFlow;
- (long long)hkmc_daySummaryOvulationTestResult;
- (long long)hkmc_daySummaryPregnancyTestResult;
- (long long)hkmc_daySummaryProgesteroneTestResult;
- (long long)hkmc_daySummarySexualActivity;
- (unsigned long long)hkmc_daySummarySymptom;
- (long long)hkmc_deviationType;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (bool)sleep_belongsInBucket:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)_addDefaultCategoryDetailValuesToSection:(id)arg1;
- (void)_addHeartEventDetailValuesToSection:(id)arg1;
- (void)_addWalkingSteadinessEventDetailValuesToSection:(id)arg1;
- (void)addDetailValuesToSection:(id)arg1;
- (id)dataProviderValue;

// Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon

+ (id)hdsp_categorySampleForSleepSessionInterval:(id)arg1 metadata:(id)arg2;

@end

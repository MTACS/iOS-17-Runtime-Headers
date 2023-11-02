
@interface HKSample : HKObject <HDCoding, HDDistinctableObject, HKDataMetadataObject, NSCopying, _HKDateBounded> {
    double  _endTimestamp;
    HKSampleType * _sampleType;
    double  _startTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *endDate;
@property (getter=_endTimestamp, setter=_setEndTimestamp:, nonatomic) double endTimestamp;
@property (readonly) bool hasUndeterminedDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (readonly, copy) HKSampleType *sampleType;
@property (readonly) NSDate *startDate;
@property (getter=_startTimestamp, setter=_setStartTimestamp:, nonatomic) double startTimestamp;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_enumerateValidIntervalsWithStartDate:(id)arg1 endDate:(id)arg2 sampleType:(id)arg3 block:(id /* block */)arg4;
+ (id)_newSampleFromDatesWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 config:(id /* block */)arg6;
+ (id)_newSampleWithType:(id)arg1 startDate:(double)arg2 endDate:(double)arg3 device:(id)arg4 metadata:(id)arg5 config:(id /* block */)arg6;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_endTimestamp;
- (void)_enumerateTimePeriodsWithBlock:(id /* block */)arg1;
- (long long)_externalSyncObjectCode;
- (id)_init;
- (bool)_requiresPrivateEntitlementForQueries;
- (void)_setEndDate:(id)arg1;
- (void)_setEndTimestamp:(double)arg1;
- (void)_setSampleType:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setStartTimestamp:(double)arg1;
- (void)_setType:(id)arg1;
- (double)_startTimestamp;
- (id)_timeZone;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)asJSONObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (bool)hasUndeterminedDuration;
- (struct { long long x1; long long x2; })hk_dayIndexRangeWithCalendar:(id)arg1;
- (struct { long long x1; long long x2; })hk_morningIndexRangeWithCalendarWithCalendar:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)sampleType;
- (id)startDate;
- (id)valueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness

- (bool)fi_isAfterDate:(id)arg1;
- (bool)fi_isBeforeDate:(id)arg1;
- (bool)fi_overlapsStartDate:(id)arg1 endDate:(id)arg2;
- (bool)fi_spansDate:(id)arg1 useStrictDateLimits:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (id)fiui_dateInterval;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (id)hd_sampleTypesForObjects:(id)arg1;
+ (bool)supportsDistinctByKeyPath:(id)arg1;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (long long)entityType;
- (id)hd_associatedSampleTypes;
- (id)hd_sampleType;
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_defaultMetadata;

- (bool)hkmc_isCycleFactorSample;
- (bool)hkmc_isNotPresentSymptom;
- (bool)hkmc_isSleepDependentSample;
- (bool)hkmc_wasEnteredFromCycleTracking;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

- (id)asSignedClinicalDataItem;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (id)displayString;
- (id)quantitySampleForType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)createWithCodableChartData:(id)arg1;
+ (id)createWithCodableNotificationSample:(id)arg1;

- (void)addDetailValuesToSection:(id)arg1;
- (id)codableSampleChartData;
- (id)dataForSharingWithHealthStore:(id)arg1;
- (id)dataProviderValue;
- (id)detailedReportName;
- (double)duration;
- (void)fetchSubSampleTypesWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
- (id)fixedAggregateValuesWithDisplayTypeController:(id)arg1 unitController:(id)arg2;
- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 subsampleDelegate:(id)arg4;
- (id)subSamplePredicate;
- (id)subSampleSectionTitle;

// Image: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon

- (id)aFibBurden_dateForAFibBurdenClassification;

@end

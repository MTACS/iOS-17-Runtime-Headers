
@interface HKQuantitySample : HKSample <HDCoding, HDWorkoutQuantity> {
    HDCodableQuantitySample * _codableQuantitySample;
    long long  _count;
    long long  _freezeState;
    HKQuantity * _quantity;
}

@property (setter=_setCodableQuantitySample:, nonatomic, retain) HDCodableQuantitySample *codableQuantitySample;
@property (readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_frozen, setter=_setFrozen:, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDateInterval *hdw_dateInterval;
@property (nonatomic, readonly) double hdw_endTimestamp;
@property (nonatomic, readonly) HKQuantity *hdw_quantity;
@property (nonatomic, readonly) HKQuantitySample *hdw_sample;
@property (nonatomic, readonly) double hdw_startTimestamp;
@property (nonatomic, readonly) HKQuantityType *hdw_type;
@property (readonly, copy) HKQuantity *quantity;
@property (readonly, copy) HKQuantityType *quantityType;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_quantitySamplesEnforcingDurationWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)_unfrozenQuantitySampleWithQuantityType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 device:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareFreezeStateWithSample:(id)arg1;
- (bool)_frozen;
- (id)_init;
- (void)_setCodableQuantitySample:(id)arg1;
- (void)_setCount:(long long)arg1;
- (void)_setFreezing;
- (void)_setFrozen:(bool)arg1;
- (void)_setQuantity:(id)arg1;
- (bool)_shouldNotifyOnInsert;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)_valueDescription;
- (id)asJSONObject;
- (id)codableQuantitySample;
- (long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)quantity;
- (id)quantityType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
+ (id)migrateCodableObject:(id)arg1;
+ (bool)supportsDistinctByKeyPath:(id)arg1;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (id)hdw_dateInterval;
- (double)hdw_endTimestamp;
- (id)hdw_quantity;
- (id)hdw_sample;
- (double)hdw_startTimestamp;
- (id)hdw_type;
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthHearing.framework/HealthHearing

- (bool)hk_canTriggerHeadphoneExposureNotification;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_quantitySampleWithBasalBodyTemperature:(id)arg1 date:(id)arg2;
+ (id)hkmc_quantitySampleWithWristTemperature:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (id)quantitySampleForType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (bool)_shouldOmitUnitsInSampleDetailViewForDisplayType:(id)arg1;
- (id)_titleStringForValueSectionWithDisplayType:(id)arg1;
- (void)addDetailValuesToSection:(id)arg1;
- (id)dataProviderValue;
- (id)detailFooter;
- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 subsampleDelegate:(id)arg4;

@end


@interface HKSampleType : HKObjectType

@property (nonatomic, readonly) bool allowsRecalibrationForEstimates;
@property (nonatomic, readonly) bool isMaximumDurationRestricted;
@property (nonatomic, readonly) bool isMinimumDurationRestricted;
@property (nonatomic, readonly) double maximumAllowedDuration;
@property (nonatomic, readonly) double minimumAllowedDuration;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_sampleTypeWithCode:(long long)arg1;
+ (id)medicalRecordTypes;
+ (id)medicalRecordTypesWithOptions:(unsigned long long)arg1;

- (id)_earliestAllowedStartDateForSampleOverlappingDate:(id)arg1;
- (id)_rollingBaselineConfiguration;
- (bool)_supportsRelativeDataCalculation;
- (id)_unitForChangeInCanonicalUnit;
- (bool)_validateStartDate:(double)arg1 endDate:(double)arg2 error:(id*)arg3;
- (bool)allowsRecalibrationForEstimates;
- (bool)canAttachFileOfType:(id)arg1 size:(unsigned long long)arg2 error:(id*)arg3;
- (bool)hk_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3;
- (bool)isMaximumDurationRestricted;
- (bool)isMinimumDurationRestricted;
- (double)maximumAllowedDuration;
- (double)minimumAllowedDuration;
- (bool)supportsAttachments;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (long long)attachmentSchemaVersion;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (bool)hkmc_requiresMultipleReplaceConfirmation;

// Image: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth

+ (id)hkrp_heartRateType;
+ (id)hkrp_oxygenSaturationType;

@end

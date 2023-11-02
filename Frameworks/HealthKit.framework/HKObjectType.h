
@interface HKObjectType : NSObject <NSCopying, NSSecureCoding> {
    short  _code;
    HKObjectType * _parentType;
}

@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) Class dataObjectClass;
@property (getter=_definition, nonatomic, readonly) struct { id x1; id x2; id x3; id x4; id x5; short x6; BOOL x7; unsigned char x8; }*definition;
@property (nonatomic, readonly) bool enabled;
@property (readonly) NSString *identifier;
@property (nonatomic, readonly) bool isClinicalType;
@property (nonatomic, retain) HKObjectType *parentType;
@property (nonatomic, readonly) bool readingAuthorizationAllowed;
@property (nonatomic, readonly) bool sharingAuthorizationAllowed;
@property (nonatomic, readonly) bool supportsExport;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)GAD7AssessmentType;
+ (id)PHQ9AssessmentType;
+ (id)_allBinarySampleTypes;
+ (id)_allDataTypeIdentifiers;
+ (id)_allScoredAssessmentTypes;
+ (id)_allTypesOfClass:(Class)arg1;
+ (bool)_allowAuthorizationForReadingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (bool)_allowAuthorizationForSharing:(bool)arg1 types:(id)arg2 entitlements:(id)arg3 disallowedTypes:(id)arg4;
+ (bool)_allowAuthorizationForSharingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (id)_clinicalTypesFromTypes:(id)arg1;
+ (id)_dataTypeWithCode:(long long)arg1 expectedClass:(Class)arg2;
+ (void)_enumerateDataTypeCodesWithHandler:(id /* block */)arg1;
+ (void)_enumerateObjectTypesWithHandler:(id /* block */)arg1;
+ (id)_lock_dataTypeWithCode:(long long)arg1 expectedClass:(Class)arg2;
+ (id)_nonClinicalTypesFromTypes:(id)arg1;
+ (id)_objectTypesFromIdentifierArray:(id)arg1 error:(id*)arg2;
+ (long long)_typeCodeForIdentifier:(id)arg1;
+ (id)_typeWithIdentifier:(id)arg1;
+ (id)_typeWithIdentifier:(id)arg1 expectedClass:(Class)arg2;
+ (id)_typesIncludingParentTypes:(id)arg1;
+ (id)accountOwnerTypeForIdentifier:(id)arg1;
+ (id)activityCacheType;
+ (id)activityMoveModeChangeType;
+ (id)activitySummaryType;
+ (id)allergyRecordTypeForIdentifier:(id)arg1;
+ (id)atrialFibrillationEventType;
+ (id)audiogramSampleType;
+ (id)bradycardiaType;
+ (id)briskMinuteDataType;
+ (id)calorieGoal;
+ (id)categoryTypeForIdentifier:(id)arg1;
+ (id)characteristicTypeForIdentifier:(id)arg1;
+ (id)clinicalNoteRecordTypeForIdentifier:(id)arg1;
+ (id)clinicalTypeForIdentifier:(id)arg1;
+ (id)coachingEventType;
+ (id)conditionRecordTypeForIdentifier:(id)arg1;
+ (id)contraceptiveType;
+ (id)correlationTypeForIdentifier:(id)arg1;
+ (id)coverageRecordTypeForIdentifier:(id)arg1;
+ (id)dataTypeWithCode:(long long)arg1;
+ (id)dataTypeWithNumber:(id)arg1;
+ (id)deepBreathingSessionType;
+ (id)diagnosticTestReportTypeForIdentifier:(id)arg1;
+ (id)diagnosticTestResultTypeForIdentifier:(id)arg1;
+ (id)documentTypeForIdentifier:(id)arg1;
+ (id)electrocardiogramType;
+ (id)environmentalAudioExposureEventType;
+ (id)exerciseGoal;
+ (id)fitnessFriendAchievementType;
+ (id)fitnessFriendActivitySnapshotType;
+ (id)fitnessFriendWorkoutType;
+ (id)handwashingEventType;
+ (id)headphoneAudioExposureEventType;
+ (id)heartRateType;
+ (id)heartStudyEventType;
+ (id)irregularlyIrregularPulseType;
+ (id)lactationType;
+ (id)lowCardioFitnessEventType;
+ (id)medicalTypeForIdentifier:(id)arg1;
+ (id)medicationDispenseRecordTypeForIdentifier:(id)arg1;
+ (id)medicationDoseEventTypeForIdentifier:(id)arg1;
+ (id)medicationOrderTypeForIdentifier:(id)arg1;
+ (id)medicationRecordTypeForIdentifier:(id)arg1;
+ (id)menstrualFlowType;
+ (id)moveMinuteGoal;
+ (id)objectTypeForWorkoutMetric:(unsigned long long)arg1 fitnessMachineType:(unsigned long long)arg2;
+ (id)pregnancyType;
+ (id)procedureRecordTypeForIdentifier:(id)arg1;
+ (id)quantityTypeForIdentifier:(id)arg1;
+ (id)seriesTypeForIdentifier:(id)arg1;
+ (id)signedClinicalDataRecordTypeForIdentifier:(id)arg1;
+ (id)sleepDurationGoalType;
+ (id)sleepScheduleType;
+ (id)standGoal;
+ (id)stateOfMindType;
+ (bool)supportsSecureCoding;
+ (id)tachycardiaType;
+ (id)unknownRecordTypeForIdentifier:(id)arg1;
+ (id)userTrackedConceptTypeForIdentifier:(id)arg1;
+ (id)vaccinationRecordTypeForIdentifier:(id)arg1;
+ (id)verifiableClinicalRecordTypeForIdentifier:(id)arg1;
+ (id)visionPrescriptionType;
+ (id)watchActivationType;
+ (id)workoutType;
+ (id)workoutZonesTypeForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (struct { id x1; id x2; id x3; id x4; id x5; short x6; BOOL x7; unsigned char x8; }*)_definition;
- (id)_initWithCode:(long long)arg1;
- (id)_predicateForSDKVersion:(unsigned int)arg1;
- (id)attachmentSchemaIdentifier;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)dataObjectClass;
- (id)description;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hk_localizedName;
- (id)hk_localizedNameForAuthSheet;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isClinicalType;
- (bool)isEqual:(id)arg1;
- (bool)isHealthRecordsType;
- (id)parentType;
- (bool)readingAuthorizationAllowed;
- (bool)requiresPerObjectAuthorization;
- (void)setParentType:(id)arg1;
- (bool)sharingAuthorizationAllowed;
- (bool)supportsExport;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (long long)clampedBackgroundObservationFrequency:(long long)arg1 isAppleWatch:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)_hk_formatMetadataValueForMetadataKey:(id)arg1 object:(id)arg2 unitPreferenceController:(id)arg3;
- (long long)associatedSampleAggregationStyle;
- (id)hk_formatMetadataValue:(id)arg1 displayType:(id)arg2 unitPreferencesController:(id)arg3;
- (id)hk_formatPrimaryMetadataValueForObject:(id)arg1 unitPreferencesController:(id)arg2;
- (id)hk_formatSecondaryMetadataValueForObject:(id)arg1 unitPreferencesController:(id)arg2;
- (id)hk_metadataValueDisplayTypeInStore:(id)arg1;
- (id)hk_numberFormatterForUnit:(id)arg1 decimalPrecisionRule:(id)arg2;
- (id)hk_numberFormatterForUnit:(id)arg1 decimalPrecisionRule:(id)arg2 formattingContext:(long long)arg3;
- (id)hk_primaryMetadataKey;
- (id)hk_secondaryMetadataKey;
- (Class)hk_valueFormatterClass;
- (Class)hk_valueFormatterClassForUnit:(id)arg1;

@end

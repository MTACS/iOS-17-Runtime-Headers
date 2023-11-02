
@interface HKMetadataValidationUtilities : NSObject

+ (bool)hk_validateActivityMoveModeMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateAppleECGAlgorithmValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateAppleHeartbeatSeriesAlgorithmVersionMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateAppleIrregularRhythmNotificationsAlgorithmVersionMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateBodyTemperatureSensorLocationMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateCoreMotionSourceIdentifierMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateCyclingFTPTestTypeMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateDevicePlacementSideValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateDigitalSignatureMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateHeartRateRecoveryActivityTypeMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateHeartRateRecoveryTestTypeMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateHeartRateSensorLocationMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateInsulinDeliveryReasonMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateMealTimeMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateMetadataValueClass:(id)arg1 forKey:(id)arg2 expectedClassLookupTable:(id)arg3 error:(id*)arg4;
+ (bool)hk_validatePhysicalEffortEstimationTypeMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateQuantityMetadataValue:(id)arg1 value:(id)arg2 compatibleUnit:(id)arg3 error:(id*)arg4;
+ (bool)hk_validateSwimmingLocationTypeMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateSwimmingStrokeStyleMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateSyncIdentifierMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateSyncVersionMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateTimeZoneMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateUserMotionContextMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateVO2MaxTestTypeMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateWaterSalinityMetadataValue:(id)arg1 error:(id*)arg2;
+ (bool)hk_validateWeatherConditionMetadataValue:(id)arg1 error:(id*)arg2;

@end

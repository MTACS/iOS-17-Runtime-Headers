
@interface WFHealthKitHelper : NSObject

+ (id)boolFromReadableMenstrualFlowIsStartOfCycle:(id)arg1;
+ (id)boolFromReadableSexualActivity:(id)arg1;
+ (id)characteristicTypeIdentifierFromReadableTypeIdentifier:(id)arg1;
+ (long long)enumFromReadableAppleStandingHour:(id)arg1;
+ (long long)enumFromReadableBloodGlucoseMealTime:(id)arg1;
+ (long long)enumFromReadableCervicalMucusQuality:(id)arg1;
+ (long long)enumFromReadableInsulinDeliveryReason:(id)arg1;
+ (long long)enumFromReadableMenstrualFlow:(id)arg1;
+ (long long)enumFromReadableOvulationTestResult:(id)arg1;
+ (long long)enumFromReadableSleepAnalysis:(id)arg1;
+ (long long)enumFromReadableVO2MaxTestType:(id)arg1;
+ (id)extractHKDataFromContentQuery:(id)arg1;
+ (id)localizedDisplayNameForUnit:(id)arg1 quantityTypeIdentifier:(id)arg2;
+ (id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2;
+ (id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2 quantityTypeIdentifier:(id)arg3;
+ (id)localizedSampleTypes;
+ (id)readableAppetiteChangesValueFromEnum:(long long)arg1;
+ (id)readableAppleStandingHourFromEnum:(long long)arg1;
+ (id)readableAppleStandingHourValues;
+ (id)readableBiologicalSexFromEnum:(long long)arg1;
+ (id)readableBloodGlucoseMealTimeFromEnum:(long long)arg1;
+ (id)readableBloodGlucoseMealTimeValues;
+ (id)readableBloodTypeFromEnum:(long long)arg1;
+ (id)readableCervicalMucusQualityFromEnum:(long long)arg1;
+ (id)readableCervicalMucusQualityValues;
+ (id)readableCharacteristicTypes;
+ (id)readableInsulinDeliveryReasonFromEnum:(long long)arg1;
+ (id)readableInsulinDeliveryReasonValues;
+ (id)readableMenstrualFlowFromEnum:(long long)arg1;
+ (id)readableMenstrualFlowIsStartOfCycleFromBool:(bool)arg1;
+ (id)readableMenstrualFlowIsStartOfCycleValues;
+ (id)readableMenstrualFlowValues;
+ (id)readableOvulationTestResultFromEnum:(long long)arg1;
+ (id)readableOvulationTestResultValues;
+ (id)readablePresenceValueFromEnum:(long long)arg1;
+ (id)readableSampleTypeIdentifierFromSampleTypeIdentifier:(id)arg1;
+ (id)readableSampleTypes;
+ (id)readableSeverityValueFromEnum:(long long)arg1;
+ (id)readableSexualActivityFromBool:(bool)arg1;
+ (id)readableSexualActivityValues;
+ (id)readableSleepAnalysisFromEnum:(long long)arg1;
+ (id)readableSleepAnalysisValues;
+ (id)readableTypeIdentifierFromCharacteristicTypeIdentifier:(id)arg1;
+ (id)readableVO2MaxTestTypeFromEnum:(long long)arg1;
+ (id)readableVO2MaxTestTypeValues;
+ (id)readableWorkoutActivityTypeFromWorkoutActivityType:(unsigned long long)arg1;
+ (bool)readableWorkoutActivityTypeIsValid:(id)arg1;
+ (id)readableWorkoutActivityTypes;
+ (id)sampleTypeIdentifierFromReadableTypeIdentifier:(id)arg1;
+ (void)sourcesForSampleType:(id)arg1 completion:(id /* block */)arg2;
+ (void)sourcesWithName:(id)arg1 ofSampleType:(id)arg2 completion:(id /* block */)arg3;
+ (void)validUnitsForQuantityType:(id)arg1 completion:(id /* block */)arg2;
+ (unsigned long long)workoutActivityTypeFromReadableWorkoutActivityType:(id)arg1;

@end
